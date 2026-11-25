#!/usr/bin/env python3
"""Converts an mGBA runner replay (frame numbers are video frames) to the PS2 port's game frames.
Usage: to_gameframes.py GAMEFRAMES IN OUT [LAG], GAMEFRAMES from tools/mgba_run --gameframes on the same replay.
mGBA counts every video frame; the PS2 counts one frame per game frame (VBlankIntrWait, src/ps2/input.c), so where
the game lags (loading) a replay drifts unless converted. An input that mGBA applies from video frame f is applied
on the PS2 from game frame g + 1, g being the game frames finished by video frame f - 1.
LAG (build/ps2/replay.lag, src/ps2/input.c): "G N" for each game frame G during which N video frames passed without
the game finishing a frame (lag frames); the PS2 runs the VBlank handler N extra times at G's end."""
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
if len(sys.argv) > 4:
    lag = {}
    for f in range(1, last + 1):
        if done[f] == done[f - 1]:
            lag[done[f] + 1] = lag.get(done[f] + 1, 0) + 1
    open(sys.argv[4], "w").write("".join("%d %d\n" % (g, n) for g, n in sorted(lag.items())))
