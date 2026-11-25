#!/usr/bin/env python3
"""Converts an mGBA runner replay (frame numbers are video frames) to the PS2 port's game frames.
Usage: to_gameframes.py GAMEFRAMES IN OUT, GAMEFRAMES from tools/mgba_run --gameframes on the same replay.
mGBA counts every video frame; the PS2 counts one frame per game frame (VBlankIntrWait, src/ps2/input.c), so where
the game lags (loading) a replay drifts unless converted. An input that mGBA applies from video frame f is applied
on the PS2 from game frame g + 1, g being the game frames finished by video frame f - 1."""
import sys

done = {0: 0}
for line in open(sys.argv[1]):
    f, g = map(int, line.split())
    done[f] = g
last = max(done)
out = []
for line in open(sys.argv[2]):
    p = line.split()
    if len(p) != 2 or line.startswith("#"):
        out.append(line.rstrip("\n"))
        continue
    f = int(p[0])
    g = done[f - 1] if f - 1 <= last else done[last] + f - 1 - last  # past the map's end: the last lag kept
    out.append("%d %s" % (g + 1, p[1]))
open(sys.argv[3], "w").write("\n".join(out) + "\n")
