#!/usr/bin/env python3
"""Groups the functions still in asm/non_matching by identical code once BL targets and literal-pool words
are masked (same fingerprint as tools/tmc_match.py). Members of a group differ only in the functions they
call and the globals they load, so one hand-written C template covers the whole group.

    python3 tools/clusters.py [--min N] [--show K]

Prints groups of at least N members (default 3), largest first, with one member's .inc for the top K.
"""
import argparse, glob, os, subprocess, sys
from collections import defaultdict

sys.path.insert(0, os.path.dirname(__file__))
ap = argparse.ArgumentParser()
ap.add_argument("--min", type=int, default=3)
ap.add_argument("--show", type=int, default=0)
args = ap.parse_args()


def masks(code):
    import struct
    m = {}
    for p in range(0, len(code) - 1, 2):
        h = struct.unpack_from("<H", code, p)[0]
        if h & 0xF800 == 0xF000 and p + 3 < len(code) and struct.unpack_from("<H", code, p + 2)[0] & 0xF800 == 0xF800:
            m[p] = 4
        elif h & 0xF800 == 0x4800:
            t = ((p + 4) & ~3) + (h & 0xFF) * 4
            if t + 4 <= len(code):
                m[t] = 4
    return m


rom = open("baserom.gba", "rb").read()
incs = {os.path.basename(p)[:-4]: p for p in glob.glob("asm/non_matching/*/*.inc")}
groups = defaultdict(list)
out = subprocess.run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"], capture_output=True, text=True).stdout
for line in out.splitlines():
    f = line.split()
    if len(f) < 8 or f[3] != "FUNC" or int(f[2]) == 0 or f[7] not in incs:
        continue
    start, size = (int(f[1], 16) & ~1) - 0x08000000, int(f[2])
    code = bytearray(rom[start:start + size])
    for p, n in masks(bytes(code)).items():
        code[p:p + n] = b"\0" * n
    groups[(bytes(code), "/fs_game/" in incs[f[7]])].append(f[7])

big = sorted((g for g in groups.values() if len(g) >= args.min), key=len, reverse=True)
print(f"{sum(len(g) for g in big)} functions in {len(big)} groups of {args.min}+")
for i, g in enumerate(big):
    print(f"{len(g):4} {incs[g[0]].split('/')[2]:12} {' '.join(sorted(g)[:6])}{' ...' if len(g) > 6 else ''}")
    if i < args.show:
        print(open(incs[g[0]]).read())
