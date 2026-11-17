#!/usr/bin/env python3
"""Sound sample ranges from the m4a instrument tables, for tools/reach.py --packed.

    python3 tools/m4a_samples.py [ROM] [--table ADDR] > ranges.txt

Song table (default 0x083C3E34): 8-byte entries {SongHeader *, u16 ms, u16 me}, until a header pointer
leaves ROM. SongHeader: u8 tracks, 3 bytes, ToneData *voicegroup, track pointers. ToneData (12 bytes):
u8 type, key, length, pan_sweep; u32 wav; 4 bytes envelope. type & 7: 0 direct sound (wav -> WaveData:
u16 type, u16 status, u32 freq, loopStart, size; then size + 1 signed 8-bit samples), 3 wave memory
(wav -> 16 bytes, 4-bit samples), 1/2/4 square and noise (no data). 0x40 key split (wav -> voicegroup,
next word -> key table), 0x80 rhythm (wav -> voicegroup). A voicegroup is read until an entry that isn't
a valid instrument, at most 128 entries. Prints "START END KIND" (hex) per sample: for direct sound the
sample bytes after the 16-byte header (the driver reads the header with 32-bit loads); wave memory is
copied whole to the sound hardware's wave RAM.
"""
import argparse, struct, sys

ap = argparse.ArgumentParser()
ap.add_argument("rom", nargs="?", default="baserom.gba")
ap.add_argument("--table", default="0x083C3E34")
args = ap.parse_args()
r = open(args.rom, "rb").read()
END = 0x08000000 + len(r)

def W(a):
    o = a - 0x08000000
    return struct.unpack_from("<I", r, o)[0] if 0 <= o <= len(r) - 4 else None
def rom(v):
    return v is not None and 0x08000000 <= v < END

samples, seen_vg = {}, set()

def tone_ok(a):
    t, wav = r[a - 0x08000000], W(a + 4)
    if t in (0x40, 0x80):
        return rom(wav) and (t == 0x80 or rom(W(a + 8)))
    if t & ~0x3F or t & 7 > 4:
        return False
    return t & 7 not in (0, 3) or rom(wav)

def voicegroup(vg):
    if vg in seen_vg:
        return
    seen_vg.add(vg)
    for i in range(128):
        a = vg + 12 * i
        if not rom(a + 11) or not tone_ok(a):
            break
        t, wav = r[a - 0x08000000], W(a + 4)
        if t in (0x40, 0x80):
            voicegroup(wav)
        elif t & 7 == 0:
            size = W(wav + 12)
            if size is not None and size < 0x400000 and wav + 16 + size + 1 <= END:
                samples[wav + 16] = (wav + 16 + size + 1, "pcm")  # the samples, not the header the driver reads
        elif t & 7 == 3:
            samples.setdefault(wav, (wav + 16, "wave"))

t = int(args.table, 16)
songs = 0
while rom(W(t)):
    h = W(t)
    n = r[h - 0x08000000]
    if n and rom(W(h + 4)):
        voicegroup(W(h + 4))
    songs += 1
    t += 8
for s in sorted(samples):
    e, k = samples[s]
    print(f"{s:08X} {e:08X} {k}")
print(f"# {songs} songs, {len(seen_vg)} voicegroups, {len(samples)} samples, "
      f"{sum(e - s for s, (e, _) in samples.items()):,} bytes", file=sys.stderr)
