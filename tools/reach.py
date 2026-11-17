#!/usr/bin/env python3
"""Functions reachable from boot with chosen game modes cut off: the decomp work queue.

    python3 tools/reach.py [--cut ADDR ...] [--list FILE] [--why ADDR] [--coverage BITMAP ...]

Reads zeldaalttp.elf/.map/.gba (normal build). Edges: Thumb and ARM BL calls in a function, and every aligned
word in a function's bytes (literal pools, jump tables) that points at a function or into ROM data.
A data object (from one data symbol to the next) passes on every function and data pointer it holds,
so function pointer tables and structs with callbacks are followed. --cut removes functions from the
graph (default: sub_0800B69C, the A Link to the Past mode handler); an address in ROM data cuts that data
object (e.g. a handler table). Over-approximates: a pointer in a
data blob counts even if the code never uses it.
"""
import argparse, bisect, re, struct, subprocess, sys
from collections import Counter, defaultdict

ROM_BASE, DATA_START = 0x08000000, 0x08137B10

ap = argparse.ArgumentParser()
ap.add_argument("--cut", nargs="*", default=["0x0800B69C"])
ap.add_argument("--why", help="print the chain of edges from boot to this function")
ap.add_argument("--coverage", action="append", default=[], help="mgba_run --coverage bitmap(s): report executed functions")
ap.add_argument("--list-executed", help="with --coverage: write executed functions (addr name file size) here")
ap.add_argument("--packed", help="tools/lz77_scan.py output: compressed ranges, whose words are never pointers")
ap.add_argument("--list", help="write reachable functions (addr name file size) here")
ap.add_argument("--classify", help="write every function (addr name file size class executed) here; class from "
                "two walks, cutting the A Link to the Past (mode 13) or the Four Swords (mode 9) handler")
args = ap.parse_args()

rom = open("zeldaalttp.gba", "rb").read()
def word(a):
    o = a - ROM_BASE
    return struct.unpack_from("<I", rom, o)[0] if 0 <= o <= len(rom) - 4 else None

funcs, names, data_syms = {}, {}, set()
for line in subprocess.run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"], capture_output=True, text=True).stdout.splitlines():
    f = line.split()
    if len(f) < 8 or not re.fullmatch(r"[0-9a-f]{8}", f[1]):
        continue
    addr = int(f[1], 16)
    # Functions: typed FUNC, or global untyped labels (crt0's _start and other ARM routines in asm)
    if ROM_BASE <= addr < DATA_START and (f[3] == "FUNC" or (f[3] == "NOTYPE" and f[4] == "GLOBAL")):
        funcs[addr & ~1] = None
        names.setdefault(addr & ~1, f[7])
    elif f[3] in ("OBJECT", "NOTYPE") and DATA_START <= addr < 0x08800000 and not f[7].startswith("$"):
        data_syms.add(addr)
starts = sorted(funcs)
data_starts = sorted(data_syms)
code_end = DATA_START

# Function -> object file, from the map
objfile = {}
sections = []
for m in re.finditer(r"^ \.text\s+0x([0-9a-f]+)\s+0x([0-9a-f]+) (\S+\.o)", open("zeldaalttp.map").read(), re.M):
    sections.append((int(m.group(1), 16), int(m.group(1), 16) + int(m.group(2), 16), m.group(3)))
for a in starts:
    objfile[a] = next((o for s, e, o in sections if s <= a < e), "?")

def func_end(a):
    i = bisect.bisect_right(starts, a)
    return starts[i] if i < len(starts) else code_end

def data_obj(a):
    i = bisect.bisect_right(data_starts, a) - 1
    if i < 0:
        return None
    return data_starts[i], (data_starts[i + 1] if i + 1 < len(data_starts) else 0x08800000)

func_set = set(starts)
def classify(v):
    if v is None:
        return None
    if (v & ~1) in func_set:
        return ("f", v & ~1)
    if DATA_START <= v < 0x08800000:
        d = data_obj(v)
        return ("d", d[0]) if d else None
    return None

edges = defaultdict(set)
for a in starts:
    e = func_end(a)
    for p in range(a, e - 3, 2):  # Thumb BL: two halfwords F000/F800
        hi, lo = struct.unpack_from("<HH", rom, p - ROM_BASE)
        if hi & 0xF800 == 0xF000 and lo & 0xF800 == 0xF800:
            off = ((hi & 0x7FF) << 12) | ((lo & 0x7FF) << 1)
            if off & 0x400000:
                off -= 0x800000
            t = p + 4 + off
            if t in func_set:
                edges[("f", a)].add(("f", t))
    for p in range((a + 3) & ~3, e - 3, 4):
        w = word(p)
        if w >> 24 & 0x0F == 0x0B and w >> 28 != 0xF:  # ARM BL (any condition)
            off = w & 0xFFFFFF
            t = p + 8 + ((off - 0x1000000 if off & 0x800000 else off) << 2)
            if t in func_set:
                edges[("f", a)].add(("f", t))
        c = classify(w)
        if c and c != ("f", a):
            edges[("f", a)].add(c)
packed = bytearray(0x800000 // 4)  # per ROM word: 1 = inside an LZ77 stream
if args.packed:
    for line in open(args.packed):
        if line[0] != "#":
            a, b = (int(x, 16) - ROM_BASE for x in line.split()[:2])
            packed[a // 4:(b + 3) // 4] = b"\1" * ((b + 3) // 4 - a // 4)
for s in data_starts:
    _, e = data_obj(s)
    for p in range(s & ~3, min(e, s + 0x100000) - 3, 4):
        if packed[(p - ROM_BASE) // 4]:
            continue
        c = classify(word(p))
        if c and c != ("d", s):
            edges[("d", s)].add(c)

def walk(cut):
    roots = [("f", ROM_BASE)]  # crt0 _start, the reset vector
    parent = {r: None for r in roots}
    stack = list(roots)
    while stack:
        n = stack.pop()
        for m in sorted(edges[n]):
            if m not in parent and m[1] not in cut:
                parent[m] = n
                stack.append(m)
    return parent

parent = walk({int(c, 16) & ~1 for c in args.cut})
seen = set(parent)
if args.why:
    n = ("f", int(args.why, 16) & ~1)
    if n not in parent:
        sys.exit("not reachable")
    while n:
        print(f"  {n[1]:08X} {names.get(n[1], 'data') if n[0] == 'f' else 'data'}")
        n = parent[n]
    sys.exit()

reach = sorted(a for k, a in seen if k == "f")
size = {a: func_end(a) - a for a in starts}
tot_n, tot_b = len(starts), sum(size.values())
r_b = sum(size[a] for a in reach)
print(f"reachable: {len(reach)} of {tot_n} functions, {r_b:,} of {tot_b:,} code bytes ({100*r_b/tot_b:.0f}%)")
print(f"data objects reachable: {sum(1 for k, _ in seen if k == 'd')} of {len(data_starts)}")
per_n, per_r, per_b = Counter(), Counter(), Counter()
for a in starts:
    per_n[objfile[a]] += 1
for a in reach:
    per_r[objfile[a]] += 1
    per_b[objfile[a]] += size[a]
print(f"\n{'file':32} {'reachable':>9} {'of':>5} {'bytes':>8}")
for o in sorted(per_n, key=lambda o: -per_b[o]):
    print(f"{o:32} {per_r[o]:9} {per_n[o]:5} {per_b[o]:8,}")
ran = set()
if args.coverage:
    cov = bytearray(0x80000)
    for path in args.coverage:
        for i, b in enumerate(open(path, "rb").read()):
            cov[i] |= b
    def executed(a):
        return any(cov[(x - ROM_BASE) >> 4] >> (((x - ROM_BASE) >> 1) & 7) & 1 for x in range(a, func_end(a), 2))
    ran = [a for a in starts if executed(a)]
    rset = set(reach)
    missed = [a for a in ran if a not in rset]
    print(f"\nexecuted in the coverage runs: {len(ran)} functions, {sum(size[a] for a in ran):,} bytes")
    print(f"executed but not statically reachable: {len(missed)}")
    for a in missed[:20]:
        print(f"  {a:08X} {names[a]} {objfile[a]}")
    if args.list_executed:
        with open(args.list_executed, "w") as f:
            for a in ran:
                f.write(f"{a:08X} {names[a]} {objfile[a]} {size[a]}\n")
    per_x = Counter(objfile[a] for a in ran)
    print("executed per file: " + ", ".join(f"{o} {n}" for o, n in per_x.most_common(12)))
if args.list:
    with open(args.list, "w") as f:
        for a in reach:
            f.write(f"{a:08X} {names[a]} {objfile[a]} {size[a]}\n")
if args.classify:
    LTTP, FS = 0x0800B69C, 0x0802E764  # mode table 0x0842731C entries 13 and 9
    fs = {a for k, a in walk({LTTP}) if k == "f"}
    lttp = {a for k, a in walk({FS}) if k == "f"}
    both = {a for k, a in walk(set()) if k == "f"}
    ran_set = set(ran) if args.coverage else set()
    # Reached with either handler cut: boot, menus, or engine code the shared modes use
    cls = {a: "shared" if a in fs and a in lttp else "fs" if a in fs else "lttp" if a in lttp
           else "both-only" if a in both else "unreached" for a in starts}
    with open(args.classify, "w") as f:
        for a in starts:
            f.write(f"{a:08X} {names[a]} {objfile[a]} {size[a]} {cls[a]} {int(a in ran_set)}\n")
    print("\nclass        funcs   executed  in asm/non_matching")
    asm = {int(m, 16) for m in re.findall(r"sub_([0-9A-F]{8})\.inc", "\n".join(
        subprocess.run(["find", "asm/non_matching", "-name", "*.inc"], capture_output=True, text=True).stdout.split()))}
    for c in ("fs", "shared", "lttp", "both-only", "unreached"):
        xs = [a for a in starts if cls[a] == c]
        print(f"{c:12} {len(xs):5} {sum(a in ran_set for a in xs):9} {sum(a in asm for a in xs):9}")
