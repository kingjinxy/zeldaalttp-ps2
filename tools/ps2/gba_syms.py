#!/usr/bin/env python3
"""Writes the PS2 link's GBA symbols (build/ps2/gba_syms.ld): absolute EWRAM/IWRAM symbols from sym_ewram.txt and
sym_iwram.txt, and the assignments after ldscript.txt's SECTIONS block (aliases, fixed addresses)."""
import re, sys

out = []
for f, base in (("sym_ewram.txt", 0x02000000), ("sym_iwram.txt", 0x03000000)):
    off = 0
    for stmt in re.findall(r'[^;]+;', open(f).read()):
        m = re.fullmatch(r'\s*\.\s*=\s*(\w+)\s*;', stmt)
        if m:
            off = int(m.group(1), 0)
            continue
        m = re.fullmatch(r'\s*(\w+)\s*=\s*\.\s*;', stmt)
        if m:
            out.append("%s = 0x%08X;" % (m.group(1), base + off))
s = open("ldscript.txt").read()
depth, end = 0, None
for i, ch in enumerate(s[s.index("SECTIONS"):], s.index("SECTIONS")):
    if ch == "{": depth += 1
    elif ch == "}":
        depth -= 1
        if depth == 0:
            end = i + 1
            break
out.append(s[end:])
open(sys.argv[1], "w").write("\n".join(out) + "\n")
