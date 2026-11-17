# split_incbin_ptrs.py FILE...: in data .s files, split `.INCBIN "baserom.gba", START, LEN` slices around
# aligned words that are a Thumb function pointer (a FUNC symbol's address + 1, below .rodata) and emit
# those as `.4byte name`, so NONMATCHING builds (code at other addresses) keep working tables.
# The matching build is unchanged (the symbol resolves to the same value); check with `make compare`.
# shortcut: a data word that happens to equal a function address + 1 becomes a pointer too; harmless for
# the matching build, wrong only in a NONMATCHING build if that data isn't really a pointer.
import re, struct, subprocess, sys

rom = open("baserom.gba", "rb").read()
funcs = {}
for l in subprocess.run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"], capture_output=True,
                        text=True).stdout.splitlines():
    p = l.split()
    if len(p) >= 8 and p[3] == "FUNC" and re.fullmatch(r"[A-Za-z_]\w*", p[7]):
        a = int(p[1], 16)
        if a & 1 and 0x08000000 <= a < 0x08137B04:
            funcs.setdefault(a, p[7])  # Thumb: st_value has bit 0 set, as the pointer does

pat = re.compile(r'^(\s*)\.INCBIN\s+"baserom\.gba",\s*(0x[0-9A-Fa-f]+)\s*,\s*([^\n]+)$', re.M | re.I)
total = 0
for f in sys.argv[1:]:
    s = open(f).read()
    def sub(m):
        global total
        ind, start = m.group(1), int(m.group(2), 16)
        n = eval(m.group(3).replace("0x", "0x"), {})
        out, pos = [], start
        a = (start + 3) & ~3
        while a + 4 <= start + n:
            v = struct.unpack_from("<I", rom, a)[0]
            if v in funcs:
                if a > pos:
                    out.append(f'{ind}.INCBIN "baserom.gba", {pos:#X}, {a - pos:#X}')
                out.append(f"{ind}.4byte {funcs[v]}")
                pos = a + 4
                total += 1
            a += 4
        if not out:
            return m.group(0)
        if pos < start + n:
            out.append(f'{ind}.INCBIN "baserom.gba", {pos:#X}, {start + n - pos:#X}')
        return "\n".join(out)
    t = pat.sub(sub, s)
    if t != s:
        open(f, "w").write(t)
print(total, "function pointers")
