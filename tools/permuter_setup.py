# permuter_setup.py FUNC DRAFT.c OUTDIR: set up a decomp-permuter directory for one -O2 function.
# DRAFT.c holds the C definition (plus any declarations it needs) that replaces FUNC's asm include.
# Needs reference/decomp-permuter (bundles its pycparser) and toml (reference/pydeps-src, from GitHub).
# Run: PYTHONPATH=reference/pydeps-src/toml python3 reference/decomp-permuter/permuter.py OUTDIR
import glob, os, re, subprocess, sys

func, draft, out = sys.argv[1:4]
root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(root)
inc = glob.glob(f"asm/non_matching/*/{func}.inc")
assert len(inc) == 1, inc
src = f"src/{inc[0].split('/')[2]}.c"
os.makedirs(out, exist_ok=True)
out = os.path.abspath(out)

# C: the file with FUNC's include replaced by the draft, other asm() includes dropped (pycparser can't
# parse them and they don't affect FUNC), preprocessed.
text = open(src).read()
line = next(l for l in text.splitlines() if f"{func}.inc" in l)
text = text.replace(line, open(draft).read())
text = "\n".join(l for l in text.splitlines() if not l.startswith("asm("))
open(f"{out}/orig.c", "w").write(text)
cpp = subprocess.run(["cpp", "-P", "-Itools/agbcc/include", "-iquote", "include", "-nostdinc", "-undef",
                      f"{out}/orig.c"], capture_output=True, text=True, check=True).stdout
open(f"{out}/base.c", "w").write(cpp)
subprocess.run([sys.executable, "reference/decomp-permuter/strip_other_fns.py", f"{out}/base.c", func],
               check=True)

# Target: the original asm, assembled alone
open(f"{out}/target.s", "w").write('.include "macro.inc"\n.text\n'
                                   + open(inc[0]).read())
subprocess.run(["arm-none-eabi-as", "-mcpu=arm7tdmi", "-mthumb-interwork", "-Iasminclude",
                f"{out}/target.s", "-o", f"{out}/target.o"], check=True)

flags = "-mthumb-interwork" + ("" if src == "src/fs_game.c" else " -O2") + (" -fprologue-bugfix" if re.search(
    rf"^{re.escape(src[:-2])}\.o:.*-fprologue-bugfix", open("Makefile").read(), re.M) else "")
open(f"{out}/compile.sh", "w").write(f"""#!/bin/bash
# $1 = input.c, $3 = output.o
set -e
in=$(realpath "$1"); out=$(realpath -m "$3")
cd {root}
t=$(mktemp -d)
tools/agbcc/bin/agbcc {flags} -o $t/out.s "$in"
echo '.ALIGN 2, 0' >> $t/out.s
arm-none-eabi-as -mcpu=arm7tdmi -mthumb-interwork -o "$out" $t/out.s
rm -rf $t
""")
os.chmod(f"{out}/compile.sh", 0o755)
open(f"{out}/settings.toml", "w").write(f'func_name = "{func}"\ncompiler_type = "gcc"\n')
print(out)
