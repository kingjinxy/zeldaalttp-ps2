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

## Step 4: linked GBAs in the mGBA runner (2026-11-15)

- `tools/mgba_run --players N` (1-4) links GBAs with mGBA 0.10.5's lockstep SIO driver. The host callbacks
  are a C port of mgba-qt's `MultiplayerController.cpp`.
- First version ran each GBA on its own `mCoreThread`, as mgba-qt does. Problems on the way:
  - Crash in `GBASIOLockstepNodeUnload` from `GBAReset`: the driver was attached before the first reset,
    which unloads it. Attach after the reset.
  - Threads exited at frame 0 / hung: the runner was compiled without the library's feature defines
    (`ENABLE_SCRIPTING`, `USE_DEBUGGERS`, ...) and `NDEBUG`, which change `mCoreThread` and lockstep struct
    layouts. `tools/mgba_run.sh` now force-includes `build/include/mgba/flags.h` and sets `-DNDEBUG`.
  - Then it linked, but RAM after 6,000 frames differed on every run, and 1 run in 5 segfaulted: thread
    scheduling decides where link transfers land. Not usable as a reference.
- Final version: no threads. All GBAs run on one thread in a fixed order, one `core->runLoop` each,
  skipping GBAs the link has put to wait (mgba-qt only parks a thread between `runLoop` calls, so this is
  the same logic in a fixed order). Five runs: identical RAM, no crashes.
- Result with `FS_ONLY` and A/Start mashing: 2 and 4 GBAs go 8 → 6 → 9 → 5 (frame 1288) → 2 (1438, in game)
  on the same frames; 4 Links on screen; "P1 PAUSE!" on the other GBAs when GBA 1 pauses. FourSwordsRecomp
  needed a link timing override (its DESIGN.md §9); mGBA 0.10.5 did not.
- 2 GBAs × 6,000 frames: 5.4 s. 4 GBAs × 3,000 frames: 6.5 s.

## Step 5: reachability map and coverage (2026-11-15)

- `tools/reach.py`: call graph from the linked ELF. Edges: Thumb/ARM `BL`, and every aligned word in a
  function (literal pools, jump tables) that points at a function or ROM data; a data object (one data
  symbol to the next) passes on every pointer it holds. LttP cut: the mode-13 handler `sub_0800B69C`.
  - First result had `AgbMain` unreachable: `_start` and other ARM routines are untyped global labels, not
    `FUNC` symbols. Counted as functions now.
  - Result: 5,411 of 7,780 functions (65% of code bytes) with LttP cut, 99% without. Still includes LttP
    sprites: `--why` showed the path runs through `gUnknown_0854F7E8`, a 990 KB `.INCBIN` blob. Eight
    blobs over 64 KB; until they're split into labelled data, the static map is an upper bound.
- `mgba_run --coverage FILE`: bitmap of executed ROM halfwords. Getting the same run as without it took
  three tries: `core->step` per instruction stalled the link at the lobby (step runs one more instruction
  after an event put the GBA to wait); processing events separately linked but gave different RAM (GBAs
  interleaved per instruction instead of per event slice). Final: `ARMRunLoop` re-implemented with
  `core->step` inside the slice; same RAM as a normal run, 3,000 frames × 2 GBAs in 3.5 s.
- Lobby run (2 GBAs, mashing to the pause menu): 657 functions executed. 10 of them (`rom1.s`,
  `0x080074D4`–`0x08008EFC`) aren't in the static map: called via `ldr r1, [sl, #0x2c]`, a function table
  in RAM whose entries don't appear as words in the ROM.

## Step 6: per-function decomp layout, -O0 Four Swords code (2026-11-15)

- `tools/asm_split.py asm/X.s NAME`: one `.inc` per function in `asm/non_matching/NAME/`, included from
  `src/NAME.c` by top-level `asm(".include ...")` lines (checked first: agbcc keeps top-level asm in source
  order between C functions). Top-level asm instead of tmc's `NAKED` functions means no C declarations for
  undecompiled functions, so nothing clashes with header prototypes. Where `src/NAME.c` already existed
  directly before `asm/X.o` in the ldscript, the includes are appended to it. All chunks stay one assembly
  unit, so labels shared between functions still work. `make compare` matches; `FS_ONLY` ROM unchanged.
- Makefile: `src/%.o` depends on `asm/non_matching/%/*.inc` (`.SECONDEXPANSION`), as `SCANINC` isn't in
  this repo.
- Prologues show two compiler settings: `-O2` everywhere except `0x0803668C`–`0x080668E4`, where functions
  start `push {r7, lr}; mov r7, sp` (agbcc without `-O2`; checked by compiling). That region holds the
  mode 1 and 2 handlers (Four Swords game). Moved to `src/fs_game.c` (915 functions), built without `-O2`.
  Four functions inside it are `-O2` (`sub_08039288`, `sub_0803E518`, `sub_0804721C`, `sub_0804BD9C`).
- First decompiled functions, all matching: `sub_08036760`, `sub_080368C0` (fs_game, -O0),
  `sub_08011408` (file_select, -O2).

## Step 7: first decomp batches (2026-11-15)

- 122 fs_game functions matching, plus `sub_08011408` (file_select). 99 of them are entity dispatchers
  (`table[this->field](this)`) generated from one exact template; the rest by hand.
- Helpers: `tools/declare.py` turns the `//extern gUnknown_X;` / `//sub_X();` placeholders in
  `variables.h`/`functions.h` into declarations; `tools/first_diff.py` names the symbol at the first
  differing byte. When code size changes, the first `sub_XXXXXXXX` no longer at its own address (names
  encode the original address) points at the function that grew or shrank.
- -O0 idioms seen so far: a byte cleared with `ldrb; and #0; strb` is an 8-bit bitfield write
  (`u8 x : 8`); `add r0, r1, #4` before a store is `p[1]` on a `u32 *`, not a struct field;
  `CpuSet` with control `0x01000000`/`0x05000000` bits is `CpuFill16`/`CpuFill32`.
- Left for later: `sub_08059A44` writes `gUnknown_03000520` fields as bitfields, but that struct is shared
  with -O2 C code; needs checking that a bitfield doesn't change those matches.
- Remaining: 532 of the executed functions (120 in fs_game), 7,271 asm functions overall.
- Batch 3: 5 more (fs_game 127 of 915). `struct Entity;`/`struct Manager;` are now forward-declared in
  `types.h`: without it, each `struct Entity *` in `variables.h` was a new type scoped to that parameter
  list (agbcc warned "incompatible pointer type"). `struct Manager` (entity.h) for `DoManagerEntity`.
  Skipped: `sub_0803F550` calls a bare address (`bl 0x0800238C`) with no symbol.

## Step 8: tmc matching and code-shape groups (2026-11-15)

- `tools/tmc_match.py`: compiles all 619 tmc C files with our agbcc (all compile) and compares function
  code with BL targets and pc-relative literal words masked. 678 matches, but only 20 of 32+ bytes: the
  engine code diverged. Real matches are library code (m4a sound driver, EEPROM, one save checksum) and a
  few tiny helpers. The call/literal pairs name some of our functions: `0x08003594` GravityUpdate,
  `0x0803CC20` ProcessMovement2, `0x08009924` ShowNPCDialogue.
- m4a: our function sizes line up with pokeruby's m4a.c (2002) better than tmc's (2004), but neither
  fully; Four Swords has an in-between version. Left in asm; the port can use pret's m4a C.
- 543 empty functions (`bx lr`) and 99 -O2 entity dispatchers decompiled from templates.
- `tools/clusters.py` groups remaining functions by masked code; `tools/cluster_fill.py` fills one C
  template per group with each member's callees and literals. 193 functions from 6 groups. Lessons:
  agbcc folds `&gRam + const` into one literal unless it's a struct field access (`gRam.unk1052[a]`), so
  `gRam` arrays got split to the offsets the code uses; a `u8` field read must stay `ldrb` (cast `(u8)`
  for the `s8` field `unk1062`).
- Found 34 KB of code still raw `.INCBIN` (15 blobs, mostly rom1), including tmc's `ShowNPCDialogue` at
  `0x08009924`; 28 template-ready callers wait for it to be disassembled.
- Totals: 1,349 of 7,780 functions in C; 513 of the 657 executed functions left (115 in fs_game).

## Step 9: disassembling the code that was still .INCBIN (2026-11-15)

- `tools/disasm_blob.py INC [--arm]`: entry points from the blob start, BLs anywhere in the ROM, and odd
  (Thumb) pointers anywhere in the ROM, including data tables; recursive descent marks code, literals and
  switch tables; objdump's instructions in unified syntax; the result is linked at its ROM address and
  compared byte for byte, and any instruction that doesn't reproduce becomes a raw .2byte/.4byte. One .inc
  per entry point.
- Problems on the way: `THUMB_FUNC_START` aligns to 4, but this hand-written code has functions on 2-byte
  boundaries (new `THUMB_FUNC_START_NOALIGN` macro); a switch table of odd pointers needed `label+1`;
  the blob start sometimes already had a label; a blob in the middle of a file needs the text after it
  moved behind the new chunks; and the original rom1 asm switches to `.syntax unified` at
  `0x080007C4` for good, so the closing `.syntax` must restore the mode in effect, not assume divided.
- Result: all 15 blobs (34 KB) disassembled, 249 new functions, `make compare` matches. The ARM IWRAM
  code at `0x08008FA4` and the m4a block at `0x081339C4` included. `ShowNPCDialogue` is now
  `sub_08009924`.

## Step 10: hand-decompiling executed Four Swords functions (2026-11-15)

- 17 more fs_game functions by hand, all matching on the first or second try. fs_game executed left: 98;
  fs_game left: 746; all asm left: 6635.
- Entity reshaped from what the -O0 code accesses: `x`/`y`/`z` at 0x30/0x34/0x38 as tmc's
  `union SplitWord` (the earlier `unk32` was `x.HALF.HI`), `unkC` (s32), `unk18`, `unk1E` nibbles,
  `unk50`, `unk52`, `unk54` (Entity *), `unk5E`. The 2-bit field at 0x1C needs a `u32` container:
  agbcc reads u32 bitfields with `lsl #30; lsr #30`, u8 ones with `and #3` plus a u8 truncation.
- `gUnknown_02016D60` is an overlay area: the menu code reads s16 values at +0x20, Four Swords a pointer.
  Four Swords uses an ldscript alias, `gUnknown_02016D60_fs`, with its own struct.
- Found: the Makefile didn't rebuild C files when a header changed (no SCANINC), so a header edit could
  leave a stale object and hide a mismatch. Every C object now depends on all headers.
- (2026-11-16) Batches 62-66, 33 more fs_game functions. When a byte or halfword field at a large offset
  is written with the bitfield pattern but the shared `Entity` layout can't change yet (0x60, 0x6E, 0x76),
  a cast to `struct { u8 pad[N]; u16 v : 16; } *` gives the original's `add rX, rY, #0` field pattern, where
  a `struct BitU16 *` built from an address doesn't. A pointer plus an offset added without scaling is
  `&((u8 *)p)[off]`. Named `Struct03006C80.unk6`/`unk8` (stage and score thresholds 999/2999/4999) and
  `Struct02016D60_fs.unk9`/`unkA`. fs_game: 395 functions left in asm (of 915); all code: 6,284 left.

- (2026-11-16, later) Batches 67-103, 155 more fs_game functions (the user asked to keep going until
  everything is in C). What made the remaining ones match:
  - `struct BitU16A { u16 v : 16; } __attribute__((packed, aligned(2)))` is a 2-byte element with halfword
    access, so arrays the original writes with the bitfield pattern can be typed (the link input ring buffer
    `gUnknown_0200B1D0`, now done in `sub_08037750` through a `struct LinkKeys` view with an 11-bit field).
  - Where a shared array or field is plain in -O2 code but bitfield-written in -O0 code, an ldscript alias
    gives the -O0 view (`gUnknown_03005E10_b`, `gUnknown_03000940_b`, `gUnknown_0200B1D0_k`,
    `sub_0802C12C_int` for a caller that had no prototype). Use the same alias for reads and writes in one
    function, or the literal pool gets a second entry.
  - `BITU16_AT(base, off)` / `BITU8_AT` cast macros give the large-offset field pattern for single bytes or
    halfwords the shared struct still has as padding or as a wider field.
  - Order of operands decides load order: `a->f + b` loads `a` first but `b` before the field; `x |= y`
    computes the address of `x`, then `y`, then loads `x`. Pointer subtraction that shows `lsr` is
    `((u32)p - (u32)base) >> 1`. `p->f` through `unk3000000` (a struct at 0x03000000) keeps the base and
    offset separate where a constant address is folded.
  - Control flow: `if (c) return;` shows as `b!c next; b end`; `continue` the same; a switch with one case
    and `default: break;` gives the extra jump; `case 0: default:` puts 0 in the compare chain.
  - `sub_08008F78` is code after a 16-byte table at the start of `sub_08008F68`'s .inc; it now has a label.
    `sub_08003828` is `GetNextFrame`.
  Deferred (left in asm): `sub_0803D134` (agbcc folds `v - (x - 1)`), `sub_0803A5DC` (a max() whose select
  happens before the store), `sub_08038238` (a CpuFastSet source that is never stored), plus the earlier list.
  fs_game: 240 left in asm (of 915); all code: 6,129 left.

- (2026-11-16, later) Batches 104-131, 74 more fs_game functions. New findings:
  - `& 0x7FF` on a u16 compiles to `lsl #21; lsr #21`, so the 11-bit reads of the link ring buffer and the
    map tiles need no bitfield struct (the `LinkKeys` view was dropped again).
  - A `beq body; b end` pair is also what a long `if` body produces (Thumb conditional branches reach only
    ±256 bytes), not only `if (...) return;`. Check the body length before reaching for `return`.
  - Masks: `x.HALF.HI & ~15` (signed field) gives `mov #15; bic`; the unsigned view folds to an `and` with a
    literal. `x += (rand & 3) - 2` gives the register order `x = x + 254 + ...` doesn't.
  - `struct MapDataB` (tiles as BitU16A, then one BitU8A per tile at 0x2004) for -O0 writes to the map,
    `S16_AT/U16_AT/U8_AT/S8_AT` for plain reads at an offset.
  - `sub_080012A0` and `sub_08008F78` are entry points inside other .inc files; they now have labels.
  fs_game: 166 left in asm (of 915); all code: 6,055 left.

## Step 11: recording play sessions (2026-11-15)

- `mgba_run --play DIR` (SDL2): both GBAs side by side, real-time pacing, GBA 1 on WASD (F=A G=B R=L T=R
  1=Start 2=Select), GBA 2 on the arrows (/=A .=B ;=L '=R Enter=Start RShift=Select). Inputs are
  recorded in the replay format; `--saveP` files are now read into memory only, so replays are exact.
- First build attempt didn't happen: under `set -e`, `SDL=$(pkg-config ...)` failing exits the build
  script silently, so the old binary ran. `|| true` fixed it.
- Skipping the intro: `--save-states FRAME` writes each GBA's save state plus its EEPROM (states don't
  include EEPROM) and `--start DIR` loads them. `tests/intro_linked.inputs` gets two GBAs from empty saves
  to Choose a Stage (mode 5); states at frame 1600 are `recordings/start_linked` (local only).
  Check: continuous run vs states + 600 frames: same mode changes on the same frames, RAM identical except
  20 bytes of GBA 2's stack (0x03007D21-0x03007E80, mid-frame leftovers); runs from states repeat exactly.
- Session 1: 44,522 frames, one stage (mode 2 from frame 1752, back to Choose a Stage at 44297). Replay
  (1 m 37 s with coverage) reaches the same end screen; EEPROM equal (but unchanged during play, so a weak
  check). Coverage with the lobby run: 1,135 functions executed, 939 of them still asm (219 in fs_game).
- Step 11 batches: 14 more fs_game functions matching (Entity `unk4C`; `gUnknown_03006C80` has 9 eight-byte
  entries at +0x28 indexed by Entity.form). A callee's return type shows in the caller: `lsl r2, r0, #24;
  lsr r1, r2, #24` right after the call means the callee returns u8. Executed fs_game functions still asm
  (lobby + session 1): 205; fs_game: 732; all asm: 6621.
- More batches (all matching): CreateObject (`sub_0804C8A8`, tmc name) and a sibling, ProcessMovement2
  (names Entity `speed` 0x0C and `direction` 0x2B), DoObjectEntity, the 8.8 fixed-point helpers, list
  setup at `gUnknown_03005060`. Lessons: a `u16 *` indexed `t[1]` shows as an add before the load (struct
  fields don't); a callee without a prototype gets no argument conversion, so the original's casts are
  explicit; unoptimized agbcc allocates unused locals, so a too-small frame means a missing local;
  `x &= 0` and an 8-bit bitfield store of 0 compile the same. Overlay areas used differently by Four
  Swords get ldscript aliases (`gUnknown_0201ED90_fs`). Executed fs_game left: 151; fs_game: 678; all: 6567.
- More batches. The player input swap (`sub_0803DBD4`: each Link runs with that player's buttons from
  per-player arrays, which the port will fill from each pad). `CreateObject` is an ldscript alias of
  `sub_0804C8A8` without a prototype: the original callers were in other source files and pass
  unconverted arguments, which a prototyped call can't reproduce. tmc-style `SplitWord.HALF_U` (unsigned
  view; some code reads positions with ldrh). An explicit `return;` at the end of a function shows as an
  extra branch to the epilogue. Deferred (in asm, tried and noted): `sub_0804E394` (argument narrowing),
  `sub_0803D770` (add operand order), `sub_0803CD8C`, `sub_08056D40`/`sub_08055FA0` (bitfield writes
  to the shared BGConfig struct). Executed fs_game left: 115; fs_game: 642; all: 6531.
- Commit `6a0ac77` did not match: `tools/first_diff.py` exited 0 on a difference and a chained commit ran.
  Fixed in the next commit (`feed8e7`); `first_diff.py` now exits 1, and commits are gated on
  `make compare` printing OK.
- Lessons: a raw ROM address in a literal pool may have been a symbol in the original (different
  register allocation); give it an ldscript symbol (`gUnknown_0800A49C`). A field at a large offset
  shows `add rX, rY, #0` before the constant add (`struct MapData.unk5004`), a 2-D array `[i][1]`
  adds the column before the row. agbcc rounds structs up to 4 bytes on ARM, and `packed` makes it
  assume unaligned access, so arrays whose u16 elements are written with the bitfield pattern can't be
  typed yet (`sub_08037750`, the link input ring buffer `gUnknown_0200B1D0[4][16]`, deferred).
  Executed fs_game left: 99; fs_game: 626; all: 6515.
- Switched from executed-first to smallest-first across all of fs_game (the port needs all of it, and the
  remaining executed functions are long): 10-17 matching functions per batch instead of 2-3. Found along the
  way: the 0x14-byte records at `gUnknown_0202A7E0` are script interpreters (script pointer at +0x10,
  commands read halfword arguments and advance it); `gUnknown_0201F020` has the layout of
  `gUnknown_0200B320` (alias `gUnknown_0201F020_fs`); Entity 0x68/0x70 are word/byte unions; a pointer to
  a non-packed `struct BitU16` handles bitfield writes through a pointer. fs_game: 531 functions left in
  asm (of 915); all code: 6,420 left (of 7,894 incl. the disassembled blobs).
