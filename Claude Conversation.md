# Claude Conversation

Twilight Princess PS2 port: the working conversation with Claude Code.

## User

Take a look at this repository. How much work remains for disassembly?

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; ls; cat README* 2>/dev/null | head -50; git ls-files | sed 's|/[^/]*$||' | sort | uniq -c | sort -rn | head -30

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; wc -l asm/*.s asm/lttp/* src/*.c src/lttp/* data/* 2>/dev/null | sort -n | tail -40; cat ldscript.txt | head -60; grep -

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; grep -h "func_start\|^\s*\.thumb_func\|^\s*thumb_func" asm/*.s asm/lttp/*.s | awk '{print $1}' | sort | uniq -c; grep -l

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; sed -n 1,30p asm/rom3.s; grep -m5 -n "^[A-Za-z_]" asm/rom4.s; grep -m3 -n "^[A-Za-z_]" data/data.s; grep -ohE "push \{[^

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; for f in asm/*.s asm/lttp/*.s; do echo "$f $(grep -ciE '^\s*(THUMB|ARM)_FUNC_START|thumb_func_start|arm_func_start' $f)"

## Claude

Counting the `.INCBIN` usage in data, then I'll summarize.

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; grep -ci incbin data/*.s; grep -i incbin data/*.s | awk -F'0x' '{print $2" "$3}' | head -3; python3 - <<'E' import re,gl

## Claude

Short answer: almost everything is still left to do. The ROM is fully disassembled and can be rebuilt from assembly, but only a small part has been decompiled to C. (The repo name says PS2, but this is the GBA *A Link to the Past & Four Swords*: the ldscript targets ARM at `0x08000000` and builds with agbcc.)

| Area | Done | Remaining |
|---|---|---|
| **Functions** | About 305 functions written in C, across 17 files in [src/](src/) | About 7,430 functions still in [asm/](asm/), so roughly **4% is decompiled** |
| **Non-matching code** | — | About 40 places in `src` still use inline `asm`, `NONMATCHING` or `NAKED`, mostly [sprite2.c](src/lttp/sprite2.c), [rom2.c](src/rom2.c) and [rom3a.c](src/rom3a.c) |
| **Data** | Graphics extraction exists ([graphics/alttp](graphics/alttp), 253 files) | About 4,670 `.INCBIN` blobs still read straight from `baserom.gba`, about **4.9 MB of the ROM's data** |
| **Naming** | A few files have names (`hud`, `interface`, `file_select`, the `lttp/sprite_*` files) | Most symbols are still `sub_XXXXXXXX` or `gUnknown_XXXXXXXX` |

The biggest files still in assembly, by function count:
- [rom3.s](asm/rom3.s): 1,726
- [rom3c.s](asm/rom3c.s): 1,285
- [file_select.s](asm/file_select.s): 1,129
- [game_select.s](asm/game_select.s): 1,024
- [rom4.s](asm/rom4.s): 793

These counts are approximate. I counted function-start macros in the assembly and function definitions in the C files with grep, and I didn't build the ROM. If you can build it, `calcrom.pl` on the linker map gives the exact split of code and data bytes between C and assembly.

## User

I have 3 .gba ROMs here: /media/sf_VirtualBox_Shared_Folder
Copy them to the requisite part of the repository. They won't be uploaded to GitHub

- tool `Bash`: ls -la /media/sf_VirtualBox_Shared_Folder; cd /home/alex/Documents/zeldaalttp-ps2; cat .gitignore; grep -n "baserom\|\.gba" Makefile | head; cat checksum.sha1 c

## Claude

The USA ROM matches the repo checksum, so it becomes `baserom.gba`. The build has no EU/JP support, so I'll store those as `baserom_eu.gba` / `baserom_jp.gba`.

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; S=/media/sf_VirtualBox_Shared_Folder; cp "$S/Legend of Zelda, The - A Link to the Past & Four Swords (USA, Australia).gb

## Claude

I copied all three ROMs to the repo root. `.gitignore` already excludes `*.gba`, and `git status` shows nothing new, so they won't be pushed to GitHub.

| File | Source | Notes |
|---|---|---|
| `baserom.gba` | USA, Australia | The build reads its data from this file. Its SHA-1 (`a272055a…`) matches [checksum.sha1](checksum.sha1). |
| `baserom_eu.gba` | Europe | The build doesn't use this one. |
| `baserom_jp.gba` | Japan | The build doesn't use this one. |

The repo only supports the USA version, so I named the other two myself (`baserom_eu.gba` and `baserom_jp.gba`). They're stored for reference or for supporting more regions later.

## User

What I want to do in this fork is finish converting the disassembly to C and port it to the PS2. The end goal is to be able to play Four Swords on the PS2 with split screen instead of separate GBAs. The Link to the Past part is not really relevant to me right now. For reference, I recommend the following: https://github.com/Jyhsus/FourSwordsRecomp and https://github.com/zeldaret/tmc. The recomp is not what I want to achieve here, but it could be useful for structural goals. The Minish Cap decompilation can be used as a reference for shared engine code between Four Swords and Minish Cap. Download them both to this repository folder for reference, but don't upload them to GitHub. Once again, pull the agent rules from tp-ps2 and let me review for how they apply to this project.

- tool `Bash`: ls ~/Documents; ls -a ~/Documents/tp-ps2 2>/dev/null | head -40; ls ~/Documents/tp-ps2/.claude 2>/dev/null

## Claude

Starting both clones in the background while I read tp-ps2's rules.

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2; mkdir -p reference; printf 'reference/\n' >> .git/info/exclude; (git clone --depth 1 https://github.com/Jyhsus/FourSword

- tool `Bash`: cd ~/Documents/tp-ps2; wc -l CLAUDE.md; cat CLAUDE.md; ls .claude docs 2>/dev/null

- tool `Bash`: ls ~/Documents/tp-ps2/tools/ps2/; ls /home/alex/Documents/zeldaalttp-ps2/tools/agbcc 2>&1 | head -2; which mgba mgba-qt arm-none-eabi-as 2>&1; grep -n "compare\

- tool `Bash`: cat /tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/tasks/b57is9449.output

## Claude

I downloaded both reference repos to `reference/FourSwordsRecomp` and `reference/tmc`. I excluded `reference/` in `.git/info/exclude` rather than `.gitignore`, so the exclusion stays on this machine and isn't committed. `git status` is clean.

I read the rules in `tp-ps2/CLAUDE.md` but haven't written a `CLAUDE.md` here yet. Here's how each rule would apply, so you can decide before I write it:

**Keep as written**
- **Ponytail:** the least-new-code rules, unchanged.
- **Web access:** GitHub only without asking, and never tcrf.net.
- **Notify at stopping points.**
- **Check what was already tried:** search `docs/` before planning a debugging approach, and also the other ports' walkthroughs (TP, MGS1, SH1).
- **Shell:** no `pkill -f` with a pattern that matches its own command.
- **PCSX2 rules** for when there is a PS2 build: software GS renderer (null for sync runs), at most 3 parallel runs, a stall is a crash, PINE for debugging, never block with interrupts off, never dismiss "TLB Miss". The TLB rule matters even more here, because GBA code reads open bus and unmapped memory without faulting, much as PS1 code reads through NULL.
- **Real hardware:** a hung PS2 needs a power cycle, and EE hardware data breakpoints don't work. Deploying through `build-and-deploy` with UDPFS and Neutrino carries over, but needs its own Neutrino folder and ISO name.

**Needs adapting**
- **Matching build:** the regression check becomes `make compare`, which checks the result against `checksum.sha1` (USA). That can't run yet: `tools/agbcc` isn't installed, and that's the first setup step. Once C code is built for the PS2 there's a second check, with GBA-matching as the reference.
- **Reference emulator:** Dolphin becomes a GBA emulator. I'd suggest mGBA: it can be scripted and can run Four Swords multiplayer with linked instances, which you'd need to compare against split screen. Which emulator do you want?
- **TAS loop timestamps:** `GV_Time` is an MGS name. This needs the Four Swords frame counter once it's identified, or should be dropped until a TAS exists.
- **Walkthrough, planning doc and conversation archive:** these work the same way, but none of the files exist here yet. I'd create `docs/Planning Doc.md` and `docs/Running Walkthrough.md`, copy `archive_conversation.py` from tp-ps2, and point it at `~/.claude/projects/-home-alex-Documents-zeldaalttp-ps2/`.

**Possible additions for this project**
- **Scope:** decompile Four Swords and shared engine code first, and leave the Link to the Past-only code (`src/lttp`, the `lttp` sprites) in assembly.
- **Reference use:** the tmc decomp is the source for names and structs of shared engine code, so check it before naming a function. FourSwordsRecomp is only for structure (how it gets 4 players running in one process) and shouldn't be copied as code.
- **Region:** only USA has to match. `baserom_eu.gba` and `baserom_jp.gba` are for reference only.

Once you confirm or correct these, especially the emulator choice, I'll write `CLAUDE.md` and the two `docs/` files.

## User

As far as TAS goes, that will be difficult because I don't know of any TASes for Four Swords, probably because it would require linking 2 GBAs in an emulator. I am open to other kinds of unit tests for checking accuracy, however. I would like to use mGBA. Let's leave Link to the Past in assembly for now and focus on building a program that just boots into Four Swords, much like the recomp does. If there's anything you need me to install for assisting with disassembly and decomp, let me know.

- tool `Bash`: for t in arm-none-eabi-as arm-none-eabi-gcc mgba mgba-qt gcc make python3 perl libpng-config; do printf "%s: " $t; which $t || echo missing; done; ls ~/Document

## Claude

Writing CLAUDE.md and the two docs now.

- tool `Bash`: cd ~/Documents/zeldaalttp-ps2; mkdir -p tools/ps2 docs; cp ~/Documents/tp-ps2/tools/ps2/archive_conversation.py tools/ps2/; head -60 reference/FourSwordsRecomp/

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/CLAUDE.md

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/docs/Planning Doc.md

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/docs/Running Walkthrough.md

- tool `ToolSearch`: 

- tool `PushNotification`: 

## Claude

I wrote [CLAUDE.md](CLAUDE.md) from the tp-ps2 rules with your choices folded in. It sets mGBA as the reference emulator, keeps the project to Four Swords only (Link to the Past stays in assembly), and makes "boot straight into Four Swords" the first goal. I also started [docs/Planning Doc.md](docs/Planning%20Doc.md) and [docs/Running Walkthrough.md](docs/Running%20Walkthrough.md), and copied `archive_conversation.py` into `tools/ps2/`. Nothing is committed yet, so you can review it all first.

**Accuracy checks without a TAS:**
- **The decompiled C itself:** `make compare` checks that the rebuilt ROM is byte-for-byte identical to yours. A function counts as done only when it produces the same machine code as the original.
- **The port:** run the same scripted inputs in linked mGBA instances and in our build, then compare RAM dumps and screenshots at chosen frames. Short scripted scenarios replace the TAS. mGBA can run Lua scripts, so this can be automated.

**Already known, from FourSwordsRecomp's notes:** the address of the byte that selects the game mode, the function that sets it, and `start_four_swords` at `0x08030E0C`. So the boot-straight-in patch should be small. I'll put it behind a build flag so the normal build still matches.

**Please install:**
```
sudo apt install binutils-arm-none-eabi libpng-dev pkg-config mgba-qt
```
- `binutils-arm-none-eabi` provides the GBA assembler and linker.
- `libpng-dev` and `pkg-config` are needed to build the repo's graphics tool.
- `mgba-qt` is the reference emulator.

I'll build agbcc, the GBA C compiler this project uses, from GitHub myself. A dump of your own GBA BIOS is optional for mGBA, which has a built-in replacement. It would make the reference runs more accurate, though, and FourSwordsRecomp requires one.

Once those are installed, I'll get `make compare` working first.

## User

I've installed everything. I'll worry about the GBA BIOS later

## Claude

Building agbcc from pret and installing it into `tools/agbcc`.

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2/reference && git clone --depth 1 https://github.com/pret/agbcc 2>&1 | tail -1 && cd agbcc && ./build.sh >../agbcc_build.l

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2 && make -j$(nproc) compare 2>&1 | tail -15

## Claude

The link fails with undefined symbols. Finding the root cause:

- tool `Bash`: make compare 2>&1 | grep -v "undefined reference\|in function" | head -20; make compare 2>&1 | grep -o "undefined reference to \`[^']*" | sort -u | wc -l; grep 

- tool `Bash`: sed -n 1,90p Makefile; ls -la src/rom2.o src/rom2.s 2>&1; arm-none-eabi-nm src/rom2.o | grep C140

## Claude

`src/rom2.o` is nearly empty, so the C compiled to nothing. Checking the compile step:

- tool `Bash`: sed -n 90,120p Makefile; cat src/rom2.s; arm-none-eabi-cpp -Itools/agbcc/include -iquote include -nostdinc -undef src/rom2.c 2>&1 | tools/agbcc/bin/agbcc -mthum

- tool `Bash`: arm-none-eabi-cpp -Itools/agbcc/include -iquote include -nostdinc -undef src/rom2.c | head -3

- tool `Bash`: make tidy >/dev/null && make -j$(nproc) compare CPP=cpp 2>&1 | grep -iE "error|warning|OK|FAIL" | head

- tool `Bash`: make compare CPP=cpp 2>&1 | tail -3

## Claude

The build matches. I'll make the Makefile use the host `cpp` when devkitARM isn't set, and make piped commands fail loudly so this kind of error doesn't hide again:

- tool `Edit`: /home/alex/Documents/zeldaalttp-ps2/Makefile

- tool `Bash`: make tidy >/dev/null && make -j$(nproc) compare 2>&1 | tail -1; git status --short

## Claude

Updating the planning doc and walkthrough:

- tool `Bash`: sed -i 's/- \[ \] Install `arm-none-eabi`/- [x] Install `arm-none-eabi`/; s/- \[ \] Build `tools\/agbcc`/- [x] Build `tools\/agbcc`/; s/- \[ \] `make compare` m

## Claude

The build now works: `make compare` rebuilds the ROM and prints `zeldaalttp.gba: OK`, so it's byte-for-byte identical to your USA ROM.

- **Compiler:** I built agbcc from pret's GitHub and installed it into `tools/agbcc`. That folder is already in `.gitignore`, so it won't be uploaded.
- **Makefile fix:** the build called `arm-none-eabi-cpp`, which Debian's binutils package doesn't include. The error was hidden because the Makefile pipes the preprocessor into the compiler, so every C file compiled to nothing and the link then failed with about 100 missing symbols. The [Makefile](Makefile) now uses the system `cpp` when devkitARM isn't set. It also runs shell commands with `pipefail`, so a broken pipe like that stops the build with an error instead.
- **Docs:** I ticked off Phase 0 in [docs/Planning Doc.md](docs/Planning%20Doc.md) and added Step 2 to [docs/Running Walkthrough.md](docs/Running%20Walkthrough.md).

Nothing is committed yet: the Makefile change, `CLAUDE.md`, `docs/` and `tools/ps2/` are waiting for your review. When you're ready to commit, I'll generate `Claude Conversation.md` first, as the rules require.

Next is Phase 1: mapping which code belongs to Four Swords and adding the build option that boots straight into it. Shall I start?

## User

Commit. Then, lay out the plan for porting

## Claude

Generating `Claude Conversation.md` first, as the rules require:

- tool `Bash`: D=~/.claude/projects/-home-alex-Documents-zeldaalttp-ps2; S=/tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad

- tool `Bash`: git checkout -b ps2-port && git add Makefile CLAUDE.md docs tools/ps2/archive_conversation.py "Claude Conversation.md" && git status --short && git commit -q -F

## Claude

Committed. Now gathering what the plan needs from the recomp's design doc and the TP port's plan:

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2/reference/FourSwordsRecomp && wc -l docs/DESIGN.md && grep -n "^#" docs/DESIGN.md | head -50; sed -n 1,60p ~/Documents/tp

- tool `Bash`: sed -n 46,80p docs/DESIGN.md; sed -n 420,492p docs/DESIGN.md | cut -c1-260

## Claude

I have what I need. Writing the plan into the planning doc:

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/docs/Planning Doc.md

## Claude

I committed the setup on a new branch, `ps2-port` (`d086e57`). It has `CLAUDE.md`, the docs, the Makefile fix and `Claude Conversation.md`, which I generated first as the rules require. I didn't push.

The full plan is in [docs/Planning Doc.md](docs/Planning%20Doc.md), which isn't committed yet so you can review it first. In short:

**The approach:** decompile only the code Four Swords actually reaches into C, and keep the GBA build matching throughout. Then compile that same C for PC and PS2 on top of a layer that stands in for the GBA hardware. Each player gets their own copy of the game running in the one program. The copies are linked in memory instead of by cable, and each is drawn into its own part of the screen.

1. **Four Swords on its own (GBA build).**
   - Add an `FS_ONLY` build option that skips the "CHOOSE A GAME" screen and goes straight to Four Swords, using the same hook FourSwordsRecomp uses. The normal build still matches.
   - Write an mGBA test script: scripted inputs per instance, plus RAM dumps and screenshots at chosen frames, with two linked instances.
   - Map every function reachable from boot with Link to the Past cut off, including functions only called through pointer tables in the data. That list is the decomp work queue; everything else stays in assembly and is left out of the port.
2. **Decompile that set.**
   - Start with library code that's already been decompiled elsewhere: BIOS calls, the m4a sound driver, EEPROM saves and the link cable code (tmc and other pret projects).
   - Then the engine code Four Swords shares with Minish Cap, then Four Swords' own code.
   - The ARM-mode routines (interrupt handler, sound mixer, code copied into RAM) get rewritten in C.
   - Data blocks that contain pointers get labelled, so they can be linked at any address.
3. **PC build first, to remove risk early, as in the TP plan.**
   - GBA hardware addresses become arrays. The game's RAM becomes one block per instance, so switching players is just switching a pointer.
   - The hardware layer is a software graphics renderer, timers, DMA, interrupts, input, saves and sound.
   - Check: one instance matches mGBA at the same frames, then 2–4 linked instances match linked mGBA.
4. **PS2.**
   - Build with ps2sdk: each instance draws into its own texture on the PS2's graphics chip, in a 2- or 4-way split.
   - Multitap for up to 4 controllers, sound through the IOP, saves on the memory card.
   - Test in PCSX2, then on real hardware.
   - The main performance risk is rendering 4 GBA screens in software on the PS2's CPU. If that's too slow, rendering moves to the PS2's graphics chip.

The GBA and PS2 are both little-endian, so unlike the TP port the data needs no byte swapping.

**Decision for you:** decompiling everything Four Swords reaches is most of the work, and the PC build can't run until it's done. One option is to translate not-yet-decompiled Thumb code automatically into plain C as temporary scaffolding, which the decomp then replaces function by function. That would let Phase 3 start much earlier, but it is partly the recomp approach you said you don't want. I'd recommend it only as scaffolding that is removed as the decomp catches up. Do you want it, or a pure decomp?

Phase 1's first two items don't depend on that answer, so I can start them now.

## User

Explain this layered approach a little more.

## Claude

There are three layers. Only the bottom one changes between PC and PS2.

```
┌───────────────────────────────────────────────┐
│ 1. Game code (decompiled C)                   │  identical for GBA, PC and PS2
├───────────────────────────────────────────────┤
│ 2. GBA hardware layer                         │  identical for PC and PS2
│    fake RAM/VRAM/registers, PPU, timers, DMA, │
│    IRQs, link hub, EEPROM, m4a output         │
├───────────────────────────────────────────────┤
│ 3. Platform backend                           │  PC: SDL     PS2: ps2sdk
│    show a picture, play samples, read pads,   │
│    save a file                                │
└───────────────────────────────────────────────┘
```

### 1. Game code
This is the decompiled C. On the GBA it touches hardware directly through fixed addresses:

```c
REG_DISPCNT = DISPCNT_BG0_ON | DISPCNT_OBJ_ON;      // a write to 0x04000000
DmaCopy32(3, tiles, (void *)0x06000000, 0x800);      // copy into VRAM
```

In the GBA build these stay real addresses, which is why `make compare` keeps matching. In the PC and PS2 builds a header redefines the same names to point into ordinary arrays:

```c
#ifdef PLATFORM_GBA
#define REG_BASE  0x04000000
#define VRAM      0x06000000
#else
#define REG_BASE  ((uintptr_t)gba->io)     // u8 io[0x400]
#define VRAM      ((uintptr_t)gba->vram)   // u8 vram[0x18000]
#endif
```

The game code itself stays unchanged. That's why the decomp has to come first: hand-written Thumb assembly can't run on a PC or a PS2, but C compiled with `PLATFORM_PC` can.

### 2. GBA hardware layer
On a real GBA, writing to a register makes the hardware do something. Here this layer has to do it instead, once per frame or when the game asks:

- **PPU:** reads the fake VRAM, OAM, palette and display registers, and draws the 240×160 picture into a pixel buffer. This is the biggest piece.
- **DMA, timers, interrupts:** a DMA becomes a `memcpy`. The VBlank interrupt becomes a function call at the end of each frame. Waiting for VBlank becomes "return to the main loop".
- **BIOS calls** (`CpuSet`, LZ77 decompression, division): plain C functions.
- **Link cable:** when instance 1 writes to its link register, the hub delivers the data to instances 2–4 directly in memory.
- **EEPROM:** reads and writes become an array that's loaded and saved as a file.
- **Sound:** the game's own m4a driver mixes into a sample buffer, and this layer passes the buffer down.

This layer knows nothing about SDL or the PS2. It produces pixel buffers and sample buffers, and takes button bits in.

**Multiple players:** everything one GBA has (RAM, VRAM, registers, the game's globals) lives in one `struct Gba`. Four players means four of these structs. Each frame the main loop does:

```c
for (i = 0; i < nplayers; i++) {
    gba = &instances[i];          // switch the "current GBA"
    gba->keys = pad_read(i);
    AgbMainFrame();               // the game's own code, one frame
    ppu_render(gba);              // into gba->framebuffer
}
link_hub_exchange(instances, nplayers);
```

The game thinks it's alone on its GBA, and the link hub makes the others look like they're on a cable.

### 3. Platform backend
This is a thin layer with four jobs:

| Job | PC | PS2 |
|---|---|---|
| Show the framebuffers | SDL texture per player, split window | upload each to GS VRAM as a texture, draw 2 or 4 quads (split screen) |
| Play sound | SDL audio | audsrv on the IOP → SPU2 |
| Read input | keyboard / SDL controllers | padlib + multitap, pad *n* → player *n* |
| Save | file on disk | memory card file |

So the PS2 work in Phase 4 is mostly this layer, plus speed.

### Why the PC goes first
The PC build has the same layers 1 and 2 as the PS2 build. Bugs there, like a wrong decompiled function, a PPU mistake or a link desync, are found with a debugger, sanitizers and instant restarts. On the PS2 you'd be debugging the same bugs in PCSX2 or on hardware. When the PC build matches mGBA, any remaining PS2 problem has to be in layer 3 or in performance.

### How accuracy is checked
- **Layer 1:** `make compare`. A decompiled function that matches byte for byte is correct by definition.
- **Layers 1 and 2 together:** run the same scripted inputs in mGBA and in our build, and compare RAM and screenshots at the same frames. A difference in RAM points to the game code or the hardware layer. Matching RAM but a different picture points to the PPU.
- **Layer 3:** the PS2 picture should equal the PC picture for the same frame.

### Where the scaffolding option fits
Layer 1 has to be C before anything runs. The option I mentioned would generate temporary C from the remaining Thumb assembly, one plain C function per assembly function, using emulated registers. Layers 2 and 3 could then be built and tested much sooner, and each real decompiled function would replace its generated twin as it's done. Without it, the PC build waits until every function Four Swords reaches has been decompiled.

## User

I was thinking of having four 240x160 windows drawn on a 640x480 canvas for 4-player mode. With this layered system in mind, would I be able to change to have four 320x240 windows drawn on a 640x480 canvas?

## Claude

Yes. Showing the same picture bigger is only a layer 3 change. Showing more of the game world in each window is much harder and reaches into layers 1 and 2.

### Option A: scale the GBA picture up (layer 3 only)
The game still renders 240×160 per player and the hardware layer still produces a 240×160 framebuffer. The backend just draws each framebuffer into a bigger rectangle. On the PS2 the GS does the scaling for free when it draws the textured quad: you give it a 240×160 texture and a 320×240 rectangle on screen.

```
640×480 canvas
┌──────────┬──────────┐
│ P1       │ P2       │   each quad: 320×240
│ 240×160  │ 240×160  │   texture scaled up by the GS
│ tex      │ tex      │
├──────────┼──────────┤
│ P3       │ P4       │
└──────────┴──────────┘
```

Switching between your two layouts is a few numbers in the backend: rectangle size and position per player. It could even be a menu option.

There's one catch: the shapes differ. The GBA screen is 3:2 (240×160) and 320×240 is 4:3. Filling the window exactly stretches the picture 1.33× horizontally and 1.5× vertically, so everything looks a bit tall and narrow. Your choices:

| Mode | Window content | Look |
|---|---|---|
| Stretch | 320×240, fills it | Distorted (+12% height relative to width) |
| Keep shape | 320×213, 13-pixel bars top and bottom | Correct proportions, small borders |
| Integer | 240×160 centred in 320×240 | Sharpest, biggest borders (your original layout) |

Pixel sharpness also matters. 1.33× isn't a whole number, so with nearest-neighbour filtering some GBA pixels come out 1 screen pixel wide and some 2, which shimmers when scrolling. Bilinear filtering hides that but blurs the image. Your original 240×160-per-window plan avoids the problem completely.

### Option B: render a 320×240 view (layers 1 and 2)
To actually see more of the map, the game itself has to believe its screen is 320×240, like widescreen hacks in other decomps:

- **Game code:** the camera, scrolling limits, culling of off-screen enemies and sprites, and HUD positions all assume 240×160, usually as numbers written straight into the code.
- **Background loading:** the game only streams tilemap data for the area around a 240×160 view. A bigger view would show unloaded garbage at the edges.
- **Hardware layer:** the PPU would draw 320×240, and GBA background and sprite coordinate wrapping limits get in the way.
- **Gameplay:** Four Swords puzzles and enemy spawns are designed around what fits on a GBA screen.

That's only realistic after the decomp is complete and well understood, as a later enhancement.

### Output resolution on the PS2
640×480 is fine on a PC. On the PS2 the usual NTSC output is 640×448, while 640×480 needs the 480p (VGA) mode, which not every TV accepts. The backend can handle that by scaling slightly or shifting the windows. It's the same kind of layer 3 adjustment, so it doesn't affect the rest of the plan.

**My recommendation:** build the backend with one rectangle per player, so all of Option A is configuration. Start with your 240×160 layout as the sharpest baseline and add the scaled modes as options. Leave Option B for after the decomp is done.

## User

As far as "Then compile that same C for PC and PS2 on top of a layer that stands in for the GBA hardware. Each player gets their own copy of the game running in the one program. The copies are linked in memory instead of by cable, and each is drawn into its own part of the screen." goes, I think we could eventually simplify this by just having one game instance and four player instances. For example, instead of running 4 different audio instances, we just have 1, using the four screens as audio sources.

- tool `Bash`: grep -rniE "lockstep|deterministic|each gba (runs|simulat)|same scene|inputs? (are|is) (sent|exchanged)" docs README.md CLAUDE.md | cut -c1-250 | head

## Claude

Yes, that's a good end state, and the layered design gets you there. I'd do it as a later step, though, not the starting point.

### What the four GBAs actually do
On real hardware each GBA runs the full game. For the four screens to agree, each one most likely simulates the whole shared world and swaps a little data per frame over the cable (probably mostly button presses). That's the usual way these games work, but I haven't confirmed it for Four Swords. Phase 1 will show it: we'll see exactly what goes over the cable each frame.

If that holds, four instances means the same world being simulated four times. Your version removes the duplication:

```
4 instances (start)                 1 game, 4 players (goal)
┌──────┐┌──────┐┌──────┐┌──────┐    ┌────────────────────────────┐
│world ││world ││world ││world │    │ world (once)               │
│P1 cam││P2 cam││P3 cam││P4 cam│    │ P1..P4: camera, HUD, menus │
│audio ││audio ││audio ││audio │    │ audio (once)               │
└──┬───┘└──┬───┘└──┬───┘└──┬───┘    └───┬──────┬──────┬──────┬───┘
   └──link hub──────────────┘           P1 view P2 view P3 view P4 view
```

The gains are real, and the biggest one is for the PS2: one simulation instead of four, and no link cable timing problems at all.

### Why not start there
- **Splitting the game into shared and per-player parts needs the decomp.** Each GBA keeps state that's only "its own": its camera and scroll, its HUD, the pause and item screens, which sprites it draws, possibly message boxes and which sounds it plays. We can only separate shared state from per-player state once the code is in C and understood. With four instances, none of that has to be known on day one.
- **Four instances can be checked; a merged game can't directly.** Four instances can be compared RAM-for-RAM against four linked mGBAs. A merged game has no GBA equivalent, so the only check is "does it behave like the four-instance build". That makes the four-instance build the reference you merge against.
- **The merge can be done piece by piece, each piece checked against the four-instance build:**
  1. **Audio first, which is easy.** Only one instance's sound gets mixed and output, which the plan already does. To get sounds that only another player's screen triggers, the other instances' sound events can feed the same single mixer, so there's still only one sound engine.
  2. **Rendering:** one PPU pass per view instead of per GBA.
  3. **Simulation last:** the world runs once, and per-player state becomes arrays indexed by player. That's a change to the game code itself, and the point where the port stops being "four GBAs" and becomes a real split-screen port.

### Fit with the layers
- The audio step is layer 2 only.
- The rendering step is layers 2 and 3.
- The simulation step is a layer 1 change. It's a deliberate break from matching the GBA, so it would sit behind a flag like `FS_SHARED_WORLD`, with the four-instance build kept as a fallback and a test.

I'd add this to the planning doc as Phase 5, "single shared world", after the PS2 build runs with four instances. If the PS2 turns out too slow for four full simulations in Phase 4, Phase 5 can move earlier.

## User

Alright, let's get started with the plan

## Claude

Adding Phase 5 to the plan, then starting Phase 1 with the `FS_ONLY` boot option.

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2 && python3 - <<'E' p="docs/Planning Doc.md"; s=open(p).read() s=s.replace("## Open decisions","""## Phase 5: single share

## Claude

Both functions are already in C in [src/game_select.c](src/game_select.c). Reading them:

- tool `Bash`: sed -n 1,80p src/game_select.c; grep -n "sub_08030E0C" -B3 -A25 src/game_select.c | sed -n 1,60p

- tool `Bash`: python3 - <<'E' p="src/game_select.c"; s=open(p).read() s=s.replace("""void sub_0803074C(void) {     u8 i;     u16 *r3; ""","""void sub_08030E0C(void);  void su

## Claude

The `FS_ONLY` build compiles (the `Error 1` is only its expected checksum mismatch), and the normal build still matches. Now testing it in mGBA. Checking what the installed mGBA can do headless:

- tool `Bash`: mgba-qt --help 2>&1 | head -30; mgba-qt --version 2>&1|head -2; which xvfb-run Xvfb; ls ~/Documents/tp-ps2/tools/ps2/offscreen; head -20 ~/Documents/tp-ps2/tool

## Claude

mGBA 0.10's command line can't load a Lua script, which the automated harness needs. Checking whether the mGBA library is installed, so I could write a small headless runner on it instead:

- tool `Bash`: dpkg -l | grep -i mgba; ls /usr/include/mgba* 2>&1 | head; apt-cache policy libmgba-dev 2>/dev/null | head -3; which cmake ninja

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2/reference && git clone -q --depth 1 --branch 0.10.5 https://github.com/mgba-emu/mgba && cd mgba && cmake -S . -B build -G

## Claude

Library built. Now the runner, `tools/mgba_run.c`: it loads the ROM, plays a button script, takes screenshots at chosen frames and prints a trace of the game-mode byte.

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/tools/mgba_run.c

- tool `Write`: /home/alex/Documents/zeldaalttp-ps2/tools/mgba_run.sh

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2 && chmod +x tools/mgba_run.sh && tools/mgba_run.sh 2>&1 | grep -E "error|undefined" | head; ls -la tools/mgba_run && echo

- tool `Bash`: cd /home/alex/Documents/zeldaalttp-ps2 && python3 - <<'E' p="tools/mgba_run.c"; s=open(p).read() s=s.replace("""			FILE *f = fopen(path, "wb"); 			png_structp p

## Claude

Built. First run: the normal ROM, cold boot with an empty save, pressing Start and A alternately, watching the game-mode byte `0x03006D10`:

- tool `Bash`: S=/tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad; mkdir -p $S/run1; python3 -c " for f in range(200,3000,3

## Claude

mGBA's debug log is flooding the output. Silencing it:

- tool `Bash`: python3 - <<'E' p="tools/mgba_run.c"; s=open(p).read() s=s.replace("#include <mgba/core/config.h>\n","#include <mgba/core/config.h>\n#include <mgba/core/log.h>\

## Claude

The trace shows the normal boot: file select (mode 8) at frame 324, "CHOOSE A GAME" (6) at 838, then Link to the Past (13), because the cursor starts on it. Same script on the `FS_ONLY` ROM:

- tool `Bash`: S=/tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad && mkdir -p $S/run2 && tools/mgba_run $S/fs_only.gba 3000

## Claude

With `FS_ONLY` the mode never leaves 0, not even reaching file select. Looking at the screenshot:

- tool `Read`: /tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad/run2/f00900.png

- tool `Bash`: grep -n "sub_0803074C" -B8 -A10 src/main.c | head -40; python3 -c " d=open('baserom.gba','rb').read() i=len(d) while d[i-1]==0xFF: i-=1 print(hex(0x08000000+i))

## Claude

The mode table is C in [src/main.c](src/main.c), and the ROM's data ends at `0x08645BE5`, so I'll put the new code at `0x08700000`.

- tool `Bash`: git checkout src/game_select.c && python3 - <<'E' p="src/main.c"; s=open(p).read() s=s.replace("    sub_0803074C,\n","""#ifdef FS_ONLY     fs_only_choose_game, 

## Claude

Now the trace goes file select → mode 6 for one frame → mode 9 (Four Swords), and the normal build still matches. Checking the screenshots:

- tool `Bash`: cd /tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad && python3 -c " import zlib,struct " ; ls run2; which mo

- tool `Read`: /tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad/run2/f01200.png

- tool `Read`: /tmp/claude-1000/-home-alex-Documents-zeldaalttp-ps2/93b91fe6-ec1b-4c3a-976d-9c1099efa5e9/scratchpad/run2/f02999.png

## Claude

It works: with `FS_ONLY`, picking a file goes straight to the Four Swords title. It then waits at "Linking with other systems…", which is expected with only one GBA. Updating the docs:

- tool `Bash`: python3 - <<'E' p="docs/Planning Doc.md"; s=open(p).read() s=s.replace("""- [ ] `FS_ONLY` build flag (default off, `make compare` still matches): the mode-6 han

## Claude

The first two Phase 1 items are done, and the normal build still matches the original ROM.

**`make FS_ONLY=1` boots straight into Four Swords.** After you pick a file, the game skips "CHOOSE A GAME" and goes to the Four Swords title. With one GBA it then sits at "Linking with other systems…", which is expected.

My first try didn't work. I added an early return to the "CHOOSE A GAME" code, which made it a few bytes longer, and the game crashed to a white screen. Most of the ROM's data is still raw bytes copied from your ROM (`.INCBIN`), and those bytes contain fixed addresses of code. Any code that moves breaks them. So for now code can't grow or move anywhere in the ROM. I've added "make the ROM shiftable" to the Phase 2 list.

The working version leaves all existing code where it is:
- In the table of game-mode handlers ([src/main.c](src/main.c)), the "CHOOSE A GAME" entry now points to a new function.
- That function, in [src/fs_only.c](src/fs_only.c), just calls the game's own "start Four Swords" routine.
- [ldscript.txt](ldscript.txt) places it at `0x08700000`, in the unused space after the ROM's data. Nothing else moves.

**Headless mGBA runner: [tools/mgba_run.c](tools/mgba_run.c).** The Debian mGBA can't load a script from the command line, so I built mGBA 0.10.5 from GitHub as a library in `reference/mgba` and wrote a small runner on it. It takes a button script and can save screenshots, dump RAM and log a memory byte whenever it changes. 3,000 frames run in about 3 seconds. It builds with [tools/mgba_run.sh](tools/mgba_run.sh). The verification runs above used it:

| Build | Game-mode byte, frame by frame |
|---|---|
| Normal | file select (frame 324) → CHOOSE A GAME (838) → A Link to the Past (938) |
| `FS_ONLY` | file select (324) → CHOOSE A GAME (838) → Four Swords (839) |

The planning doc and the walkthrough (Step 3) are updated. Nothing is committed yet.

Next is adding linked instances to the runner, to get two GBAs past the link screen together. After that comes the reachability map that becomes the decomp work queue. Shall I commit this first?

## User

Yes

