# symbolize_asm.py FILE...: replace absolute ROM addresses in branch instructions and .4byte words
# (0x08xxxxxx) with symbol+offset from the matching build's zeldaalttp.elf, so code that changes size
# (NONMATCHING C) doesn't break the remaining asm. Run on a matching build, then check `make compare`.
# shortcut: picks the nearest preceding global/function symbol; an address inside data moved by a size
# change still follows its symbol, which is what we want. Thumb code pointers keep their +1.
import bisect, re, subprocess, sys

# From readelf: function symbols (Thumb functions have bit 0 set in st_value) and other labels/objects.
# A .4byte against a Thumb function symbol gets bit 0 set by the linker, so words use non-function
# symbols only (local labels like _0801E4C8 are fine); branches may use any.
funcs, others = {}, {}
for l in subprocess.run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"], capture_output=True, text=True).stdout.splitlines():
    p = l.split()
    if len(p) < 8 or not re.fullmatch(r"[0-9a-f]{8}", p[1]) or p[6] in ("ABS", "UND") or p[3] == "SECTION":
        continue
    nm = p[7]
    if not re.fullmatch(r"[A-Za-z_]\w*", nm) or nm.startswith("$"):
        continue
    a = int(p[1], 16)
    if p[3] == "FUNC":
        a &= ~1
        if 0x08000000 <= a < 0x08800000:
            funcs.setdefault(a, nm)
    elif 0x08000000 <= a < 0x08800000:
        others.setdefault(a, nm)
alls = dict(others); alls.update(funcs)
tables = {}
for key, d in (("branch", alls), ("word", others)):
    tables[key] = (sorted(d), d)

def name(v, key, local):
    # an odd word that is exactly a Thumb function's address + 1 is a function pointer: its symbol
    if key == "word" and v & 1 and (v - 1) in funcs:
        return funcs[v - 1]
    # any other odd word already has bit 0 set, so a function symbol + offset gives the same value
    if key == "word" and v & 1:
        key = "branch"
    # local labels (_0801E4C8) only resolve inside the file that defines them
    addrs, d = tables[key]
    i = bisect.bisect_right(addrs, v) - 1
    while i >= 0 and d[addrs[i]].startswith("_0") and d[addrs[i]] not in local:
        i -= 1
    if i < 0:
        return None
    a = addrs[i]
    off = v - a
    if off > 0x1000:
        return None
    return d[a] if off == 0 else f"{d[a]}+{off:#x}"

pat = re.compile(r"^(\s*(?:bl|b|b\.n|beq|bne|bcc|bcs|bhi|bls|bgt|blt|bge|ble|bmi|bpl|bvs|bvc)\s+|\s*\.4byte\s+)0x(0?8[0-9A-Fa-f]{6})\b",
                 re.M)
total = 0
for f in sys.argv[1:]:
    s = open(f).read()
    local = set(re.findall(r"^(_0\w+):", s, re.M))
    def sub(m):
        global total
        n = name(int(m.group(2), 16), "word" if ".4byte" in m.group(1) else "branch", local)
        if n is None:
            return m.group(0)
        total += 1
        return m.group(1) + n
    t = pat.sub(sub, s)
    if t != s:
        open(f, "w").write(t)
print(total, "addresses symbolized")
