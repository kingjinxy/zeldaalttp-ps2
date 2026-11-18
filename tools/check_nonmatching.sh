#!/bin/bash
# check_nonmatching.sh OUTDIR INPUTS FRAMES (e.g. tools/fs_walk.inputs 3921): checks the NONMATCHING C against the original code, call by call.
# Builds the FS_ONLY ROM from asm and with NONMATCHING C, traces the NONMATCHING functions (up to 3 calls
# each) while 2 linked GBAs play INPUTS from the recordings/start_linked saves, then replays each call in the
# NONMATCHING build (mgba_run --replay). Leaves the matching build in place afterwards.
# AUTO_C=1 tools/check_nonmatching.sh ...: the same with the asm2c translations, which are checked too.
# Known false failures: void functions (r0), functions reading I/O or timers (not restored by the replay).
set -e
cd "$(dirname "$0")/.."
OUT=$(realpath -m "$1"); INPUTS=$(realpath "$2"); FRAMES=$3
mkdir -p "$OUT"; rm -rf "$OUT/tr"; mkdir "$OUT/tr"
env -u AUTO_C make -j8 FS_ONLY=1 zeldaalttp.gba >/dev/null 2>&1; cp zeldaalttp.gba "$OUT/m.gba"; cp zeldaalttp.elf "$OUT/m.elf"
[ -n "$AUTO_C" ] && rm -rf src/auto  # generated per object: start clean
make -j8 FS_ONLY=1 NONMATCHING=1 ${AUTO_C:+AUTO_C=1} zeldaalttp_nm.gba >/dev/null 2>&1; cp zeldaalttp_nm.gba "$OUT/nm.gba"; cp zeldaalttp_nm.elf "$OUT/nm.elf"
env -u AUTO_C make -j8 compare >/dev/null 2>&1 || true
# .rodata must keep its layout (data holds absolute addresses into it); NONMATCHING tables use NM_RODATA
rs() { arm-none-eabi-readelf -SW "$1" | awk '$2==".rodata"{print $6}'; }
[ "$(rs "$OUT/m.elf")" = "$(rs "$OUT/nm.elf")" ] || { echo ".rodata size differs: $(rs "$OUT/m.elf") vs $(rs "$OUT/nm.elf")"; exit 1; }
python3 - "$OUT" <<'EOF'
import glob, re, subprocess, sys
out = sys.argv[1]
def funcs(e):
    d = {}
    for l in subprocess.run(["arm-none-eabi-readelf", "-sW", e], capture_output=True, text=True).stdout.splitlines():
        p = l.split()
        if len(p) >= 8 and p[3] == "FUNC" and re.fullmatch(r"[A-Za-z_]\w*", p[7]):
            d.setdefault(p[7], int(p[1], 16))
    return d
m, n = funcs(out + "/m.elf"), funcs(out + "/nm.elf")
open(out + "/map.txt", "w").write("".join(f"{m[k]:08X} {n[k]:08X}\n" for k in m if k in n))
names = set()
for c in glob.glob("src/*.c") + glob.glob("src/*/*.c"):
    s = open(c).read()
    # functions defined between "#ifdef NONMATCHING" and its "#else" (blocks without #else are declarations)
    for b in re.finditer(r"^#ifdef NONMATCHING\n", s, re.M):
        e1, e2 = s.find("\n#else\n", b.end()), s.find("\n#endif", b.end())
        if e1 != -1 and (e2 == -1 or e1 < e2):
            names |= set(re.findall(r"^\w[^\n;]*?\b(\w+)\([^;{]*\)\n\{", s[b.end():e1], re.M))
import os
if os.environ.get("AUTO_C"):
    for c in glob.glob("src/auto/*.c"):
        names |= set(re.findall(r"^u32 (\w+)\(u32 r0", open(c).read(), re.M))  # asm2c
        names |= set(re.findall(r"^void (\w+)\(void\);  /\* gstate wrapper \*/", open(c).read(), re.M))  # gstate2c
open(out + "/list.txt", "w").write("".join(f"{m[k] & ~1:08X}\n" for k in sorted(names) if k in m))
print(len(names), "NONMATCHING functions")
EOF
./tools/mgba_run "$OUT/m.gba" "$FRAMES" --players 2 --save0 recordings/start_linked/save0.sav \
    --save1 recordings/start_linked/save1.sav --inputs "$INPUTS" --trace "$OUT/tr" --trace-list "$OUT/list.txt" \
    --trace-max ${TRACE_MAX:-3} >/dev/null 2>&1 || true
echo "$(ls "$OUT/tr" | sed 's/_.*//' | sort -u | wc -l) functions ran"
./tools/mgba_run --replay "$OUT/nm.gba" "$OUT/map.txt" "$OUT"/tr/*.gz > "$OUT/replay.txt" 2>&1 || true
grep -v " ok$" "$OUT/replay.txt"
