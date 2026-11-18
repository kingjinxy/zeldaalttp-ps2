// Headless mGBA runner: 1-4 GBAs on one link cable, a button script per GBA, screenshots and RAM dumps
// at chosen frames. Build: tools/mgba_run.sh. Usage:
//   mgba_run ROM FRAMES [--players N] [--inputs FILE] [--inputsP FILE] [--saveP FILE]
//            [--shot N,N,...] [--out DIR] [--dump N:ADDR:LEN] [--watch ADDR] [--coverage FILE]
// --coverage: write a bitmap of executed ROM halfwords (bit n = address 0x08000000 + 2n, all GBAs combined)
// for tools/reach.py. Same run as without it (same RAM), a little slower.
// --loads FILE: every load from ROM data (>= 0x08137B10), all GBAs: BIOS decompress/copy calls (swi 0x0B,
// 0x0C, 0x11-0x15), DMA transfers, and Thumb CPU loads; plus BIOS copies and DMAs from RAM into palette,
// VRAM or OAM, to follow ROM data that reaches the screen through a RAM buffer. FILE.ramwords: one byte
// per EWRAM then IWRAM word, 1 = read by a 32-bit Thumb load (pointer use of data copied to RAM).
// Also "ent TYPE SUBTYPE 0 CALLER" for each entity registered with sub_08012728 (once per distinct line),
// and "morph OLD NEW 0 0" when an object reaches DoObjectEntity with another subtype than before. Each distinct one once, as
//   KIND SRC DST N CALLER    KIND = swiNN | dma | cpu32 | cpu16 | cpu8; N = units (swi: r2; dma: count
// and width as in the register; cpu: register width); DST is 0 for cpu loads. Same run as without it.
// --trace DIR --trace-list FILE: GBA 0 only. FILE has one hex function address per line; the first
// --trace-max (default 2) calls of each that no interrupt breaks into are written to DIR/ADDR_N.gz:
// registers and all GBA memory at entry, then at return (tools/tr_check, the thumb2c test).
// P is a player number 0-3: --inputs1 a.inputs is GBA 1's script; --inputs is the default for all.
// --saveP FILE: GBA P's EEPROM is loaded from FILE into memory and never written back, so a run can be
// repeated exactly. Without it a GBA starts with an empty EEPROM.
// --start DIR: each GBA P starts from DIR/saveP.sav (EEPROM) and, if present, DIR/stateP.ss (save state).
// --save-states FRAME: at the end of FRAME, write that pair for every GBA to --out DIR.
// --play DIR (built with SDL2, tools/mgba_run.sh): a window to play GBAs 0 and 1 in real time. Writes the
// starting pair (saveP.sav, stateP.ss) to DIR, records each GBA's buttons to DIR/inputsP, and writes the
// final EEPROM to DIR/end_saveP.sav and GBA 0's frame count to DIR/frames. FRAMES is ignored; Esc or
// closing the window stops. Replay with
//   mgba_run ROM N --players 2 --start DIR --inputs0 DIR/inputs0 --inputs1 DIR/inputs1
// Keys: GBA 0: WASD, F=A G=B R=L T=R 1=Start 2=Select. GBA 1: arrows, /=A .=B ;=L '=R Enter=Start
// RShift=Select.
// Inputs file: lines "FRAME KEYS", KEYS = '-' or letters A B s(elect) S(tart) R L U D r(ight) l(eft);
// held from FRAME until the next line. Output files: DIR/pP_fNNNNN.png. Output lines start with "pP ".
//
// GBAs are linked with mGBA's lockstep SIO driver; the host callbacks are a C port of
// src/platform/qt/MultiplayerController.cpp (mGBA 0.10.5). mgba-qt runs each GBA on its own thread, which
// makes linked runs differ from run to run (tested: different RAM after 6,000 frames every time). Here
// all GBAs run on one thread in a fixed order, one core->runLoop (up to the next hardware event) each,
// skipping GBAs that the link has put to wait, so a run always gives the same result.
#include <zlib.h>
#include <mgba/core/core.h>
#include <mgba/core/config.h>
#include <mgba/core/log.h>
#include <mgba/gba/core.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/arm/isa-inlines.h>
#include <mgba/internal/gba/gba.h>
#include <mgba/internal/gba/input.h>
#include <mgba/internal/gba/sio/lockstep.h>
#include <mgba-util/png-io.h>
#include <mgba-util/vfs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef MGBA_RUN_SDL
#include <SDL.h>
#endif

#define MAX_LINES 4096

struct Script {
	unsigned frame[MAX_LINES];
	int keys[MAX_LINES];
	int n;
};

struct Player {
	struct mCore *core;
	struct mCoreCallbacks callbacks;
	struct GBASIOLockstepNode node;
	color_t *pixels;
	unsigned w, h;
	struct Script *script;
	int line, keys, last;
	unsigned frame;
	int done;
	// Lockstep host state (MultiplayerController::Player); waiting = the thread's "wait" state in mgba-qt
	int waiting;
	int awake;
	int32_t cyclesPosted;
	unsigned waitMask;
};

static struct Player players[MAX_GBAS];
static int nplayers = 1;
static struct GBASIOLockstep lockstep;

static const char *shots, *outDir = ".";
static const char *dumps[64];
static int ndumps;
static unsigned frames, watch;
static const char *coverage;
static const char *play;            // --play DIR
static const char *start;           // --start DIR
static unsigned saveStates = ~0u;   // --save-states FRAME
static int liveKeys[MAX_GBAS];      // --play: keys from the keyboard
static FILE *rec[MAX_GBAS];         // --play: recorded inputs
static int frameReady;              // --play: GBA 0 finished a frame
static uint8_t covered[0x800000 / 16];
static FILE *loads;                 // --loads FILE
static const char *loadsPath;
static uint8_t ramWord[0x48000 / 4];  // --loads: EWRAM (0x40000) and IWRAM words read by a 32-bit CPU load
static uint32_t dmaSeen[MAX_GBAS][4][3];  // last logged source, dest, control per DMA channel
static uint64_t loadSet[1 << 20];   // hashes of logged loads (open addressing; 0 = empty)
static uint16_t lastSubtype[0x10000];  // per entity address: subtype last seen | 0x100

#define ROM_DATA 0x08137B10u
// Log one load unless the same (kind, src, dst, n, caller) was logged before
static void logLoad(const char *kind, uint32_t src, uint32_t dst, uint32_t n, uint32_t caller) {
	uint64_t h = 1469598103934665603ull;
	for (const char *c = kind; *c; c++) h = (h ^ (uint8_t) *c) * 1099511628211ull;
	uint32_t v[4] = { src, dst, n, caller };
	for (int i = 0; i < 4; i++) h = (h ^ v[i]) * 1099511628211ull;
	h |= 1;
	for (uint32_t i = (uint32_t) h & ((1 << 20) - 1);; i = (i + 1) & ((1 << 20) - 1)) {
		if (loadSet[i] == h) return;
		if (!loadSet[i]) { loadSet[i] = h; break; }
	}
	fprintf(loads, "%s %08X %08X %X %08X\n", kind, src, dst, n, caller);
}

// Before an instruction runs: a BIOS call that reads its source from ROM data, or a Thumb load from it
static void loadsBefore(struct mCore *core, struct ARMCore *cpu) {
	if (cpu->executionMode != MODE_THUMB) return;
	uint32_t pc = cpu->gprs[ARM_PC] - 2;
	if (pc >> 24 != 8) return;
	uint16_t op = core->busRead16(core, pc);
	uint32_t *r = (uint32_t *) cpu->gprs;
	if (pc == 0x08012728) {  // entity registration (type, entity): type and subtype are set by now
		logLoad("ent", core->busRead8(core, r[1] + 8), core->busRead8(core, r[1] + 9), 0, r[14] - 1);
		lastSubtype[(r[1] >> 2) & 0xFFFF] = core->busRead8(core, r[1] + 9) | 0x100;
	}
	if (pc == 0x0804C170) {  // DoObjectEntity: an object whose subtype changed since it was registered
		uint16_t *last = &lastSubtype[(r[0] >> 2) & 0xFFFF];
		int st = core->busRead8(core, r[0] + 9);
		if (*last && (*last & 0xFF) != st) logLoad("morph", *last & 0xFF, st, 0, 0);
		*last = st | 0x100;
	}
	if ((op & 0xFF00) == 0xDF00) {
		int n = op & 0xFF;
		// From ROM data, or from RAM into palette/VRAM/OAM (a RAM buffer the game sends to the screen)
		int fromRam = (r[0] >> 24 == 2 || r[0] >> 24 == 3) && r[1] >> 24 >= 5 && r[1] >> 24 <= 7;
		if ((n == 0x0B || n == 0x0C || (n >= 0x11 && n <= 0x15)) && ((r[0] >= ROM_DATA && r[0] >> 24 < 0x0A) || fromRam)) {
			char k[8];
			snprintf(k, sizeof k, "swi%02X", n);
			logLoad(k, r[0], r[1], n <= 0x0C ? r[2] : 0, r[14]);
		}
		return;
	}
	uint32_t a = 0; const char *k = NULL;
	if ((op & 0xF800) == 0x6800) a = r[op >> 3 & 7] + (op >> 6 & 31) * 4, k = "cpu32";       // ldr [rb, #imm]
	else if ((op & 0xF800) == 0x7800) a = r[op >> 3 & 7] + (op >> 6 & 31), k = "cpu8";        // ldrb [rb, #imm]
	else if ((op & 0xF800) == 0x8800) a = r[op >> 3 & 7] + (op >> 6 & 31) * 2, k = "cpu16";   // ldrh [rb, #imm]
	else if ((op & 0xF200) == 0x5000 && (op & 0x0800)) {                                       // load [rb, ro]
		a = r[op >> 3 & 7] + r[op >> 6 & 7];
		int o = op >> 9 & 7;  // 4 ldr, 5 ldrh, 6 ldrb, 7 ldsh; 3 is ldsb (0x5600)
		k = o == 4 ? "cpu32" : o == 6 || o == 3 ? "cpu8" : "cpu16";
	} else if ((op & 0xFE00) == 0x5600) a = r[op >> 3 & 7] + r[op >> 6 & 7], k = "cpu8";      // ldsb [rb, ro]
	else if ((op & 0xFA00) == 0x5A00) a = r[op >> 3 & 7] + r[op >> 6 & 7], k = "cpu16";      // ldrh/ldsh [rb, ro]
	else if ((op & 0xF800) == 0xC800 && (op & 0xFF)) a = r[op >> 8 & 7], k = "cpu32";         // ldmia (first word)
	if (k && k[3] == '3' && (a >> 24 == 2 || a >> 24 == 3)) {  // 32-bit reads from RAM, for RAM copies of ROM data
		uint32_t o = a >> 24 == 2 ? (a & 0x3FFFF) : 0x40000 + (a & 0x7FFF);
		int words = (op & 0xF800) == 0xC800 ? __builtin_popcount(op & 0xFF) : 1;
		for (int w = 0; w < words && (o >> 2) + w < sizeof ramWord; w++) ramWord[(o >> 2) + w] = 1;
	}
	if (k && a >= ROM_DATA && a >> 24 < 0x0A) {
		if ((op & 0xF800) == 0xC800)  // every word of an ldmia
			for (int b = 0; b < 8; b++) { if (op >> b & 1) { logLoad(k, a, 0, 4, pc); a += 4; } }
		else
			logLoad(k, a, 0, k[3] == '3' ? 4 : k[3] == '1' ? 2 : 1, pc);
	}
}

// After an instruction: a DMA channel set up for a new transfer from ROM data (or from RAM to the screen)
static void loadsAfter(int id, struct GBA *gba) {
	for (int ch = 0; ch < 4; ch++) {
		struct GBADMA *d = &gba->memory.dma[ch];
		uint32_t *seen = dmaSeen[id][ch];
		// An immediate DMA starts and ends within one step, so the enable bit is rarely seen set: a new
		// transfer shows as new source/dest/control registers (the game writes them before each one).
		uint32_t ctl = GBADMARegisterClearEnable(d->reg) | 0x10000;
		if (seen[0] == d->source && seen[1] == d->dest && seen[2] == ctl) continue;
		seen[0] = d->source, seen[1] = d->dest, seen[2] = ctl;
		int fromRam = (d->source >> 24 == 2 || d->source >> 24 == 3) && d->dest >> 24 >= 5 && d->dest >> 24 <= 7;
		if ((d->source >= ROM_DATA && d->source >> 24 < 0x0A) || fromRam)
			logLoad("dma", d->source, d->dest, (uint32_t) d->count | (uint32_t) d->reg << 16, gba->cpu->gprs[ARM_LR]);
	}
}
static const char *traceDir, *traceList;
static unsigned traceMax = 2;
static uint8_t traceCount[0x800000 / 2];  // per halfword of ROM: 0 = not traced, else 1 + calls written

static void quietLog(struct mLogger *l, int category, enum mLogLevel level, const char *fmt, va_list args) {
	(void) l; (void) category; (void) level; (void) fmt; (void) args;
}
static struct mLogger quiet = { .log = quietLog };

static int keyBits(const char *s) {
	int k = 0;
	for (; *s; s++) {
		switch (*s) {
		case 'A': k |= 1 << GBA_KEY_A; break;
		case 'B': k |= 1 << GBA_KEY_B; break;
		case 's': k |= 1 << GBA_KEY_SELECT; break;
		case 'S': k |= 1 << GBA_KEY_START; break;
		case 'r': k |= 1 << GBA_KEY_RIGHT; break;
		case 'l': k |= 1 << GBA_KEY_LEFT; break;
		case 'U': k |= 1 << GBA_KEY_UP; break;
		case 'D': k |= 1 << GBA_KEY_DOWN; break;
		case 'R': k |= 1 << GBA_KEY_R; break;
		case 'L': k |= 1 << GBA_KEY_L; break;
		case '-': break;
		default: fprintf(stderr, "bad key '%c'\n", *s); exit(1);
		}
	}
	return k;
}

static struct Script *loadScript(const char *path) {
	struct Script *s = calloc(1, sizeof *s);
	FILE *f = fopen(path, "r");
	if (!f) { perror(path); exit(1); }
	char buf[256], keys[64];
	while (fgets(buf, sizeof buf, f) && s->n < MAX_LINES) {
		if (buf[0] == '#' || sscanf(buf, "%u %63s", &s->frame[s->n], keys) != 2) continue;
		s->keys[s->n++] = keyBits(keys);
	}
	fclose(f);
	return s;
}

static const char *keyString(int k) {
	static char buf[16];
	static const struct { int bit; char c; } map[] = {
		{ GBA_KEY_A, 'A' }, { GBA_KEY_B, 'B' }, { GBA_KEY_SELECT, 's' }, { GBA_KEY_START, 'S' },
		{ GBA_KEY_RIGHT, 'r' }, { GBA_KEY_LEFT, 'l' }, { GBA_KEY_UP, 'U' }, { GBA_KEY_DOWN, 'D' },
		{ GBA_KEY_R, 'R' }, { GBA_KEY_L, 'L' },
	};
	char *o = buf;
	for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++)
		if (k & (1 << map[i].bit)) *o++ = map[i].c;
	if (o == buf) *o++ = '-';
	*o = 0;
	return buf;
}

static void *readFile(const char *path, size_t *size) {
	FILE *f = fopen(path, "rb");
	if (!f) { perror(path); exit(1); }
	fseek(f, 0, SEEK_END);
	*size = ftell(f);
	fseek(f, 0, SEEK_SET);
	void *data = malloc(*size ? *size : 1);
	if (*size && fread(data, *size, 1, f) != 1) { perror(path); exit(1); }
	fclose(f);
	return data;
}

static void writeFile(const char *path, const void *data, size_t size) {
	FILE *f = fopen(path, "wb");
	if (!f || (size && fwrite(data, size, 1, f) != 1) || fclose(f)) { perror(path); exit(1); }
}

static int inList(const char *list, unsigned n) {
	for (const char *p = list; p && *p;) {
		if ((unsigned) strtoul(p, (char **) &p, 0) == n) return 1;
		if (*p == ',') p++;
	}
	return 0;
}

// --- Lockstep host callbacks: MultiplayerController.cpp without setSync (no audio/video sync here) and
// without locks (one thread). mCoreThreadWaitFromThread / mCoreThreadStopWaiting set and clear `waiting`. ---

static bool lsSignal(struct mLockstep *l, unsigned mask) {
	(void) l;
	struct Player *p = &players[0];
	p->waitMask &= ~mask;
	if (!p->waitMask && p->awake < 1) {
		p->waiting = 0;
		p->awake = 1;
		return true;
	}
	return false;
}

static bool lsWait(struct mLockstep *l, unsigned mask) {
	(void) l;
	struct Player *p = &players[0];
	p->waitMask |= mask;
	if (p->awake > 0) {
		p->waiting = 1;
		p->awake = 0;
		return true;
	}
	return false;
}

static void lsAddCycles(struct mLockstep *l, int id, int32_t cycles) {
	(void) l;
	if (cycles < 0) abort();
	if (id) {
		players[id].cyclesPosted += cycles;
		return;
	}
	for (int i = 1; i < nplayers; i++) {
		struct Player *p = &players[i];
		if (p->node.d.p->mode > SIO_MULTI) continue;
		p->cyclesPosted += cycles;
		if (p->awake < 1) p->node.nextEvent += p->cyclesPosted;
		p->waiting = 0;
		p->awake = 1;
	}
}

static int32_t lsUseCycles(struct mLockstep *l, int id, int32_t cycles) {
	(void) l;
	struct Player *p = &players[id];
	p->cyclesPosted -= cycles;
	if (p->cyclesPosted <= 0) {
		p->waiting = 1;
		p->awake = 0;
	}
	return p->cyclesPosted;
}

static int32_t lsUnusedCycles(struct mLockstep *l, int id) { (void) l; return players[id].cyclesPosted; }

static void lsUnload(struct mLockstep *l, int id) {
	(void) l;
	if (id) {
		players[id].cyclesPosted = 0;
		struct Player *p = &players[0];
		p->waitMask &= ~(1u << id);
		if (!p->waitMask && p->awake < 1) {
			p->waiting = 0;
			p->awake = 1;
		}
		return;
	}
	for (int i = 1; i < nplayers; i++) {
		struct Player *p = &players[i];
		p->cyclesPosted += lockstep.players[0]->eventDiff;
		if (p->awake < 1) p->node.nextEvent += p->cyclesPosted;
		p->waiting = 0;
		p->awake = 1;
	}
}

// --- Per-frame work (videoFrameEnded) ---

static void onFrame(void *context) {
	struct Player *p = context;
	int id = p - players;
	struct mCore *core = p->core;
	unsigned frame = p->frame++;
	if (frame >= frames) { p->done = 1; return; }

	if (watch) {
		int v = core->busRead8(core, watch);
		if (v != p->last) {
			printf("p%d frame %u: [0x%08X] = %d\n", id, frame, watch, v);
			p->last = v;
		}
	}
	if (frame == saveStates) {
		char path[512];
		size_t size = core->stateSize(core);
		void *data = malloc(size);
		if (!core->saveState(core, data)) { fprintf(stderr, "cannot save state %d\n", id); exit(1); }
		snprintf(path, sizeof path, "%s/state%d.ss", outDir, id);
		writeFile(path, data, size);
		free(data);
		data = NULL;
		size = core->savedataClone(core, &data);
		snprintf(path, sizeof path, "%s/save%d.sav", outDir, id);
		writeFile(path, data, size);
		free(data);
	}
	if (inList(shots, frame)) {
		char path[512];
		snprintf(path, sizeof path, "%s/p%d_f%05u.png", outDir, id, frame);
		struct VFile *f = VFileOpen(path, O_CREAT | O_TRUNC | O_WRONLY);
		png_structp png = PNGWriteOpen(f);
		png_infop info = PNGWriteHeader(png, p->w, p->h);
		PNGWritePixels(png, p->w, p->h, p->w, p->pixels);
		PNGWriteClose(png, info);
		f->close(f);
	}
	for (int d = 0; d < ndumps; d++) {
		char *s;
		if (strtoul(dumps[d], &s, 0) != frame) continue;
		unsigned addr = strtoul(s + 1, &s, 0), len = strtoul(s + 1, NULL, 0);
		printf("p%d frame %u: dump 0x%08X:", id, frame, addr);
		for (unsigned i = 0; i < len; i++) printf("%s%02X", i % 16 ? " " : "\n  ", core->busRead8(core, addr + i));
		printf("\n");
	}
	// Keys for the next frame
	if (play) {
		if (id == 0) frameReady = 1;
		if (id < 2 && (liveKeys[id] != p->keys || frame == 0)) {
			p->keys = liveKeys[id];
			fprintf(rec[id], "%u %s\n", frame + 1, keyString(p->keys));
		}
	} else {
		struct Script *s = p->script;
		while (s && p->line < s->n && s->frame[p->line] <= frame + 1) p->keys = s->keys[p->line++];
	}
	core->setKeys(core, p->keys);
}

#ifdef MGBA_RUN_SDL
// --play: show both GBAs, read the keyboard, keep real-time speed (59.7275 fps). Returns 0 to stop.
static int present(SDL_Renderer *ren, SDL_Texture **tex) {
	static Uint64 next;
	SDL_Event e;
	while (SDL_PollEvent(&e))
		if (e.type == SDL_QUIT || (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE)) return 0;
	const Uint8 *k = SDL_GetKeyboardState(NULL);
	static const SDL_Scancode map[2][10] = {
		// A, B, Select, Start, Right, Left, Up, Down, R, L (GBA_KEY_* order)
		{ SDL_SCANCODE_F, SDL_SCANCODE_G, SDL_SCANCODE_2, SDL_SCANCODE_1, SDL_SCANCODE_D, SDL_SCANCODE_A,
		  SDL_SCANCODE_W, SDL_SCANCODE_S, SDL_SCANCODE_T, SDL_SCANCODE_R },
		{ SDL_SCANCODE_SLASH, SDL_SCANCODE_PERIOD, SDL_SCANCODE_RSHIFT, SDL_SCANCODE_RETURN, SDL_SCANCODE_RIGHT,
		  SDL_SCANCODE_LEFT, SDL_SCANCODE_UP, SDL_SCANCODE_DOWN, SDL_SCANCODE_APOSTROPHE, SDL_SCANCODE_SEMICOLON },
	};
	for (int i = 0; i < 2; i++) {
		int bits = 0;
		for (int b = 0; b < 10; b++)
			if (k[map[i][b]]) bits |= 1 << b;
		liveKeys[i] = bits;
		SDL_UpdateTexture(tex[i], NULL, players[i].pixels, players[i].w * sizeof(color_t));
	}
	SDL_RenderClear(ren);
	for (int i = 0; i < 2; i++) {
		SDL_Rect r = { i * 240, 0, 240, 160 };
		SDL_RenderCopy(ren, tex[i], NULL, &r);
	}
	SDL_RenderPresent(ren);
	Uint64 freq = SDL_GetPerformanceFrequency(), now = SDL_GetPerformanceCounter();
	if (!next) next = now;
	next += freq * 10000 / 597275;
	if (next > now) SDL_Delay((Uint32) ((next - now) * 1000 / freq));
	else next = now;  // behind: don't try to catch up
	return 1;
}
#endif

// --trace: one capture at a time
static struct { int active, broken; unsigned steps; uint32_t addr, lr, sp; gzFile f; char path[600]; } tr;

static void traceMemory(struct GBA *gba, gzFile f) {
	gzwrite(f, gba->memory.wram, 0x40000);
	gzwrite(f, gba->memory.iwram, 0x8000);
	gzwrite(f, gba->memory.io, 0x400);
	gzwrite(f, gba->video.palette, 0x400);
	gzwrite(f, gba->video.vram, 0x18000);
	gzwrite(f, gba->video.oam.raw, 0x400);
}

static void traceRegs(struct ARMCore *cpu, gzFile f) {
	uint32_t r[17];
	for (int k = 0; k < 16; k++) r[k] = cpu->gprs[k];
	r[16] = cpu->cpsr.packed;
	gzwrite(f, r, sizeof r);
}

static void traceStep(struct GBA *gba, struct ARMCore *cpu) {
	int thumb = cpu->executionMode == MODE_THUMB;
	uint32_t pc = cpu->gprs[ARM_PC] - (thumb ? 2 : 4);
	if (tr.active) {
		if (cpu->cpsr.priv != MODE_SYSTEM && cpu->cpsr.priv != MODE_USER || ++tr.steps > 2000000) {
			// interrupted or too long (a loop that never returns): drop it so other calls get traced
			gzclose(tr.f);
			remove(tr.path);
			tr.active = 0;
		} else if (pc == (tr.lr & ~1u) && cpu->gprs[ARM_SP] == tr.sp) {
			traceRegs(cpu, tr.f);
			traceMemory(gba, tr.f);
			gzclose(tr.f);
			tr.active = 0;
			if (tr.broken) remove(tr.path);
			else traceCount[(tr.addr - 0x08000000) >> 1]++;
		}
		return;
	}
	static uint32_t prevPc;
	uint32_t prev = prevPc;
	prevPc = pc;
	if (!thumb || pc - 0x08000000 >= 0x800000) return;
	uint8_t c = traceCount[(pc - 0x08000000) >> 1];
	if (!c || c > traceMax) return;
	// only calls: a BL just before (lr = the next instruction) or a bx (the _call_via_rN veneers);
	// entry points inside functions are also reached by plain branches
	uint16_t prevInsn = GBAView16(cpu, prev);
	if (!((cpu->gprs[ARM_LR] & ~1u) == prev + 2 && (prevInsn & 0xF800) == 0xF800) && (prevInsn & 0xFF80) != 0x4700)
		return;
	if ((cpu->gprs[ARM_LR] & ~1u) == pc) return;  // a bx lr returning into a continuation, not a call
	if (cpu->cpsr.priv != MODE_SYSTEM && cpu->cpsr.priv != MODE_USER) return;
	snprintf(tr.path, sizeof tr.path, "%s/%08X_%u.gz", traceDir, pc, c - 1);
	tr.f = gzopen(tr.path, "wb1");
	if (!tr.f) { perror(tr.path); exit(1); }
	tr.active = 1, tr.broken = 0, tr.steps = 0, tr.addr = pc, tr.lr = cpu->gprs[ARM_LR], tr.sp = cpu->gprs[ARM_SP];
	traceRegs(cpu, tr.f);
	traceMemory(gba, tr.f);
}

// --replay ROM MAP TRACE.gz...: check a build whose code moved (NONMATCHING C) against calls recorded by
// --trace on the original ROM. MAP has lines "OLD NEW" (function addresses, Thumb bit as in pointers):
// each call's entry state is loaded (RAM, IWRAM, palette, VRAM, OAM; function pointers in RAM mapped to
// the new code), the function runs at its new address with IRQs masked until it returns to the recorded
// caller with the same sp, and r0, r4-r11, sp and memory are compared with the recorded exit (I/O and the
// stack below the entry sp are excluded; pointers mapped back). One line per call: "OLD ok|FAIL ...".
static uint32_t *mapOld, *mapNew; static int mapN;
static uint32_t mapAddr(uint32_t v, int toNew) {
	int lo = 0, hi = mapN - 1; uint32_t *k = toNew ? mapOld : mapNew, *r = toNew ? mapNew : mapOld;
	while (lo <= hi) { int m = (lo + hi) / 2; if (k[m] == v) return r[m]; if (k[m] < v) lo = m + 1; else hi = m - 1; }
	return v;
}
static void mapWords(uint8_t *mem, size_t n, int toNew) {
	for (size_t i = 0; i + 4 <= n; i += 4) {
		uint32_t v; memcpy(&v, mem + i, 4);
		if ((v >> 24) == 0x08) { uint32_t w = mapAddr(v, toNew); memcpy(mem + i, &w, 4); }
	}
}
static int replay(int argc, char **argv) {
	const char *rom = argv[2];
	FILE *mf = fopen(argv[3], "r");
	if (!mf) { perror(argv[3]); return 1; }
	uint32_t a, b; int cap = 0;
	// two sorted copies: by old (for toNew) and by new (for back)
	uint32_t (*pairs)[2] = NULL;
	while (fscanf(mf, "%x %x", &a, &b) == 2) {
		if (mapN == cap) pairs = realloc(pairs, (cap = cap ? cap * 2 : 4096) * sizeof *pairs);
		pairs[mapN][0] = a, pairs[mapN][1] = b, mapN++;
	}
	fclose(mf);
	int cmp0(const void *x, const void *y) { uint32_t p = ((uint32_t *) x)[0], q = ((uint32_t *) y)[0]; return p < q ? -1 : p > q; }
	int cmp1(const void *x, const void *y) { uint32_t p = ((uint32_t *) x)[1], q = ((uint32_t *) y)[1]; return p < q ? -1 : p > q; }
	mapOld = malloc(mapN * 4), mapNew = malloc(mapN * 4);
	uint32_t *backOld = malloc(mapN * 4), *backNew = malloc(mapN * 4);
	qsort(pairs, mapN, sizeof *pairs, cmp0);
	for (int i = 0; i < mapN; i++) mapOld[i] = pairs[i][0], mapNew[i] = pairs[i][1];
	qsort(pairs, mapN, sizeof *pairs, cmp1);
	for (int i = 0; i < mapN; i++) backOld[i] = pairs[i][0], backNew[i] = pairs[i][1];

	static struct mLogFilter quietFilter;
	mLogFilterInit(&quietFilter);
	quiet.filter = &quietFilter;
	mLogSetDefaultLogger(&quiet);
	struct mCore *core = GBACoreCreate();
	core->init(core);
	mCoreInitConfig(core, NULL);
	unsigned w, h; core->desiredVideoDimensions(core, &w, &h);
	color_t *pixels = calloc(w * h, sizeof(color_t));
	core->setVideoBuffer(core, pixels, w);
	if (!mCoreLoadFile(core, rom)) { fprintf(stderr, "cannot load %s\n", rom); return 1; }
	core->reset(core);
	struct GBA *gba = core->board;
	struct ARMCore *cpu = gba->cpu;
	static uint8_t ewram[0x40000], iwram[0x8000], io[0x400], pal[0x400], vram[0x18000], oam[0x400];
	int ok = 0, fail = 0, skip = 0;
	for (int t = 4; t < argc; t++) {
		gzFile f = gzopen(argv[t], "rb");
		uint32_t r0[17], r1[17];
		if (!f || gzread(f, r0, sizeof r0) != sizeof r0) { printf("%s SKIP unreadable\n", argv[t]); skip++; continue; }
		gzread(f, gba->memory.wram, 0x40000); gzread(f, gba->memory.iwram, 0x8000); gzread(f, io, 0x400);
		gzread(f, gba->video.palette, 0x400); gzread(f, gba->video.vram, 0x18000); gzread(f, gba->video.oam.raw, 0x400);
		int full = gzread(f, r1, sizeof r1) == sizeof r1;
		full = full && gzread(f, ewram, sizeof ewram) == sizeof ewram && gzread(f, iwram, sizeof iwram) == sizeof iwram
		       && gzread(f, io, sizeof io) == sizeof io && gzread(f, pal, sizeof pal) == sizeof pal
		       && gzread(f, vram, sizeof vram) == sizeof vram && gzread(f, oam, sizeof oam) == sizeof oam;
		gzclose(f);
		if (!full) { printf("%s SKIP no exit record\n", argv[t]); skip++; continue; }
		uint32_t oldPc = r0[15] - 2 + 0;  // recorded at entry: gprs[PC] is the pipeline value (+2 in Thumb)
		oldPc = r0[15] - 2;
		mapWords((uint8_t *) gba->memory.wram, 0x40000, 1);
		mapWords((uint8_t *) gba->memory.iwram, 0x8000, 1);
		uint32_t newPc = mapAddr(oldPc | 1, 1) & ~1u;
		if (newPc == oldPc && mapAddr(oldPc | 1, 1) == (oldPc | 1)) {
			// not in the map: same address in both builds only if nothing moved there; report it
		}
		ARMSetPrivilegeMode(cpu, (enum PrivilegeMode) (r0[16] & 0x1F));  // a hung replay can leave another mode banked in
		cpu->cpsr.t = (r0[16] >> 5) & 1;
		for (int k = 0; k < 15; k++) cpu->gprs[k] = (r0[k] >> 24) == 0x08 && k != 14 ? mapAddr(r0[k], 1) : r0[k];
		cpu->gprs[ARM_LR] = r0[14];  // the old caller's address: we stop there before executing it
		cpu->cpsr.packed = r0[16] | 0x80;  // IRQs masked
		cpu->gprs[ARM_PC] = newPc;

		_ARMSetMode(cpu, MODE_THUMB);
		ARMSetPrivilegeMode(cpu, cpu->cpsr.priv);
		ThumbWritePC(cpu);
		uint32_t sp0 = r0[13];
		unsigned steps = 0; int done = 0;
		while (steps++ < 5000000) {
			uint32_t pc = cpu->gprs[ARM_PC] - (cpu->executionMode == MODE_THUMB ? 2 : 4);
			if (pc == (r0[14] & ~1u) && cpu->gprs[ARM_SP] == sp0) { done = 1; break; }
			core->step(core);
		}
		const char *name = strrchr(argv[t], '/') ? strrchr(argv[t], '/') + 1 : argv[t];
		if (!done) {  // gs.h's gs_bad stores the address it couldn't run at 0x0203C0F0
			uint32_t bad[2]; memcpy(bad, (uint8_t *) gba->memory.wram + 0x3C0F0, 8);
			printf("%s FAIL did not return (pc %08X%s, gs_bad %08X lr %08X)\n", name, cpu->gprs[15], cpu->cpsr.t ? " thumb" : " arm", bad[0], bad[1]); fail++;
			if (getenv("GS_RING")) {  // the last GS function entries (include/gs.h GS_TRACE)
				uint32_t ring[1 + 192]; memcpy(ring, (uint8_t *) gba->memory.wram + 0x3C200, sizeof ring);
				for (int q = 0; q < 64; q++) { int k = (ring[0] + q) % 64;
					if (ring[1 + 3 * k]) printf("  gs %08X sp %08X lr %08X\n", ring[1 + 3 * k], ring[2 + 3 * k], ring[3 + 3 * k]); }
			}
			continue;
		}
		mapWords((uint8_t *) gba->memory.wram, 0x40000, 0);
		mapWords((uint8_t *) gba->memory.iwram, 0x8000, 0);
		char why[200] = "";
		uint32_t got0 = (cpu->gprs[0] >> 24) == 0x08 ? mapAddr(cpu->gprs[0], 0) : cpu->gprs[0];
		// a code address that moved (a return address, a pointer inside a function) can't be mapped exactly:
		// two different values that are both ROM code addresses count as equal
// (NONMATCHING builds also put code after the data, from 0x08800000)
#define CODEADDR(v) (((v) >= 0x08000000 && (v) < 0x08137B04) || ((v) >= 0x08800000 && (v) < 0x0A000000))
		// r0 equal to the return address: a void function's `pop {r0}; bx r0` epilogue, nothing returned
		int voidRet = (r1[0] | 1) == (r0[14] | 1);
		if (!voidRet && got0 != r1[0] && !(CODEADDR(got0) && CODEADDR(r1[0])))
			snprintf(why, sizeof why, "r0 %08X expected %08X", got0, r1[0]);
		for (int k = 4; k <= 11 && !*why; k++)
			if (cpu->gprs[k] != r1[k] && !((r1[k] >> 24) == 0x08)) snprintf(why, sizeof why, "r%d %08X expected %08X", k, cpu->gprs[k], r1[k]);
		struct { const char *n; uint32_t base; uint8_t *got, *exp; size_t len; } m[] = {
			{ "ewram", 0x02000000, (uint8_t *) gba->memory.wram, ewram, 0x40000 }, { "iwram", 0x03000000, (uint8_t *) gba->memory.iwram, iwram, 0x8000 },
			{ "pal", 0x05000000, (uint8_t *) gba->video.palette, pal, 0x400 }, { "vram", 0x06000000, (uint8_t *) gba->video.vram, vram, 0x18000 },
			{ "oam", 0x07000000, (uint8_t *) gba->video.oam.raw, oam, 0x400 } };
		for (int k = 0; k < 5 && !*why; k++)
			for (size_t i = 0; i < m[k].len; i++) {
				uint32_t addr = m[k].base + i;
				if (addr >= sp0 - 0x1000 && addr < sp0) continue;  // the callee's stack frame
				if (addr >= 0x0203C000 && addr < 0x02040000) continue;  // gs2c's CPU state and stack (include/gs.h)
				if (m[k].got[i] != m[k].exp[i]) {
					size_t w = i & ~3u;
					uint32_t gv, ev;
					memcpy(&gv, m[k].got + w, 4), memcpy(&ev, m[k].exp + w, 4);
					if (CODEADDR(gv) && CODEADDR(ev)) { i = w + 3; continue; }
					snprintf(why, sizeof why, "%s %08X = %02X expected %02X (word %08X expected %08X)", m[k].n, addr, m[k].got[i], m[k].exp[i], gv, ev);
					break;
				}
			}
		if (*why) { printf("%s FAIL %s\n", name, why); fail++; } else { printf("%s ok\n", name); ok++; }
	}
	printf("%d ok, %d fail, %d skipped\n", ok, fail, skip);
	(void) backOld, (void) backNew;
	return fail != 0;
}

int main(int argc, char **argv) {
	if (argc > 4 && !strcmp(argv[1], "--replay")) return replay(argc, argv);
	if (argc < 3) { fprintf(stderr, "usage: see tools/mgba_run.c\n"); return 1; }
	const char *rom = argv[1], *saves[MAX_GBAS] = { 0 };
	struct Script *defaultScript = NULL, *scripts[MAX_GBAS] = { 0 };
	frames = strtoul(argv[2], NULL, 0);
	for (int i = 3; i + 1 < argc; i += 2) {
		const char *o = argv[i], *v = argv[i + 1];
		if (!strcmp(o, "--players")) nplayers = atoi(v);
		else if (!strcmp(o, "--inputs")) defaultScript = loadScript(v);
		else if (!strncmp(o, "--inputs", 8) && o[8] >= '0' && o[8] <= '3' && !o[9]) scripts[o[8] - '0'] = loadScript(v);
		else if (!strncmp(o, "--save", 6) && o[6] >= '0' && o[6] <= '3' && !o[7]) saves[o[6] - '0'] = v;
		else if (!strcmp(o, "--shot")) shots = v;
		else if (!strcmp(o, "--out")) outDir = v;
		else if (!strcmp(o, "--dump") && ndumps < 64) dumps[ndumps++] = v;
		else if (!strcmp(o, "--watch")) watch = strtoul(v, NULL, 0);
		else if (!strcmp(o, "--coverage")) coverage = v;
		else if (!strcmp(o, "--loads")) { loadsPath = v; if (!(loads = fopen(v, "w"))) { perror(v); return 1; } }
		else if (!strcmp(o, "--play")) play = v;
		else if (!strcmp(o, "--start")) start = v;
		else if (!strcmp(o, "--save-states")) saveStates = strtoul(v, NULL, 0);
		else if (!strcmp(o, "--trace")) traceDir = v;
		else if (!strcmp(o, "--trace-list")) traceList = v;
		else if (!strcmp(o, "--trace-max")) traceMax = strtoul(v, NULL, 0);
		else { fprintf(stderr, "unknown option %s\n", o); return 1; }
	}
	if (traceList) {
		FILE *f = fopen(traceList, "r");
		unsigned a;
		if (!f) { perror(traceList); return 1; }
		while (fscanf(f, "%x", &a) == 1)
			if (a - 0x08000000 < 0x800000) traceCount[(a - 0x08000000) >> 1] = 1;
		fclose(f);
	}
	if (nplayers < 1 || nplayers > MAX_GBAS) { fprintf(stderr, "--players 1-4\n"); return 1; }
#ifdef MGBA_RUN_SDL
	SDL_Window *win = NULL;
	SDL_Renderer *ren = NULL;
	SDL_Texture *tex[2] = { 0 };
	if (play) {
		if (nplayers < 2) nplayers = 2;
		frames = ~0u;
		char path[512];
		for (int i = 0; i < 2; i++) {
			snprintf(path, sizeof path, "%s/inputs%d", play, i);
			if (!(rec[i] = fopen(path, "w"))) { perror(path); return 1; }
			setvbuf(rec[i], NULL, _IOLBF, 0);
		}
		if (SDL_Init(SDL_INIT_VIDEO)) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
		win = SDL_CreateWindow("mgba_run: GBA 1 (WASD) | GBA 2 (arrows)", SDL_WINDOWPOS_CENTERED,
		                       SDL_WINDOWPOS_CENTERED, 240 * 2 * 2, 160 * 2, SDL_WINDOW_RESIZABLE);
		ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
		if (!ren) ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);
		if (!win || !ren) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
		SDL_RenderSetLogicalSize(ren, 480, 160);
		for (int i = 0; i < 2; i++)
			tex[i] = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, 240, 160);
	}
#else
	if (play) { fprintf(stderr, "--play needs a build with SDL2 (tools/mgba_run.sh)\n"); return 1; }
#endif
	setvbuf(stdout, NULL, _IOLBF, 0);
	static struct mLogFilter quietFilter;
	mLogFilterInit(&quietFilter);
	quiet.filter = &quietFilter;
	mLogSetDefaultLogger(&quiet);

	GBASIOLockstepInit(&lockstep);
	mLockstepInit(&lockstep.d);
	lockstep.d.signal = lsSignal;
	lockstep.d.wait = lsWait;
	lockstep.d.addCycles = lsAddCycles;
	lockstep.d.useCycles = lsUseCycles;
	lockstep.d.unusedCycles = lsUnusedCycles;
	lockstep.d.unload = lsUnload;

	for (int i = 0; i < nplayers; i++) {
		struct Player *p = &players[i];
		struct mCore *core = GBACoreCreate();
		core->init(core);
		mCoreInitConfig(core, NULL);
		core->desiredVideoDimensions(core, &p->w, &p->h);
		p->pixels = calloc(p->w * p->h, sizeof(color_t));
		core->setVideoBuffer(core, p->pixels, p->w);
		if (!mCoreLoadFile(core, rom)) { fprintf(stderr, "cannot load %s\n", rom); return 1; }
		char path[512], statePath[512];
		snprintf(path, sizeof path, "%s/save%d.sav", start, i);
		snprintf(statePath, sizeof statePath, "%s/state%d.ss", start, i);
		if (start && !saves[i]) saves[i] = strdup(path);
		size_t saveSize = 0, stateSize = 0;
		void *saveData = saves[i] ? readFile(saves[i], &saveSize) : NULL;
		void *stateData = start && access(statePath, R_OK) == 0 ? readFile(statePath, &stateSize) : NULL;
		if (play) {
			snprintf(path, sizeof path, "%s/save%d.sav", play, i);
			writeFile(path, saveData, saveSize);
			snprintf(path, sizeof path, "%s/state%d.ss", play, i);
			if (stateData) writeFile(path, stateData, stateSize);
			else unlink(path);
		}
		struct VFile *sv = VFileMemChunk(saveData, saveSize);
		free(saveData);
		if (!sv || !core->loadSave(core, sv)) { fprintf(stderr, "cannot open save %d\n", i); return 1; }
		p->script = scripts[i] ? scripts[i] : defaultScript;
		p->last = -1;
		p->awake = 1;
		p->core = core;
		p->callbacks.videoFrameEnded = onFrame;
		p->callbacks.context = p;
		core->addCoreCallbacks(core, &p->callbacks);
		core->reset(core);
		if (nplayers > 1) {
			// After the reset, which unloads the SIO driver; in player order, so node ids equal player numbers.
			struct GBA *gba = core->board;
			GBASIOLockstepNodeCreate(&p->node);
			GBASIOLockstepAttachNode(&lockstep, &p->node);
			GBASIOSetDriver(&gba->sio, &p->node.d, SIO_MULTI);
			GBASIOSetDriver(&gba->sio, &p->node.d, SIO_NORMAL_32);
		}
		if (stateData) {
			if (stateSize != core->stateSize(core) || !core->loadState(core, stateData)) {
				fprintf(stderr, "cannot load %s\n", statePath);
				return 1;
			}
			free(stateData);
		}
	}

	for (;;) {
		int all = 1, ran = 0;
		for (int i = 0; i < nplayers; i++) {
			struct Player *p = &players[i];
			all &= p->done;
			if (p->waiting) continue;  // a GBA past FRAMES keeps running: the others may wait on it
			ran = 1;
			if (traceDir && i == 0) {
				struct ARMCore *cpu = ((struct GBA *) p->core->board)->cpu;
				while (cpu->cycles < cpu->nextEvent) {
					traceStep(p->core->board, cpu);
					p->core->step(p->core);
				}
				cpu->irqh.processEvents(cpu);
			} else if (coverage || loads) {
				// ARMRunLoop with each instruction's address recorded before it runs (as mGBA's
				// ARMDebuggerCheckBreakpoints computes it), so GBAs interleave exactly as with runLoop.
				struct ARMCore *cpu = ((struct GBA *) p->core->board)->cpu;
				while (cpu->cycles < cpu->nextEvent) {
					uint32_t pc = cpu->gprs[ARM_PC] - (cpu->executionMode == MODE_THUMB ? 2 : 4) - 0x08000000;
					if (pc < 0x800000) covered[pc >> 4] |= 1 << ((pc >> 1) & 7);
					if (loads) loadsBefore(p->core, cpu);
					p->core->step(p->core);
					if (loads) loadsAfter(i, p->core->board);
				}
				cpu->irqh.processEvents(cpu);
			} else
				p->core->runLoop(p->core);
		}
		if (all) break;
		if (!ran) { fprintf(stderr, "link deadlock: every GBA is waiting\n"); return 1; }
#ifdef MGBA_RUN_SDL
		if (play && frameReady) {
			frameReady = 0;
			if (!present(ren, tex)) break;
		}
#endif
	}
	if (play) {
		char fpath[512];  // the session's length, for replays (tools/classify.sh)
		snprintf(fpath, sizeof fpath, "%s/frames", play);
		FILE *ff = fopen(fpath, "w");
		if (ff) fprintf(ff, "%u\n", players[0].frame), fclose(ff);
		for (int i = 0; i < 2; i++) {
			void *data = NULL;
			size_t size = players[i].core->savedataClone(players[i].core, &data);
			char path[512];
			snprintf(path, sizeof path, "%s/end_save%d.sav", play, i);
			writeFile(path, data, size);
			free(data);
			fclose(rec[i]);
		}
		printf("recorded %u frames to %s\n", players[0].frame, play);
	}
	for (int i = 0; i < nplayers; i++) players[i].core->deinit(players[i].core);
	if (loads) {
		fclose(loads);
		char path[600];
		snprintf(path, sizeof path, "%s.ramwords", loadsPath);  // bitmap: EWRAM then IWRAM, one byte per word
		writeFile(path, ramWord, sizeof ramWord);
	}
	if (coverage) {
		FILE *f = fopen(coverage, "wb");
		if (!f || fwrite(covered, sizeof covered, 1, f) != 1) { perror(coverage); return 1; }
		fclose(f);
	}
	return 0;
}
