#!/usr/bin/env python3
"""Disassembles a code region that is still `.INCBIN "baserom.gba", OFF, END-OFF` in an asm/non_matching .inc:

    python3 tools/disasm_blob.py INC_FILE [--arm] [--dry-run]

Entry points: the blob start, BL targets from anywhere in the ROM, and words in the ROM's code that point
into the blob with the Thumb bit set. From them, a recursive descent marks code (following branches) and
literals (pc-relative loads, switch tables); everything else stays data. Instructions are objdump's, in
unified syntax; any instruction that doesn't assemble, or not to the same bytes, becomes a raw .2byte or
.4byte. The result is linked at its ROM address and compared byte for byte before anything is written.
Each entry point after the blob start becomes its own .inc (THUMB_FUNC_START/ARM_FUNC_START sub_ADDR),
included after INC_FILE's line in its src/*.c. --arm: the blob start is ARM code (otherwise Thumb).
"""
import glob, os, re, struct, subprocess, sys, tempfile

inc = sys.argv[1]
start_arm = "--arm" in sys.argv
dry = "--dry-run" in sys.argv
rom = open("baserom.gba", "rb").read()
text = open(inc).read()
m = re.search(r'^[ \t]*\.INCBIN "baserom\.gba", 0x([0-9A-Fa-f]+), 0x([0-9A-Fa-f]+)-0x([0-9A-Fa-f]+)[ \t]*$', text, re.M | re.I)
if not m:
    sys.exit("no .INCBIN in " + inc)
assert int(m.group(1), 16) == int(m.group(3), 16)
lo, hi = 0x08000000 + int(m.group(1), 16), 0x08000000 + int(m.group(2), 16)
CODE_END = 0x08137B10
COND = r"(?:eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)"


def w32(a):
    return struct.unpack_from("<I", rom, a - 0x08000000)[0]


def w16(a):
    return struct.unpack_from("<H", rom, a - 0x08000000)[0]


def objdump(arm):
    out = subprocess.run(["arm-none-eabi-objdump", "-D", "-b", "binary", "-marm", "--adjust-vma=0x08000000",
                          f"--start-address={lo:#x}", f"--stop-address={hi:#x}"] + ([] if arm else ["-Mforce-thumb"])
                         + ["baserom.gba"], capture_output=True, text=True).stdout
    ins = {}
    for line in out.splitlines():
        mm = re.match(r"\s*([0-9a-f]+):\t([0-9a-f ]+?)\s*\t(.*)$", line)
        if mm:
            ins[int(mm.group(1), 16)] = (len(mm.group(2).replace(" ", "")) // 2, mm.group(3).strip())
    return ins


TH, AR = objdump(False), objdump(True)

entries = {lo: start_arm}  # addr -> is_arm
for p in range(0x08000000, CODE_END - 3, 2):
    h1, h2 = w16(p), w16(p + 2)
    if h1 & 0xF800 == 0xF000 and h2 & 0xF800 == 0xF800 and not lo <= p < hi:
        off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
        t = p + 4 + (off - 0x800000 if off & 0x400000 else off)
        if lo <= t < hi:
            entries.setdefault(t, False)
for p in range(0x08000000, 0x08000000 + len(rom) - 3, 4):  # whole ROM: data tables hold callbacks too
    v = w32(p)
    if v & 1 and lo <= v - 1 < hi and not lo <= p < hi:
        entries.setdefault(v - 1, False)

code, lits, jt, labels = {}, set(), set(), set()
work = list(entries.items())
while work:
    a, arm = work.pop()
    while lo <= a < hi and a not in code:
        tab = AR if arm else TH
        if a not in tab:
            break
        size, ins = tab[a]
        code[a] = (size, ins, arm)
        mn = ins.split()[0] if ins.split() else ""
        ops = ins[len(mn):].split("@")[0].split(";")[0].strip()
        base = re.sub(r"\.[nw]$", "", mn)
        tm = re.match(r"(0x[0-9a-f]+)\b", ops)
        tgt = int(tm.group(1), 16) if tm else None
        if base in ("bl", "blx") and tgt is not None:
            if lo <= tgt < hi:
                entries.setdefault(tgt, arm if base == "bl" else not arm)
                work.append((tgt, entries[tgt]))
        elif re.fullmatch("b" + COND + "?", base) and tgt is not None:
            labels.add(tgt)
            work.append((tgt, arm))
            if base == "b":
                break
        lit = re.search(r"\[pc, #(-?\d+)\]", ops)
        if lit and base.startswith("ldr"):
            la = (a + 8 + int(lit.group(1))) if arm else (((a + 4) & ~3) + int(lit.group(1)))
            if lo <= la <= hi - 4:
                lits.add(la)
                v = w32(la)
                if v & 1 and lo <= v - 1 < hi:
                    entries.setdefault(v - 1, False)
                    work.append((v - 1, False))
                elif not v & 1 and not arm and lo <= v < hi and 0 < v - a < 0x400:
                    t = v  # switch table right after the code
                    while t + 4 <= hi and lo <= w32(t) < hi and a < w32(t) and t not in code:
                        jt.add(t)
                        labels.add(w32(t) & ~1)
                        work.append((w32(t) & ~1, False))
                        t += 4
        first = ops.split(",")[0]
        ends = (base == "bx" or (base in ("mov", "add", "ldr") and first == "pc")
                or (base in ("pop", "ldmia", "ldmfd", "ldm") and "pc" in ops))
        if ends and not re.search(COND + "$", base if base != "bx" else ""):
            break
        a += size

_prev = text[:m.start()].rstrip().splitlines()[-1].strip()
named_start = _prev[:-1] if _prev.endswith(":") else None  # a label right before the .INCBIN names the start


def label(a):
    if a == lo and named_start:
        return named_start
    return f"sub_{a:08X}" if a in entries else f"_{a:08X}"


def emit(raw):
    """Returns (lines, addr of each line or None)."""
    out, at, a, mode = [], [], lo, None
    def put(s, addr=None):
        out.append(s)
        at.append(addr)
    while a < hi:
        if a in entries and not (a == lo and named_start):
            macro = "ARM_FUNC_START" if entries[a] else ("THUMB_FUNC_START" if a % 4 == 0 else "THUMB_FUNC_START_NOALIGN")
            put(f"\t{macro} sub_{a:08X}")
            put(f"sub_{a:08X}: @ {a:#010X}")
            mode = "arm" if entries[a] else "thumb"
        elif a in labels and a not in entries:
            put(f"_{a:08X}:")
        if a in code:
            size, ins, arm = code[a]
            want = "arm" if arm else "thumb"
            if mode != want:
                put(f"\t.{want}")
                mode = want
            if a in raw:
                put(f"\t.{'4' if size == 4 else '2'}byte {(w32(a) if size == 4 else w16(a)):#x}", a)
            else:
                mn = ins.split()[0]
                ops = ins[len(mn):].split("@")[0].split(";")[0].strip()
                if re.sub(r"\.[nw]$", "", mn).startswith("b"):
                    ops = re.sub(r"^0x([0-9a-f]+)(?:\s*<[^>]*>)?",
                                 lambda mm: label(int(mm.group(1), 16)) if lo <= int(mm.group(1), 16) < hi else mm.group(0), ops)
                put(f"\t{mn} {ops}".rstrip(), a)
            a += size
        elif (a in lits or a in jt) and a + 4 <= hi:
            v = w32(a)
            put(f"\t.4byte {(label(v & ~1) + ('+1' if v & 1 else '')) if a in jt else f'{v:#010x}'}", a)
            a += 4
        else:
            put(f"\t.byte {rom[a - 0x08000000]:#04x}", a)
            a += 1
    return out, at


def build(lines):
    with tempfile.TemporaryDirectory() as d:
        open(f"{d}/t.s", "w").write('\t.include "macro.inc"\n\t.text\n\t.syntax unified\n' + (f"{named_start}:\n" if named_start else "") + "\n".join(lines) + "\n")
        r = subprocess.run(["arm-none-eabi-as", "-mcpu=arm7tdmi", "-mthumb-interwork", "-Iasminclude", "-o", f"{d}/t.o", f"{d}/t.s"], capture_output=True, text=True)
        if r.returncode:
            return None, [int(x) - 4 for x in re.findall(r"t\.s:(\d+): Error", r.stderr)], r.stderr
        r = subprocess.run(["arm-none-eabi-ld", f"-Ttext={lo:#x}", "-o", f"{d}/t.elf", f"{d}/t.o"], capture_output=True, text=True)
        if r.returncode:
            sys.exit("link failed:\n" + r.stderr[:1500])
        subprocess.run(["arm-none-eabi-objcopy", "-O", "binary", "-j", ".text", f"{d}/t.elf", f"{d}/t.bin"])
        return open(f"{d}/t.bin", "rb").read(), [], ""


want = rom[lo - 0x08000000:hi - 0x08000000]
raw = set()
for attempt in range(500):
    lines, at = emit(raw)
    b, errs, msg = build(lines)
    if b is None:
        new = {at[i] for i in errs if 0 <= i < len(at) and at[i] in code}
        if not new:
            sys.exit("assembler errors I can't map:\n" + msg[:1500])
        raw |= new
        continue
    if b[:len(want)] == want and len(b) - len(want) < 4:  # the section may be padded to 4 bytes
        break
    i = next((i for i in range(min(len(b), len(want))) if b[i] != want[i]), min(len(b), len(want)))
    c = max((x for x in code if x <= lo + i and x not in raw), default=None)
    if c is None or c + code[c][0] <= lo + i - 4:
        sys.exit(f"mismatch at {lo + i:#x} outside decoded code (built {b[i:i+4].hex()} want {want[i:i+4].hex()})")
    raw.add(c)
else:
    sys.exit("too many mismatches")

print(f"{lo:#x}-{hi:#x}: {len(entries)} entry points, {len(code)} instructions ({len(raw)} raw), "
      f"{len(lits)} literals, {len(jt)} switch-table words, {sum(1 for x in at if x is not None and x not in code and x not in lits and x not in jt)} data bytes")
if dry:
    print("\n".join(lines))
    sys.exit()

# Split at entry points: the first part replaces the .INCBIN line, the others become their own .inc.
chunks, cur = [], []
for s in lines:
    mm = re.match(r"\t(?:ARM|THUMB)_FUNC_START(?:_NOALIGN)? (sub_[0-9A-F]{8})$", s)
    if mm:
        chunks.append([mm.group(1), [s]] if True else None)
        continue
    if chunks:
        chunks[-1][1].append(s)
    else:
        cur.append(s)
d = os.path.dirname(inc)
for name, body in chunks:
    if os.path.exists(f"{d}/{name}.inc"):
        sys.exit(f"{d}/{name}.inc exists")
host = os.path.basename(inc)[:-4]
src = [c for c in glob.glob("src/*.c") if f'{d}/{host}.inc\\"' in open(c).read()]
assert len(src) == 1, src
# Syntax mode in effect at the blob: the last .syntax before it, in include order (gas default: divided).
mode = "divided"
for line in open(src[0]).read().splitlines():
    im = re.match(r'asm\("\.include \\"(.+?)\\""\);', line)
    body_text = open(im.group(1)).read() if im else line
    if im and im.group(1) == inc:
        body_text = text[:m.start()]
    found = re.findall(r"\.syntax (unified|divided)", body_text)
    if found:
        mode = found[-1]
    if im and im.group(1) == inc:
        break
head, tail = "\t.syntax unified\n", f"\t.syntax {mode}\n\t.thumb\n"
after = text[m.end() + 1:]  # host text after the blob goes after the last new chunk, keeping the order
if chunks:
    new_text = text[:m.start()] + head + "\n".join(cur) + "\n"
    chunks[-1][1].append(tail.rstrip("\n"))
    chunks[-1][1].append(after.rstrip("\n"))
    last_tail = ""
else:
    new_text = text[:m.start()] + head + "\n".join(cur) + "\n" + tail + after
open(inc, "w").write(new_text)
for i, (name, body) in enumerate(chunks):
    end = "" if i == len(chunks) - 1 else tail
    open(f"{d}/{name}.inc", "w").write(head + "\n".join(body) + "\n" + end)
line = f'asm(".include \\"{d}/{host}.inc\\"");'
c = open(src[0]).read()
assert line in c
c = c.replace(line, line + "".join(f'\nasm(".include \\"{d}/{n}.inc\\"");' for n, _ in chunks), 1)
open(src[0], "w").write(c)
print(f"wrote {inc} and {len(chunks)} new .inc files, included from {src[0]}")
