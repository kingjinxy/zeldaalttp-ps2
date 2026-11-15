# Running walkthrough

## Step 1: project setup (2026-11-15)

- Copied the USA ROM as `baserom.gba` (SHA-1 matches `checksum.sha1`), EU and JP as `baserom_eu.gba` and
  `baserom_jp.gba` (reference only; all ignored by `*.gba`).
- Cloned `zeldaret/tmc` and `Jyhsus/FourSwordsRecomp` into `reference/`, excluded in `.git/info/exclude`.
- State of the decomp: about 305 functions in C, about 7,430 still in `asm/`, about 4.9 MB of data still
  `.INCBIN` from the base ROM. Not yet built: agbcc and binutils missing.
- Adapted the agent rules from `../tp-ps2/CLAUDE.md` into `CLAUDE.md`; copied `archive_conversation.py`.

## Step 2: matching build (2026-11-15)

- User installed `binutils-arm-none-eabi`, `libpng-dev`, `pkg-config`, `mgba-qt`.
- Built pret/agbcc (cloned to `reference/agbcc`), installed into `tools/agbcc` with its `install.sh`.
- First `make compare` failed at link with ~100 undefined symbols. Cause: the Makefile's `CPP` is
  `$(DEVKITARM)/bin/arm-none-eabi-cpp`, which Debian's binutils package doesn't have; the
  `cpp | agbcc` pipe hid the error, so every C file compiled to an empty `.s`.
- Fix: `CPP` falls back to the host `cpp` without devkitARM, and `SHELL := /bin/bash -o pipefail`
  so a failing pipe stops the build. `make compare` now prints `zeldaalttp.gba: OK`.

## Step 3: boot straight into Four Swords, headless mGBA runner (2026-11-15)

- `tools/mgba_run`: mGBA 0.10.5 built from source as a static library in `reference/mgba` (the Debian
  mgba-qt 0.10 can't load scripts from the command line, and no dev package was installed). Runs a ROM
  with a button script, writes PNGs and RAM dumps at chosen frames, prints a byte when it changes.
  3,000 frames take 3 s.
- Normal ROM, mashing A/Start with an empty save: mode `0x03006D10` 0 → 8 (file select, frame 324) →
  6 (CHOOSE A GAME, 838) → 13 (LttP, 938; the cursor starts on LttP).
- First `FS_ONLY` try put an early `return` into `sub_0803074C`: white screen, mode stuck at 0. The
  extra bytes moved all later code, and the `.INCBIN` data still holds fixed code addresses. The ROM is
  not shiftable yet (now a Phase 2 item).
- Working version: mode-table entry 6 (`gUnknown_0842731C` in `src/main.c`) points to
  `fs_only_choose_game` in `src/fs_only.c`, which the ldscript places at `0x08700000`, past the end of
  the ROM's data (`0x08645BE5`). Nothing else moves. Trace: 8 → 6 (frame 838) → 9 (839), then the Four
  Swords title and "Linking with other systems…". `make compare` still matches.
- Makefile: `FS_ONLY=1` adds `-DFS_ONLY`; `.cppflags` records the flags so switching rebuilds the C.
