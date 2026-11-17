#!/usr/bin/env python3
"""ROM data ranges the game loads, from mgba_run --loads, checked against the CPU's own reads.

    python3 tools/load_ranges.py LOADS [--rom baserom.gba] [--out RANGES]

A range comes from a BIOS call (swi 0x0B CpuSet, 0x0C CpuFastSet, 0x11/0x12 LZ77) or a DMA whose source is
in ROM data; its bytes are exactly what the BIOS/DMA read (LZ77: the decoded stream length; a fill reads
one unit). It is "gfx" when the destination is palette, VRAM or OAM, or a RAM area that a later copy
sends there (a screen buffer, e.g. a background map), or "ram-no-ptr" when no 32-bit CPU load ever read
its RAM copy (LOADS.ramwords); else "ram". All but "ram" go to --out. Check: CPU loads
(cpu32/16/8 lines) that fall inside a gfx range, i.e. code reading graphics bytes itself. --out writes
the gfx ranges that no 32-bit CPU load touches, as "START END" for tools/reach.py --packed.
"""
import argparse, bisect, sys, os
sys.path.insert(0, os.path.dirname(__file__))

ap = argparse.ArgumentParser()
ap.add_argument("loads")
ap.add_argument("--rom", default="baserom.gba")
ap.add_argument("--out")
ap.add_argument("--ramwords", help="LOADS.ramwords from mgba_run (default: next to LOADS)")
args = ap.parse_args()
rom = open(args.rom, "rb").read()

def lz_len(p):  # bytes an LZ77 stream at ROM offset p occupies
    n = rom[p + 1] | rom[p + 2] << 8 | rom[p + 3] << 16
    q, k = p + 4, 0
    while k < n:
        flags = rom[q]; q += 1
        for b in range(8):
            if k >= n:
                break
            if flags & 0x80 >> b:
                k += (rom[q] >> 4) + 3; q += 2
            else:
                k += 1; q += 1
    return q - p

ranges, cpu, screen = {}, [], []  # ranges: (start, end) -> {(kind, where, caller)}; screen: RAM areas sent to gfx
for line in open(args.loads):
    kind, src, dst, n, caller = line.split()
    src, dst, n, caller = int(src, 16), int(dst, 16), int(n, 16), int(caller, 16)
    if kind.startswith("cpu"):
        cpu.append((src, n, kind, caller))
        continue
    if kind in ("swi11", "swi12"):
        ln = lz_len(src - 0x08000000)
    elif kind == "swi0B":
        unit = 4 if n >> 26 & 1 else 2
        ln = unit if n >> 24 & 1 else (n & 0x1FFFFF) * unit
    elif kind == "swi0C":
        ln = 4 if n >> 24 & 1 else ((n & 0x1FFFFF) + 7) // 8 * 32
    elif kind == "dma":
        ctl, cnt = n >> 16, n & 0xFFFF
        unit = 4 if ctl >> 10 & 1 else 2
        ln = unit if (ctl >> 7 & 3) == 2 else (cnt or 0x4000) * unit  # fixed source reads one unit
    else:
        continue
    if src >> 24 in (2, 3):  # RAM to palette/VRAM/OAM: a screen buffer
        screen.append((src, src + ln))
        continue
    where = "gfx" if dst >> 24 in (5, 6, 7) else "ram"
    ranges.setdefault((src, src + ln), set()).add((kind, where, caller, dst, ln))

# A ROM range copied to RAM counts as gfx when its RAM copy lies inside an area later sent to the screen.
# Decompressed streams fill more RAM than their ROM size; the copy checked is the decoded size for LZ77.
def to_screen(dst, n):
    return any(a <= dst and dst + n <= b for a, b in screen)
def decoded(kind, src, ln):
    return rom[src - 0x08000000 + 1] | rom[src - 0x08000000 + 2] << 8 | rom[src - 0x08000000 + 3] << 16 \
        if kind in ("swi11", "swi12") else ln
for r, v in ranges.items():
    for t in list(v):
        kind, where, caller, dst, ln = t
        if where == "ram" and to_screen(dst, decoded(kind, r[0], ln)):
            v.add((kind, "gfx-via-ram", caller, dst, ln))
# A ROM range copied to RAM whose RAM copy no 32-bit CPU load ever read: the code never takes a pointer
# from it (tables of pointers are read with ldr), so its words aren't pointers either.
rw = open(args.ramwords or args.loads + ".ramwords", "rb").read()
def ram_words_read(dst, n):
    o = (dst & 0x3FFFF) if dst >> 24 == 2 else 0x40000 + (dst & 0x7FFF)
    return any(rw[w] for w in range(o >> 2, min((o + n + 3) >> 2, len(rw))))
for r, v in ranges.items():
    for t in list(v):
        kind, where, caller, dst, ln = t
        if where == "ram" and dst >> 24 in (2, 3) and not ram_words_read(dst, decoded(kind, r[0], ln)):
            v.add((kind, "ram-no-ptr", caller, dst, ln))
print(f"ROM ranges copied to RAM and never read there as 32-bit words: "
      f"{sum(1 for v in ranges.values() if any(t[1] == 'ram-no-ptr' for t in v) and not any(t[1].startswith('gfx') for t in v))}")
gfx = sorted(r for r, v in ranges.items() if any(t[1] != "ram" for t in v))
ram = sorted(r for r, v in ranges.items() if all(t[1] == "ram" for t in v))
print(f"screen buffers in RAM: {len(set(screen))}; ROM ranges reaching the screen through them: "
      f"{sum(1 for v in ranges.values() if any(t[1] == 'gfx-via-ram' for t in v))}")
starts = [s for s, _ in gfx]
def in_gfx(a, ln):
    i = bisect.bisect_right(starts, a + ln - 1) - 1
    return gfx[i] if i >= 0 and a < gfx[i][1] and a + ln > gfx[i][0] else None

print(f"loaded ranges: {len(gfx)} gfx ({sum(e - s for s, e in gfx):,} bytes), {len(ram)} to RAM "
      f"({sum(e - s for s, e in ram):,} bytes)")
hit = {}
for a, ln, kind, caller in cpu:
    g = in_gfx(a, ln)
    if g:
        hit.setdefault(g, []).append((kind, a, caller))
bad = {g for g, v in hit.items() if any(k == "cpu32" for k, _, _ in v)}
print(f"gfx ranges the CPU also reads: {len(hit)} ({len(bad)} with 32-bit loads)")
for g in sorted(hit)[:15]:
    ks = sorted({(k, c) for k, _, c in hit[g]})
    print(f"  {g[0]:08X}-{g[1]:08X} {sorted({t[0] for t in ranges[g]})}: " +
          ", ".join(f"{k} from {c:08X}" for k, c in ks[:4]))
if args.out:
    with open(args.out, "w") as f:
        for s, e in gfx:
            if (s, e) not in bad:
                f.write(f"{s:08X} {e:08X}\n")
