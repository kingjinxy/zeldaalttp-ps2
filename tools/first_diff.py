#!/usr/bin/env python3
"""After a failed `make compare`: the first address where zeldaalttp.gba differs from baserom.gba, and the
function or data symbol it falls in (from zeldaalttp.elf). Later differences are often only a knock-on
effect of a size change, so fix the first one first. Exits 1 if the ROMs differ.

    python3 tools/first_diff.py
"""
import bisect, subprocess

a, b = open("baserom.gba", "rb").read(), open("zeldaalttp.gba", "rb").read()
i = next((i for i in range(min(len(a), len(b))) if a[i] != b[i]), None)
if i is None:
    print("no difference" if len(a) == len(b) else f"sizes differ: {len(a):#x} vs {len(b):#x}")
    raise SystemExit(0 if len(a) == len(b) else 1)
addr = 0x08000000 + i
syms = []
for line in subprocess.run(["arm-none-eabi-nm", "-n", "zeldaalttp.elf"], capture_output=True, text=True).stdout.splitlines():
    f = line.split()
    if len(f) == 3 and f[1] in "TtRr" and not f[2].startswith(("_0", ".")):
        syms.append((int(f[0], 16) & ~1, f[2]))
syms.sort()
k = bisect.bisect_right(syms, (addr, "\x7f")) - 1
name, base = (syms[k][1], syms[k][0]) if k >= 0 else ("?", addr)
print(f"first difference at {addr:#010x} ({name}+{addr - base:#x}): original {a[i:i+8].hex(' ')}, built {b[i:i+8].hex(' ')}")
raise SystemExit(1)
