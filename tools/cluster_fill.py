#!/usr/bin/env python3
"""Fills a C template for every member of a tools/clusters.py group:

    python3 tools/cluster_fill.py MEMBER TEMPLATE OUT_BLOCKS OUT_DECLS

TEMPLATE is C for one function with placeholders: {F} the function's name, {B0} {B1} ... the functions it
calls (BL, in code order), {L0} {L1} ... the literal-pool words it loads (in order of first load), written
as the symbol at that address if there is one, else as a hex number. Lines starting with "DECL: " are
declarations to add (same placeholders). Members that call an address with no symbol are skipped.
OUT_BLOCKS is for place.py-style "@@ FUNC" blocks; OUT_DECLS has one declaration per line.
"""
import glob, os, struct, subprocess, sys

member, template, out_blocks, out_decls = sys.argv[1:5]
rom = open("baserom.gba", "rb").read()
incs = {os.path.basename(p)[:-4]: p for p in glob.glob("asm/non_matching/*/*.inc")}
syms, funcs = {}, {}
for line in subprocess.run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"], capture_output=True, text=True).stdout.splitlines():
    f = line.split()
    if len(f) < 8 or len(f[1]) != 8 or not all(c in "0123456789abcdef" for c in f[1]) or f[7].startswith(("$", ".", "_0")):
        continue
    a = int(f[1], 16)
    if f[3] == "FUNC":
        funcs[f[7]] = (a & ~1, int(f[2]))
        syms.setdefault(a & ~1, f[7])
    elif f[3] in ("OBJECT", "NOTYPE") and f[4] == "GLOBAL":
        syms.setdefault(a, f[7])


def parts(name):
    start, size = funcs[name]
    code = rom[start - 0x08000000:start - 0x08000000 + size]
    calls, lits, masked = [], [], bytearray(code)
    for p in range(0, size - 1, 2):
        h = struct.unpack_from("<H", code, p)[0]
        if h & 0xF800 == 0xF000 and p + 3 < size and struct.unpack_from("<H", code, p + 2)[0] & 0xF800 == 0xF800:
            off = ((h & 0x7FF) << 12) | ((struct.unpack_from("<H", code, p + 2)[0] & 0x7FF) << 1)
            calls.append(start + p + 4 + (off - 0x800000 if off & 0x400000 else off))
            masked[p:p + 4] = b"\0" * 4
        elif h & 0xF800 == 0x4800:
            t = ((p + 4) & ~3) + (h & 0xFF) * 4
            if t + 4 <= size:
                v = struct.unpack_from("<I", code, t)[0]
                if v not in lits:
                    lits.append(v)
                masked[t:t + 4] = b"\0" * 4
    return bytes(masked), calls, lits


key = parts(member)[0]
group = [n for n in incs if n in funcs and parts(n)[0] == key and ("/fs_game/" in incs[n]) == ("/fs_game/" in incs[member])]
tmpl = open(template).read()
decl_lines = [l[6:] for l in tmpl.splitlines() if l.startswith("DECL: ")]
body = "\n".join(l for l in tmpl.splitlines() if not l.startswith("DECL: ")).strip("\n") + "\n"
blocks, decls, skipped = [], [], []
for n in sorted(group):
    _, calls, lits = parts(n)
    if any(c not in syms for c in calls):
        skipped.append(n)
        continue
    sub = {"F": n}
    sub.update({f"B{i}": syms[c] for i, c in enumerate(calls)})
    sub.update({f"L{i}": syms.get(v, f"0x{v:X}") for i, v in enumerate(lits)})
    blocks.append(f"@@ {n}\n" + body.format(**sub))
    decls += [d.format(**sub) for d in decl_lines]
open(out_blocks, "w").write("".join(blocks))
open(out_decls, "w").write("\n".join(dict.fromkeys(decls)) + ("\n" if decls else ""))
print(f"{len(blocks)} of {len(group)} filled; skipped (call to an address without a symbol): {' '.join(skipped)}")
