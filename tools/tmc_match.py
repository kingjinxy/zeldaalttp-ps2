#!/usr/bin/env python3
"""Finds functions in our ROM whose machine code is identical to a function in the Minish Cap decomp
(reference/tmc), so its C can be reused:

    python3 tools/tmc_match.py OBJDIR [--all]

Compiles every tmc C file with our agbcc (-O2, interwork) into OBJDIR once (kept as a cache), then compares
code with the parts that depend on linking masked: BL targets and the literal-pool words that
`ldr rX, [pc, #n]` loads. Only functions still in asm/non_matching are reported unless --all. For each
match it prints the tmc file and name, then what tmc calls/loads there next to our address, which names
our globals and callees. A fingerprint match still needs `make compare` to confirm.
"""
import glob, hashlib, os, re, struct, subprocess, sys
from collections import defaultdict

TMC, AGBCC = "reference/tmc", "tools/agbcc"
objdir = os.path.abspath(sys.argv[1])
show_all = "--all" in sys.argv


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def build_tmc():
    os.makedirs(objdir, exist_ok=True)
    for f in glob.glob(f"{TMC}/src/**/*.c", recursive=True):
        rel = os.path.relpath(f, TMC)
        base = os.path.join(objdir, rel.replace("/", "_"))
        if os.path.exists(base + ".o"):
            continue
        cpp = run(["cpp", "-I", os.path.abspath(f"{AGBCC}/include"), "-I", "include", "-nostdinc", "-undef",
                   "-DUSA", "-DREVISION=0", "-DENGLISH", rel], cwd=TMC)
        cc = run([os.path.abspath(f"{AGBCC}/bin/agbcc"), "-O2", "-mthumb-interwork", "-Wno-multichar",
                  "-o", base + ".s"], input=cpp.stdout)
        if cc.returncode:
            print("tmc compile failed:", rel, file=sys.stderr)
            continue
        with open(base + ".s", "a") as s:
            s.write("\t.text\n\t.align\t2, 0\n")
        run(["arm-none-eabi-as", "-mcpu=arm7tdmi", "-mthumb-interwork", "-I", "asm/macros", "-I", ".",
             "-o", base + ".o", base + ".s"], cwd=TMC)


def masks(code):
    """Offsets of BL halfword pairs and of literal-pool words loaded pc-relative, as {offset: kind}."""
    m = {}
    for p in range(0, len(code) - 1, 2):
        h = struct.unpack_from("<H", code, p)[0]
        if h & 0xF800 == 0xF000 and p + 3 < len(code) and struct.unpack_from("<H", code, p + 2)[0] & 0xF800 == 0xF800:
            m[p] = "bl"
        elif h & 0xF800 == 0x4800:  # ldr rd, [pc, #imm]
            t = ((p + 4) & ~3) + (h & 0xFF) * 4
            if t + 4 <= len(code):
                m[t] = "lit"
    return m


def fingerprint(code):
    m = masks(code)
    b = bytearray(code)
    for p, kind in m.items():
        b[p:p + 4] = b"\0\0\0\0"
    return hashlib.sha1(bytes(b)).hexdigest() + f":{len(code)}", m


# --- tmc side ---
build_tmc()
tmc = {}
for o in glob.glob(f"{objdir}/*.o"):
    data = subprocess.run(["arm-none-eabi-objcopy", "-O", "binary", "--only-section=.text", o, "/dev/stdout"],
                          capture_output=True).stdout
    relocs, sec = {}, None
    for line in run(["arm-none-eabi-readelf", "-rW", o]).stdout.splitlines():
        if line.startswith("Relocation section"):
            sec = line.split("'")[1]
        f = line.split()
        if sec == ".rel.text" and len(f) >= 5 and re.fullmatch(r"[0-9a-f]{8}", f[0]):
            relocs[int(f[0], 16)] = f[4]
    for line in run(["arm-none-eabi-readelf", "-sW", o]).stdout.splitlines():
        f = line.split()
        if len(f) >= 8 and f[3] == "FUNC" and int(f[2]) > 0:
            start, size = int(f[1], 16) & ~1, int(f[2])
            code = data[start:start + size]
            fp, m = fingerprint(code)
            tmc.setdefault(fp, (os.path.basename(o)[:-2].replace("src_", "", 1), f[7], start, m,
                                {k - start: v for k, v in relocs.items() if start <= k < start + size}))

# --- our side ---
rom = open("baserom.gba", "rb").read()
pending = {os.path.basename(p)[:-4] for p in glob.glob("asm/non_matching/*/*.inc")}
matches = 0
for line in run(["arm-none-eabi-readelf", "-sW", "zeldaalttp.elf"]).stdout.splitlines():
    f = line.split()
    if len(f) < 8 or f[3] != "FUNC" or int(f[2]) == 0 or not (show_all or f[7] in pending):
        continue
    start, size = int(f[1], 16) & ~1, int(f[2])
    code = rom[start - 0x08000000:start - 0x08000000 + size]
    fp, m = fingerprint(code)
    if fp not in tmc:
        continue
    tfile, tname, _, tm, trel = tmc[fp]
    matches += 1
    print(f"{f[7]} = {tname} ({tfile}.c, {size} bytes)")
    for p in sorted(m):
        if m[p] == "bl":
            off = ((struct.unpack_from("<H", code, p)[0] & 0x7FF) << 12) | ((struct.unpack_from("<H", code, p + 2)[0] & 0x7FF) << 1)
            ours = start + p + 4 + (off - 0x800000 if off & 0x400000 else off)
        else:
            ours = struct.unpack_from("<I", code, p)[0]
        print(f"    {m[p]:3} {ours:08X} = {trel.get(p, '?')}")
print(f"{matches} matches", file=sys.stderr)
