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

## Step 12: machine translation of the remaining asm to C (2026-11-16)

Hand-matching cost several thousand tokens per function, with about 6,000 functions left. The user chose
two cheaper tracks: (1) translate all remaining asm to C mechanically for the PC/PS2 build, and (2) a
draft generator for the regular -O0 Four Swords code, to speed up matching decomp.

- `tools/thumb2c.py OUTDIR` reads every `asm/non_matching/*/*.inc` that a `src/*.c` still includes and
  writes `OUTDIR/NAME_tr.c`. Each function becomes `void f_tr(void)` working on `gba_cpu` (registers and
  flags, `include/gba_tr.h`) with locals copied in and out around calls, plus a C-ABI wrapper
  `u32 f(a, b, c, d)` for decompiled callers. Memory goes through `RD*`/`WR*`, symbols through `SYM()`,
  branches are `goto`, switch tables (`mov pc, rN`) are a `switch` on the target address, `bl` sets `lr`
  to the real return address.
- First model (C ABI only: r0-r3 in, r0 out) failed on the hand-written engine code in rom1, which passes
  values in r1-r7 and the carry flag (`push {r1}; bl ...; pop {r1}; lsrs r1, #1; bcc`). Hence the shared
  register file.
- Other things the hand asm does: `bx r4` through a function table (only `pop {rN}; bx rN` and `bx lr`
  are returns), functions that run on into the next function at the end (now a tail call),
  calls and branches to addresses inside other functions (now extra entry points `sub_ADDR`), loads from
  another file's literal pool and raw `ldr rN, [pc, #n]` (read from the ROM image; a value equal to a
  symbol's address becomes that symbol).
- GBA libc functions (`memcpy`, ...) clash with the host's names; the checker renames them.
- Result: 5,985 of 6,002 asm files translate and compile with gcc. Not translated (stubs that call
  `gba_untranslated`): 4 ARM files, 4 `add rN, pc`, 2 jumps without a table, 7 that end in raw `.byte`s.
- **Check against mGBA** (`tools/tr_check.py`, `tools/tr_check.c`, `mgba_run --trace`): mgba_run records
  registers and all memory at entry and at return for the first calls of each function (GBA 0 only;
  calls an interrupt breaks into are dropped). `tr_check` replays each call through the translated C in
  GBA address space (memory in arrays, the ROM image, SWIs CpuSet/CpuFastSet/Div/Sqrt/LZ77, immediate DMA)
  and compares r0, r4-r11, sp and all RAM/VRAM/OAM/palette (I/O and the stack below sp excluded). Calls
  into decompiled C can't be replayed there and are skipped.
- First trace (6,000 frames of session 1): 165 calls identical, 0 different, 24 skipped.
- A capture used to wait for its function to return, so one call that never returns (the main loop)
  blocked all later captures; now captures are dropped on an interrupt or after 2 million instructions.
- More translator fixes found by the traces: `mov lr, rM; bx rN` is a call whose return lands at rM (a
  continuation: call rN, then the code at rM); a `bx r3` reached by `bl` is a veneer, not a return;
  `.align` padding must be counted for addresses; unaligned `ldr`/`ldrh`/`ldrsh` behave as on the ARM7TDMI
  (rotate / sign-extend a byte) and the animation code relies on it; code left as `.byte` is decoded from
  the ROM; instructions that can't be translated become `gba_bad_insn` traps (406, mostly data decoded as
  code) instead of failing the whole function; odd ROM words pointing into code become entry points
  (function tables). The tracer only starts a capture on a real call (BL just before, or a `bx` that is
  not a return into a continuation).
- Trace of the whole session 1 (44,522 frames, up to 3 calls per function): **1,214 calls identical to
  mGBA, 4 different** (`sub_0800A810`, `sub_0800A830`, not looked at yet), 277 skipped (208 call decompiled
  C, which the checker can't run; 39 an indirect call into `.byte` data at 0x08134177; RAM code at
  0x03006D19).

### Draft generator for -O0 code (2026-11-16)

- `tools/o0_draft.py FUNC...`: symbolic execution per basic block of the -O0 asm. Stack slots become
  locals, loads/stores become field accesses (Entity names from `entity.h`), bitfield read-modify-writes
  collapse to one assignment marked `/* bf */`, `bl` becomes a call with the arguments written since the
  last statement, `cmp` + branch becomes `if (...) goto`. Not compilable; it replaces reading 200 lines of
  asm with ~40 lines of C.
- Result: 25 fs_game functions matched in this part of the session, most on the first or second build
  (before: several attempts each). Still read from the asm: conditional expressions (`?:`), jump-table
  switches, loops through registers.
- Lessons: `<< N` vs `* N` still needs the asm (a copy before `lsl` means `*`); a `bx`/`b end` before an
  `else` shows explicit `else` blocks (sub_08055460); `do ... while (a && b)` for search loops; check that
  `make compare` printed OK (a link error leaves the old ROM and `first_diff.py` says "no difference").
- Deferred: `sub_0805C878` (16-bit subtraction with operand copies and an unfolded `+ 0xFFF8`).
- fs_game: 92 left in asm (28 deferred); all code: 5,981 asm files.

## Step 13: the small fs_game functions (2026-11-17)

- 22 more fs_game functions matched with `tools/o0_draft.py` drafts, including several that had been
  deferred before. fs_game: 42 left in asm (6 of them deferred, below), all code: 5,931 asm files.
- What made the deferred ones match:
  - A `copy; add #N` address (`add r3, r1, #0; add r1, #96`) is a real struct member, not pointer
    arithmetic; the same function written with a cast pointer (`((u16 *)&this->unk60)[i]`) doesn't
    match. Small overlay structs in `fs_game.c` stand in for fields an entity kind keeps at an offset
    that `struct Entity` types differently (`EntityU16x12`, `Struct02000010Bits`, `Hitbox`).
  - `(x ^ 1) & 1` after a narrowed call result is `!(x & 1)` (sub_0804E394).
  - A chained store with no `bic #0` (the masked value of the inner assignment) means the fields are
    signed: `Struct03000488`'s scales are `s16 : 16` (sub_0805C1F4).
  - `i++` takes one dead address computation more than `i = i + 1` (sub_08054A38).
  - `x / 2` and `x >> 1` differ in register use for a u8 bitfield (sub_08063E88).
  - The constant- and index-first order of `+` decides `adds r0, r0, r1` vs `adds r0, r1, r0`; integer
    arithmetic (`idx * 32 + (u32)base`) was the only form that gave the original's (sub_0803D770).
  - Dead code after an early `return;` is still emitted at -O0 (sub_08062CB8).
  - `sub_08003184` is a second entry point inside hand-written `sub_08003170`; it is exported with
    `.global` so C can call it.
- Still deferred (notes in the session scratchpad):
  - `sub_0803D134`, `sub_0806041C`: `x - (y + C)` / `d - (x - 1)`. gcc's front end folds the constant
    out (`(x - C) - y`), the original keeps it inside. A `(u16)` cast stops the fold but adds a narrowing;
    a statement expression `({ y + 16; })` stops it and leaves only a register choice different. The
    original source must have had some other form.
  - `sub_0803A20C`: the music selection; `unk26 != (u16)song` loads in a different order.
  - `sub_08037574`, `sub_0805C878`, `sub_08059BD0` as before.
- Mistake caught: one commit went in with a mismatching ROM, because the check `grep -E "OK|did NOT"`
  succeeds on both. It was amended at once; the check is now `grep -q "zeldaalttp.gba: OK"`.

## Step 14: separating Four Swords code from A Link to the Past code (2026-11-17)

- `reach.py --classify FILE` walks the call graph from boot twice, once with the A Link to the Past mode
  handler cut (mode 13, `0x0800B69C`) and once with the Four Swords one (mode 9, `0x0802E764`; mode table
  `0x0842731C` as documented by FourSwordsRecomp), and labels each function fs / shared / lttp /
  unreached, plus whether a coverage run executed it.
- First result: 5,689 shared, 2 Four Swords only. The walk follows every pointer-like word in data, and
  the data is still unlabelled `.INCBIN` blobs (up to 1 MB) where graphics and sound bytes happen to look
  like pointers (`AgbMain` reached the A Link to the Past sprite code through a tilemap). Rules on blob
  size or neighbouring words also dropped real edges; reverted.
- `tools/lz77_scan.py`: 2,085 LZ77 streams (2.8 MB, compressed graphics), skipped by `reach.py --packed`.
- `mgba_run --loads FILE`: logs BIOS copies/decompression (swi 0x0B, 0x0C, 0x11-0x15) and DMA from ROM
  data, copies from RAM to palette/VRAM/OAM, Thumb CPU loads from ROM data, and a bitmap of RAM words read
  by 32-bit loads. Replay of session 1 with it: same coverage and same final screen as without.
  - DMA first logged nothing: mGBA starts and ends an immediate DMA within one step, so the enable bit is
    never seen; a new transfer is detected by its registers changing. The game moves no graphics by DMA
    (only sound FIFO and EEPROM); it uses CpuFastSet, also from RAM buffers.
- `tools/load_ranges.py`: ROM ranges with exact bounds, kept only when the data goes to palette/VRAM/OAM,
  to a RAM buffer later sent there, or to RAM that no 32-bit load reads (the tilemap behind the false
  link: CpuSet into a RAM map buffer read as halfwords). No CPU load reads inside any gfx range.
  288 ranges, 243 KB.
- Result with both lists excluded: shared 3,472, A Link to the Past only 4,291 (`rom3c`, `rom3b`, `rom4`,
  most of `rom3a`, the `lttp/sprite*` files, `hud`, `interface`; none executed in the Four Swords
  session). Functions executed but not reachable stay at the LZ77-only count, so no real edge was lost.
- Next false link: sound samples (signed 8-bit PCM in `0x083C3BBC`, read by the ARM mixer in IWRAM,
  which `--loads` doesn't decode) still link the sound driver to A Link to the Past code and keep
  fs_game reachable with the Four Swords handler cut. Fix: sample ranges from the m4a voice groups, or
  decode ARM-mode loads.
- Known bug: `mgba_run --shot` with a missing `--out` directory segfaults at the end of the run.
- `tools/m4a_samples.py`: sample ranges from the m4a instrument tables. The song table is at
  `0x083C3E34` (466 entries, some empty songs with 0 tracks), found by shape; `0x083C28FC`, the first
  guess, is the driver's command jump table. 11 voicegroups (key split and rhythm followed), 49 samples,
  333 KB, no overlaps. The only 32-bit CPU reads inside them are the driver reading the PCM header's
  frequency and copying wave-memory instruments to the sound hardware, so the PCM ranges start after the
  16-byte header.
- With LZ77 streams, loaded graphics and samples excluded: shared 2,943, A Link to the Past only 4,820,
  executed but not reachable still 67. `rom3.o` shared fell from 543 to 72. What still joins the games
  is real: `interrupt_main -> DoObjectEntity ->` the object handler table `0x0813F998`, which holds both
  games' entities. Separating those needs which object types Four Swords creates (coverage, or the
  types passed to CreateObject from Four Swords code).
- Object subtypes (2026-11-17): `reach.py --cut` now also takes data objects. Cutting the object handler
  table `0x0813F998` (108 entries, indexed by Entity.subtype from `DoObjectEntity`) drops 627 functions
  from the Four Swords walk; 36 subtypes ran in session 1.
  - `tools/object_subtypes.py`: subtypes created by code, statically: constant r0 at calls to the
    creators `sub_0804C8A8`/`sub_0804C938` (51 subtypes, 4 calls non-constant), the spawn lists given to
    `sub_0804C808` (6 constant lists), `sub_0804CCE4` (always 93), the drop tables read by `sub_08013EC0`
    (`0x084299B4`) and `sub_080142F4` (`0x08429A00`), direct stores in C. 55 subtypes in all.
  - `mgba_run --loads` also logs each entity registered by `sub_08012728` (type, subtype, caller). 18 of
    the 36 subtypes that ran aren't in the static list: 15 come from the room object loader
    (`sub_0800A148`/`sub_0800A1A8`: 8-byte records, halfword 0 = subtype bits 0-8, type bits 9-12,
    position mode bits 13-15; halfword 1 = form, parameter; then x, y; lists end with 0xFFFF; walked by
    `sub_08013C8C`, 17 call sites), 3 from `sub_08014958`/`sub_08015888`/`sub_08015AC4`/not registered.
  - The room lists hang off per-room pointers at `0x02016330[room]`, filled by the room loader; the area
    table `0x0842AD18` -> header +20 holds only room 0's layer table (12 lists, 2 subtypes). Finding lists
    by shape alone is useless (1,903 "lists" even with subtype < 108). Not applied to reach.py yet: an
    incomplete subtype list would drop objects of stages not yet recorded.
- Room lists found (2026-11-17): `sub_080131FC` fills `0x02016330[room]` from room pools
  `0x0842B8CC[area]` (counts `0x0842B8DC`; 216 rooms, entries {descriptor, flags}, descriptor +4 = layer
  table), `sub_080133D0` from special pools `0x0842B8A8[6]` (counts `0x0842B8C0`, header +20), plus
  `0x0842AD08[0..3]` and the area headers. Objects are layers 0 and 1 (`sub_08012F84(room, layer)`
  callers); layer 3 is another format, layer 7 code. Also: tile objects from `0x081380F8`/`0x0813821E`
  (`sub_08015AC4`, {key, type, subtype, ?}), asm that stores type 6 then a constant subtype
  (`sub_08015888`). `object_subtypes.py` now finds 97 of the 108 subtypes; of the 36 that ran only 42 is
  missing (logged by `mgba_run` as `morph 0 -> 42`: created without `sub_08012728`, source not found).
- `reach.py --objects FILE`: an object table entry is followed only when a reachable function creates
  its subtype or its handler ran. Effect: Four Swords walk 2,945 -> 2,910 functions (1,780 still asm),
  executed-but-unreachable unchanged at 67. Nearly the whole object table is Four Swords code, so the
  "shared" class is in practice "needed by Four Swords": the A Link to the Past walk reaches it only
  because the entity update runs from the interrupt handler in every mode.
- Work list for the port: the Four Swords walk (2,910 functions, 1,780 in asm) plus anything a coverage
  run executes; the 4,820 "lttp" functions (3,930 in asm) can wait.
- `tools/classify.sh OUT REC_DIR...` rebuilds everything from the build and local recordings (replays with
  `--coverage --loads`, LZ77 streams, loaded graphics, m4a samples, object subtypes) and runs
  `reach.py --classify`; result committed as `docs/function_classes.txt` (address, name, object, size,
  class, executed, in asm). 2.5 minutes for session 1, same numbers as by hand. A replay has to run as
  long as the session, not to its last key change (session 1: 44,522 frames, last input 43,996), so
  `mgba_run --play` now writes `DIR/frames` and classify.sh reads it.
- Cross-check against FourSwordsRecomp's hand-checked jump tables (57) and data-pointer functions
  (1,354): 1,769 of our functions; 598 shared, 1 fs, 1,144 lttp (the recomp covers the whole ROM),
  26 unreached. The 26 are all handlers of the 10 object subtypes nothing creates and that never ran
  (21, 26, 27, 43, 44, 62, 63, 71, 79, 106) and three sub-state tables of those handlers: no
  contradiction.

## Step 15: the executed -O2 functions Four Swords needs (2026-11-17)

- Work queue from `docs/function_classes.txt`: Four Swords-needed functions still in asm that ran, split
  into compiled code, hand-written asm and the m4a driver. Hand-written: no `bx` return, or `pop {..pc}`,
  `mov pc, lr`, `.arm` (agbcc with `-mthumb-interwork` always returns through `bx`). Needed asm: 1,413
  compiled (296 executed), 308 hand-written (210 executed: matching C impossible; plain C for the port
  later), 61 m4a (from pret's C later).
- 78 of the 296 executed compiled functions matched in batches of 10-13 (`o0_draft.py` gives a rough
  shape for -O2 too; the registers it can't name are usually obvious). Per-function check after a batch:
  compare each function by symbol against the original (later code shifts while a batch is wrong); a
  difference only in the literal pool is from another function's size.
- -O2 lessons:
  - Block order follows the source for `if (c) return X; return Y;`, not for `c ? X : Y` or
    `if/else`: when the branch is inverted, swap which case returns first.
  - A loop with no initial bound check is `do ... while`.
  - Scheduling a store's constant before an earlier store means the compiler knew they don't alias:
    two struct fields, not two indexes of one `u8 *` (sub_0800E39C).
  - `p--` after `p = table[i]` vs `p = table[i] - 1` changes register use (sub_0802C23C).
  - A caller that passes an argument unconverted had a different prototype: alias the function in the
    ldscript (`sub_08012F84_u32`, like `CreateObject`).
  - Second entry points into hand-written code (`sub_08003F1C`, after a 0x40-byte table that starts
    `sub_08003EDC`) get a `.global` label.
- Structs found: the text reader `Struct0800EE2C` (rom_0800D4F0; a pointer stack at 0x20, 8-byte entries
  at 0xD8), `Struct0202A770`, `Struct0202E110`, `Struct02002440`, `gEntityLinks` (8 list heads),
  `Struct03000450` bytes 4-8 and 0x16.
- Deferred: sub_08013D20 (narrowing before a struct copy), sub_0801620C (signed range test kept on a
  `u8`), sub_08012410, sub_08012B04, sub_0802C148, sub_08013C50 (not tried).

## Step 16: more -O2 functions, with the matching-decomp skill's tips (2026-11-17)

- Read two outside guides (kept locally in `reference/`, not committed): the gba-matching-decomp skill
  repo (agbcc tips by ID) and an article on setting up a GBA decomp project. Useful rules from them:
  matches must come from plausible source (no compiler forks, register pins or similar tricks); flags
  that only add output, like agbcc's RTL dumps, are fair for register-choice cases.
- The Makefile already rebuilds C objects when any header changes (step 6), so nothing to add there.
- 26 more functions matched (5,804 asm files left). Forms that fixed a mismatch:
  - sub_0801620C: a signed `0..2` range check on a byte that the compiler kept as two compares: two
    separate early returns on an `s32` local (`if (n < 0) return; if (n > 2) return;`). The skill's
    `switch` tip still folded it to one unsigned compare.
  - sub_08012410, sub_0802C148: an early return before the loop / a `do ... while` outer loop.
  - sub_0800C658: index the checksum loop (`((u16 *)p)[i]`); a walking pointer reloads the global.
  - sub_0800E5EC: a fall-through switch; the fill loop's constant in a local before the pointer setup.
  - sub_08013A10: the end bound is `base + 48` records; `gUnknown_0201EFF0` is the same address under
    another name.
  - sub_0802B0F8: a decrement of a `u16 :16` bitfield adds a 0xFFFF mask; a plain `u16` cast store
    matches (a plain union member did not).
  - sub_080144A0: store through the just-assigned globals rather than a local pointer.
  - sub_0800EE50: `s32` bank (signed range compare from the switch), `(u8)c` for the glyph index.
  - sub_0802CEC4: repeat the field read in the condition instead of a local.
- Prototype fixes: `sub_080144F0` takes a u16 first argument (callers pass 310). `Struct0800EE2C.unk3` is
  the text column.
- Deferred, with what was tried (scratchpad notes): sub_0806041C and sub_0803D134 (`x - (s + 16)` folded;
  at -O0 a temporary would need a stack slot the original doesn't have), sub_08013C50, sub_0802614C,
  sub_0802D228, sub_0802D190, sub_0800E63C, and the earlier register-choice ones.

## Step 17: decomp-permuter (2026-11-17)

- Set up `decomp-permuter` (simonlindholm, MIT, from GitHub; it bundles its own pycparser fork and only
  needs `toml`, also cloned from GitHub into `reference/`). `tools/permuter_setup.py FUNC draft.c OUTDIR`
  builds a permuter directory for one function: the file's C with the draft in place of the function's
  asm include (other asm includes dropped), preprocessed; the original asm assembled alone as the target;
  a compile script with the file's flags (-O2 or -O0 for fs_game, `-fprologue-bugfix` per the Makefile).
- 37 more functions matched (5,767 asm files left). The permuter's zero-score sources are rarely plausible
  C (an extra variable holding a table or a constant, `if (1)`, `r = x != 0`), so they are not committed
  as they are. They point at the expression that sets the registers, and a plausible form follows:
  - `u8` casts on a table of `u16` pairs (sub_0803472C), `<< 2` instead of `* 4` (sub_0801DEC0).
  - The `if`/`else` branches swapped (sub_08016EF0, sub_0801E7A0).
  - A struct view (`((struct View *)&g)->field`) where the ROM keeps the base address in a register and
    adds the offset; an array index or a field of the global itself folds base+offset into the pool word
    (sub_0802C710, sub_0800E63C).
  - `u32` counters assigned back to a `u8` field (sub_0801E7A0).
- Other forms: `b = ...` inside the first expression to order loads (sub_080260E4), separate statements
  for two stores of one constant (sub_0803008C), `if (a != X && ...) {...; return 16;} return 0;`
  (sub_080269F8), and an ldscript-alias prototype for a wider argument (`sub_08012F84_u32`, sub_08026ACC).
- Prototype and struct fixes: `sub_08009664` returns u16, `sub_0800EB50` takes a u32, `sub_08013C8C` takes
  a `u16 *`, the 4th argument of `sub_08013C8C` from sub_0803472C is `unk52`; Struct0202A5E0 (`gTextbox`)
  `unk2_6`, `unk10C`, `unk10D`; Struct03000450 `unk2A`; Struct03006C80 `unk49`, `unk4B`; Struct0202A770
  `unk58` (a 12-byte record, copied to `unk5C`); Struct0202A580 `unk8` is a u16; the link state
  `gUnknown_02030790` (rom2.c) with its packet pointers.
- Process: one commit was made after a failed compare because `| tail -1` hid make's status; the gate is
  `grep -q "zeldaalttp.gba: OK"` again and the commit was amended. The scratchpad `unplace.py` once
  deleted asm include lines while removing a draft's declarations; the compare caught it before a commit.
- Deferred with permuter scores in the scratchpad notes: ~30 functions, mostly register choice.
