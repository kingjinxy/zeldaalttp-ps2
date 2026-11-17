#!/usr/bin/env python3
"""Builds tools/tr_check.c with thumb2c's output in GBA address space, and the --trace-list for mgba_run.

    python3 tools/tr_check.py BUILDDIR        # writes BUILDDIR/tr_check and BUILDDIR/trace_list.txt

Then:
    tools/mgba_run baserom.gba FRAMES ... --trace TRACEDIR --trace-list BUILDDIR/trace_list.txt
    BUILDDIR/tr_check baserom.gba TRACEDIR/*.gz
"""
import glob, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
out = os.path.abspath(sys.argv[1])
tr = os.path.join(out, "tr")
subprocess.run([sys.executable, os.path.join(ROOT, "tools", "thumb2c.py"), tr], check=True)

addrs = {}
for line in subprocess.run(["arm-none-eabi-nm", os.path.join(ROOT, "zeldaalttp.elf")], capture_output=True,
                           text=True).stdout.splitlines():
    f = line.split()
    if len(f) == 3 and re.fullmatch(r"[A-Za-z_]\w*", f[2]):
        addrs.setdefault(f[2], int(f[0], 16) & ~1 if f[1] in "Tt" else int(f[0], 16))

defined, declared, used_syms = set(), set(), set()
for c in glob.glob(os.path.join(tr, "*_tr.c")):
    text = open(c).read()
    defined |= set(re.findall(r"^void (\w+)_tr\(void\)", text, re.M))
    declared |= set(re.findall(r"^u32 (\w+)\(u32, u32, u32, u32\);$", text, re.M))
    used_syms |= set(re.findall(r"SYM\((\w+)\)", text))


def addr_of(name):
    if name in addrs:
        return addrs[name]
    m = re.fullmatch(r"sub_([0-9A-Fa-f]{8})", name)
    return int(m.group(1), 16) if m else None


h = ["#include \"gba_tr_check.h\""]
for s in sorted(used_syms):
    a = addr_of(s)
    if a is None:
        sys.exit(f"no address for {s}")
    h.append(f"#define ADDR_{s} 0x{a:08X}u")
open(os.path.join(out, "tr_check.h"), "w").write("\n".join(h) + "\n")
open(os.path.join(out, "gba_tr_check.h"), "w").write("""#include "gba_tr.h"
typedef void (*tr_fn)(void);
tr_fn tr_lookup(u32 addr);
const char *tr_name(u32 addr);
u32 tr_missing(const char *name);
""")

tab = ['#include "gba_tr_check.h"']
for f in sorted(declared - defined):
    tab.append(f"u32 {f}(u32 a, u32 b, u32 c, u32 d) {{ return tr_missing(\"{f}\"); }}")
ents = sorted((addr_of(f), f) for f in defined if addr_of(f) is not None)
for a, f in ents:
    tab.append(f"void {f}_tr(void);")
tab.append("static const struct { u32 a; tr_fn f; const char *n; } T[] = {")
tab += [f"    {{ 0x{a:08X}u, {f}_tr, \"{f}\" }}," for a, f in ents]
tab.append("};")
tab.append("""static int find(u32 a) {
    int lo = 0, hi = sizeof T / sizeof T[0] - 1;
    while (lo <= hi) { int m = (lo + hi) / 2; if (T[m].a == a) return m; if (T[m].a < a) lo = m + 1; else hi = m - 1; }
    return -1;
}
tr_fn tr_lookup(u32 a) { int k = find(a); return k < 0 ? 0 : T[k].f; }
const char *tr_name(u32 a) { int k = find(a); return k < 0 ? "?" : T[k].n; }""")
open(os.path.join(out, "tr_table.c"), "w").write("\n".join(tab) + "\n")
open(os.path.join(out, "trace_list.txt"), "w").write("".join(f"{a:08X}\n" for a, f in ents))

host = set()
for lib in ("/lib/x86_64-linux-gnu/libc.so.6", "/lib/x86_64-linux-gnu/libz.so.1"):
    host |= set(l.split()[-1].split("@")[0] for l in subprocess.run(["nm", "-D", lib], capture_output=True,
                                                                    text=True).stdout.splitlines())
# GBA libc functions (memcpy, ...) must not replace the host's: rename them in the translated code
clash = sorted((defined | declared) & host)
open(os.path.join(out, "tr_check.h"), "a").write("".join(
    f"#define ADDR_tr_{n} ADDR_{n}\n" for n in clash if n in used_syms))
defs = [f"-D{n}=tr_{n}" for n in clash] + ["-DSYM(n)=ADDR_##n", "-DGBA_PTR(a)=tr_ptr((a),0)",
        "-DRD8(a)=(*(u8*)tr_ptr((a),0))", "-DRD16(a)=(*(u16*)tr_ptr((a),0))", "-DRD32(a)=(*(u32*)tr_ptr((a),0))",
        "-DWR8(a,v)=tr_write((a),(v),1)", "-DWR16(a,v)=tr_write((a),(v),2)", "-DWR32(a,v)=tr_write((a),(v),4)"]
proto = "void *tr_ptr(u32 a, int write); void tr_write(u32 a, u32 v, int size);"
open(os.path.join(out, "gba_tr_check.h"), "a").write(proto + "\n")
srcs = sorted(glob.glob(os.path.join(tr, "*_tr.c")))
objs = []
for s in srcs + [os.path.join(out, "tr_table.c"), os.path.join(ROOT, "tools", "tr_check.c")]:
    o = os.path.join(out, os.path.basename(s)[:-2] + ".o")
    d = defs if not s.endswith("tools/tr_check.c") else defs[len(clash):]
    cmd = ["gcc", "-O1", "-w", "-c", s, "-o", o, "-I", out, "-I", os.path.join(ROOT, "include"),
           "-include", os.path.join(out, "tr_check.h")] + d
    objs.append((cmd, o))
procs = [subprocess.Popen(c) for c, o in objs]
if any(p.wait() for p in procs):
    sys.exit("compile failed")
subprocess.run(["gcc", "-o", os.path.join(out, "tr_check")] + [o for c, o in objs] + ["-lz"], check=True)
print(f"{out}/tr_check, {len(ents)} functions in {out}/trace_list.txt")
