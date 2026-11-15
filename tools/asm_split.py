#!/usr/bin/env python3
"""Turns asm/X.s into src/NAME.c plus one asm/non_matching/NAME/FUNC.inc per function, so functions can
be decompiled one at a time in place:

    python3 tools/asm_split.py asm/X.s NAME

If src/NAME.c exists and directly precedes asm/X.o in ldscript.txt, the includes are appended to it.

src/NAME.c holds one top-level asm(".include ...") per function, in the original order. All chunks still
assemble as one unit, so labels shared between functions keep working. To decompile a function, replace
its asm(...) line with C and delete its .inc. Then replace asm/X.o with src/NAME.o in ldscript.txt (done
here) and check `make compare`.
"""
import os, re, sys

src, name = sys.argv[1], sys.argv[2]
out_c, out_dir = f"src/{name}.c", f"asm/non_matching/{name}"
obj = src[:-2] + ".o"
ld = open("ldscript.txt").read()
if obj + "(" not in ld:
    sys.exit(f"{obj} not in ldscript.txt")
append = os.path.exists(out_c)
if os.path.exists(out_dir) or (append and not re.search(rf"src/{name}\.o\(\.text\);\s*{re.escape(obj)}\(\.text\);", ld)):
    sys.exit(f"{out_dir} exists, or {out_c} exists but isn't directly before {obj} in ldscript.txt")

start = re.compile(r"^\s*(thumb|arm)_func_start\s+(\w+)", re.I)
chunks, pre, cur = [], [], None
for line in open(src):
    m = start.match(line)
    if m:
        cur = [m.group(2), [line]]
        chunks.append(cur)
    elif cur:
        cur[1].append(line)
    else:
        pre.append(line)

os.makedirs(out_dir)
with open(out_c, "a" if append else "w") as c:
    c.write(("\n" if append else "") + f"// Functions not decompiled yet are in {out_dir}/, one .inc each (tools/asm_split.py from {src}).\n\n")
    for line in pre:
        if line.strip():
            c.write('asm("%s");\n' % line.strip().replace("\\", "\\\\").replace('"', '\\"'))
    c.write("\n")
    for fn, lines in chunks:
        with open(f"{out_dir}/{fn}.inc", "w") as f:
            f.writelines(lines)
        c.write(f'asm(".include \\"{out_dir}/{fn}.inc\\"");\n')

if append:
    ld = re.sub(rf"\n\s*{re.escape(obj)}\(\.text\);", "", ld)
else:
    ld = ld.replace(obj + "(", f"src/{name}.o(")
open("ldscript.txt", "w").write(ld)
os.remove(src)
print(f"{src}: {len(chunks)} functions -> {out_c}")
