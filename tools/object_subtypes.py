#!/usr/bin/env python3
"""Object subtypes (index into the object handler table 0x0813F998) and the function that creates each,
for tools/reach.py --objects.

    python3 tools/object_subtypes.py > subtypes.txt     (reads zeldaalttp.gba/.elf)

Sources: calls to the creators sub_0804C8A8 / sub_0804C938 with a constant subtype in r0 (the last
instruction writing r0 before the call is movs r0, #N); the spawn lists passed to sub_0804C808 (records
of subtype, form, parameter, x, y; 0 ends); sub_0804CCE4, which passes its first argument on (constant
at its callers); the drop tables read by sub_08013EC0 and sub_080142F4 (4-byte records, subtype first);
direct stores in decompiled C (23 sub_0803F0E4, 15 sub_0804055C, 32 sub_08040890, 64 sub_0805B370).
Not found: direct stores in functions still in asm. Prints "SUBTYPE CREATOR" (hex creator), then "# ..."
lines for creator calls whose subtype it can't resolve.
"""
import bisect, re, struct, subprocess, sys

rom = open("zeldaalttp.gba", "rb").read()
H = lambda a: struct.unpack_from("<H", rom, a - 0x08000000)[0]
W = lambda a: struct.unpack_from("<I", rom, a - 0x08000000)[0]
CODE_END, TABLE_SIZE = 0x08137B10, 108

funcs = sorted(int(l.split()[0], 16) for l in subprocess.run(["arm-none-eabi-nm", "-n", "zeldaalttp.elf"],
               capture_output=True, text=True).stdout.splitlines() if re.match(r"^[0-9a-f]{8} T ", l))
def owner(a):
    return funcs[bisect.bisect_right(funcs, a) - 1]

def writes_r0(op):  # the Thumb instruction writes r0 (enough for -O0 argument setup)
    f = op >> 11
    if f <= 3: return op & 7 == 0                               # shifts, add/sub
    if 4 <= f <= 7: return f != 5 and (op >> 8) & 7 == 0        # mov/add/sub imm (5 = cmp)
    if op >> 10 == 0x10: return op & 7 == 0 and (op >> 6) & 15 not in (8, 10, 11)  # alu, not tst/cmp/cmn
    if op >> 8 in (0x44, 0x46): return (op & 7 | (op >> 4) & 8) == 0  # add/mov hi
    if f == 9 or op >> 12 == 0xA: return (op >> 8) & 7 == 0     # ldr pc-rel, add pc/sp
    if op >> 12 == 5: return op & 7 == 0 and (op >> 9) & 7 > 2  # register loads (not stores)
    if op >> 12 in (6, 7, 8): return op >> 11 & 1 and op & 7 == 0
    if op >> 12 == 9: return op >> 11 & 1 and (op >> 8) & 7 == 0
    return False

def r0_before(p):  # constant in r0 at the call at p, or None; also the ldr pc-rel value as ("ldr", v)
    q = p - 2
    for _ in range(16):
        op = H(q)
        if op >> 8 == 0x20: return op & 0xFF
        if op >> 11 == 9 and (op >> 8) & 7 == 0: return ("ldr", W(((q + 4) & ~3) + (op & 0xFF) * 4))
        if writes_r0(op) or op & 0xF800 in (0xF000, 0xF800): return None
        q -= 2
    return None

def calls(target):
    for p in range(0x08000000, CODE_END - 4, 2):
        hi, lo = H(p), H(p + 2)
        if hi & 0xF800 == 0xF000 and lo & 0xF800 == 0xF800:
            off = (hi & 0x7FF) << 12 | (lo & 0x7FF) << 1
            if p + 4 + (off - 0x800000 if off & 0x400000 else off) == target:
                yield p

out, unresolved = set(), []
for creator in (0x0804C8A8, 0x0804C938):
    for p in calls(creator):
        v = r0_before(p)
        if isinstance(v, int): out.add((v, owner(p)))
        else: unresolved.append(p)
for p in calls(0x0804C808):  # spawn lists
    v = r0_before(p)
    if isinstance(v, tuple):
        a = v[1]
        while rom[a - 0x08000000]:
            out.add((rom[a - 0x08000000], owner(p))); a += 5
    else: unresolved.append(p)
for p in calls(0x0804CCE4):
    v = r0_before(p)
    if isinstance(v, int): out.add((v, owner(p)))
    else: unresolved.append(p)
# Drop tables: kind-indexed 4-byte records up to the next table (0x084299B4: 19 records to 0x08429A00;
# 0x08429A00: up to the first record whose subtype is outside the handler table)
for base, creator, n in ((0x084299B4, 0x08013EC0, 19), (0x08429A00, 0x080142F4, 64)):
    for i in range(n):
        s = rom[base - 0x08000000 + 4 * i]
        if s >= TABLE_SIZE: break
        out.add((s, creator))
for s, f in ((23, 0x0803F0E4), (15, 0x0804055C), (32, 0x08040890), (64, 0x0805B370)):  # direct stores in C
    out.add((s, f))
known = {0x0804C808, 0x0804CCE4, 0x08013EC0, 0x080142F4}  # their creator calls are covered above
for s, f in sorted(out, key=lambda x: (x[0], x[1] or 0)):
    if s < TABLE_SIZE:
        print(f"{s} {f:08X}")
for p in unresolved:
    if owner(p) not in known:
        print(f"# unresolved creator call at {p:08X} in {owner(p):08X}")
