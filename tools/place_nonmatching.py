# place_nonmatching.py DRAFT.c...: put each draft (file named FUNC.c, holding FUNC's C definition plus the
# declarations it needs) into its source file as
#     #ifdef NONMATCHING
#     <draft>
#     #else
#     asm(".include \"asm/non_matching/<file>/FUNC.inc\"");
#     #endif
# in place of FUNC's asm include. The .inc stays, so the matching build is unchanged.
# Check afterwards: make compare (still OK) and make NONMATCHING=1 (compiles and links).
import glob, os, sys

root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(root)
for draft in sys.argv[1:]:
    func = os.path.basename(draft)[:-2]
    inc = glob.glob(f"asm/non_matching/*/{func}.inc")
    assert len(inc) == 1, (func, inc)
    src = f"src/{inc[0].split('/')[2]}.c"
    text = open(src).read()
    line = f'asm(".include \\"{inc[0]}\\"");'
    assert text.count(line) == 1, (func, src)
    code = open(draft).read().strip("\n")
    text = text.replace(line, f"#ifdef NONMATCHING\n{code}\n#else\n{line}\n#endif")
    open(src, "w").write(text)
    print(func, "->", src)
