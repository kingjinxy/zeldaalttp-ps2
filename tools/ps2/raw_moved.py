#!/usr/bin/env python3
"""Fails (exit 1) when asm or data holds an address inside a range the PS2 build moves (tools/ps2/moved.py) as a
plain number (`.4byte 0x03000940`) or as `.byte` runs: only symbols follow the move (gba_syms.py), so the PS2 would
read the old, stale place (walkthrough step 63: enemies chose their target from it). Name the symbol instead
(`.4byte gUnknown_03000940`, `gUnknown_03006A30+0x28`). The same for the two per-player pointer tables
(`gPlayerRecordPtrs`, `gPlayerLinkPtrs`). Makefile.ps2 runs it before linking."""
import glob
import re
import sys

sys.path.insert(0, "tools/ps2")
from moved import MOVED  # noqa: E402


TABLES = (0x08000FF4, 0x08003B54)  # gPlayerRecordPtrs, gPlayerLinkPtrs: the PS2 gives them 8 entries (src/ps2/players.c)


def inside(v):
    return any(a <= v < a + n for a, n, _ in MOVED) or v in TABLES


bad = []
for f in sorted(glob.glob("asm/**/*.inc", recursive=True) + glob.glob("asm/*.s") + glob.glob("data/*.s")):
    run = []  # (line, byte) of the current .byte run
    for i, line in enumerate(open(f, errors="replace").read().split("\n") + [""], 1):
        code = line.split("@")[0]
        m = re.match(r"\s*\.byte\s+(0x[0-9a-fA-F]+|\d+)\s*$", code)
        if m:
            run.append((i, int(m.group(1), 0)))
            continue
        for k in range(len(run) - 3):
            v = run[k][1] | run[k + 1][1] << 8 | run[k + 2][1] << 16 | run[k + 3][1] << 24
            if inside(v):
                bad.append("%s:%d: .byte run holds 0x%08X" % (f, run[k][0], v))
        run = []
        for m in re.finditer(r"\.(?:4byte|word|long)\s+(0x[0-9a-fA-F]+)\b", code):
            if inside(int(m.group(1), 16)):
                bad.append("%s:%d: %s" % (f, i, line.strip()))
for b in bad:
    print(b)
sys.exit(1 if bad else 0)
