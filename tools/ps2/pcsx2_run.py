#!/usr/bin/env python3
# ../tp-ps2/tools/ps2/pcsx2_run.py with PCSX2's OpenGL renderer instead of the software one: the software renderer
# shows a 1280-wide display buffer wrapped at x = 1024 (walkthrough step 70). Same arguments; --renderer null still
# selects the null renderer.
import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "../../../tp-ps2/tools/ps2"))
import pcsx2_run  # noqa: E402

pcsx2_run.OVERRIDES["Renderer"] = "12"  # 12: OpenGL (13: software, 11: null)
pcsx2_run.main()
