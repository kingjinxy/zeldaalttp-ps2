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
