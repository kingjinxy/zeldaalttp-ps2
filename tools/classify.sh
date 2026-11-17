#!/bin/bash
# Per-function classes (Four Swords / shared / A Link to the Past / unreached, executed, in asm) from the
# normal build and local recordings:
#   tools/classify.sh OUT REC_DIR...
# Each REC_DIR is an mgba_run --play recording (stateP.ss, saveP.sav, inputsP, and optionally "frames":
# the session's length, which --play doesn't write). It is replayed with
# --coverage and --loads; then the ranges whose words are never pointers (LZ77 streams, graphics and
# RAM-copied data the game was seen loading, m4a samples) and the object subtypes are rebuilt, and
# reach.py --classify writes OUT. Scratch files go to build/classify/.
set -e
cd "$(dirname "$0")/.."
out=$1; shift
[ -n "$out" ] && [ $# -gt 0 ] || { echo "usage: $0 OUT REC_DIR..." >&2; exit 1; }
make -s compare >/dev/null
W=build/classify
mkdir -p $W
python3 tools/lz77_scan.py zeldaalttp.gba > $W/lz77.txt
python3 tools/m4a_samples.py zeldaalttp.gba > $W/samples.txt
python3 tools/object_subtypes.py > $W/subtypes.txt
cut -d' ' -f1,2 $W/samples.txt > $W/packed.txt
grep -v '^#' $W/lz77.txt | cut -d' ' -f1,2 >> $W/packed.txt
cov=()
i=0
for rec in "$@"; do
    i=$((i + 1))
    # Frames: REC_DIR/frames if present (a session usually runs on after its last key change), else
    # the last scripted frame plus a little
    if [ -f "$rec/frames" ]; then n=$(cat "$rec/frames")
    else n=$(cat "$rec"/inputs* | awk '{ if ($1 + 0 > m) m = $1 + 0 } END { print m + 2 }'); fi
    ./tools/mgba_run zeldaalttp.gba "$n" --players 2 --start "$rec" --inputs0 "$rec/inputs0" \
        --inputs1 "$rec/inputs1" --coverage $W/cov$i.bin --loads $W/loads$i.txt > $W/run$i.log
    python3 tools/load_ranges.py $W/loads$i.txt --rom zeldaalttp.gba --out $W/gfx$i.txt > $W/ranges$i.log
    cat $W/gfx$i.txt >> $W/packed.txt
    cov+=(--coverage $W/cov$i.bin)
done
sort -u -o $W/packed.txt $W/packed.txt
python3 tools/reach.py --packed $W/packed.txt --objects $W/subtypes.txt "${cov[@]}" --classify "$out" | \
    sed -n '/^class/,$p'
