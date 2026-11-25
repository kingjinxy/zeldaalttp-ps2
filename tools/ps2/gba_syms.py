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

# PS2 only: the arrays tools/ps2/moved.py moves
sys.path.insert(0, "tools/ps2")
from moved import moved


out[:-1] = [re.sub(r"(\w+) = (0x[0-9A-F]{8});", lambda m: "%s = 0x%08X;" % (m.group(1), moved(int(m.group(2), 16))), l)
            for l in out[:-1]]
# PS2 only: the per-player pointer tables with room for 8 (src/ps2/players.c); a later assignment replaces ldscript's
out.append("gPlayerRecordPtrs = ps2_player_record_ptrs;\ngPlayerLinkPtrs = ps2_player_link_ptrs;")
open(sys.argv[1], "w").write("\n".join(out) + "\n")
