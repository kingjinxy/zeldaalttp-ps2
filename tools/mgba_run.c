// Headless mGBA runner: 1-4 GBAs on one link cable, a button script per GBA, screenshots and RAM dumps
// at chosen frames. Build: tools/mgba_run.sh. Usage:
//   mgba_run ROM FRAMES [--players N] [--inputs FILE] [--inputsP FILE] [--saveP FILE]
//            [--shot N,N,...] [--out DIR] [--dump N:ADDR:LEN] [--watch ADDR] [--coverage FILE]
// --coverage: write a bitmap of executed ROM halfwords (bit n = address 0x08000000 + 2n, all GBAs combined)
// for tools/reach.py. Same run as without it (same RAM), a little slower.
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
// final EEPROM to DIR/end_saveP.sav. FRAMES is ignored; Esc or closing the window stops. Replay with
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
	if (!thumb || pc - 0x08000000 >= 0x800000) return;
	uint8_t c = traceCount[(pc - 0x08000000) >> 1];
	if (!c || c > traceMax) return;
	if (cpu->cpsr.priv != MODE_SYSTEM && cpu->cpsr.priv != MODE_USER) return;
	snprintf(tr.path, sizeof tr.path, "%s/%08X_%u.gz", traceDir, pc, c - 1);
	tr.f = gzopen(tr.path, "wb1");
	if (!tr.f) { perror(tr.path); exit(1); }
	tr.active = 1, tr.broken = 0, tr.steps = 0, tr.addr = pc, tr.lr = cpu->gprs[ARM_LR], tr.sp = cpu->gprs[ARM_SP];
	traceRegs(cpu, tr.f);
	traceMemory(gba, tr.f);
}

int main(int argc, char **argv) {
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
			} else if (coverage) {
				// ARMRunLoop with each instruction's address recorded before it runs (as mGBA's
				// ARMDebuggerCheckBreakpoints computes it), so GBAs interleave exactly as with runLoop.
				struct ARMCore *cpu = ((struct GBA *) p->core->board)->cpu;
				while (cpu->cycles < cpu->nextEvent) {
					uint32_t pc = cpu->gprs[ARM_PC] - (cpu->executionMode == MODE_THUMB ? 2 : 4) - 0x08000000;
					if (pc < 0x800000) covered[pc >> 4] |= 1 << ((pc >> 1) & 7);
					p->core->step(p->core);
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
	if (coverage) {
		FILE *f = fopen(coverage, "wb");
		if (!f || fwrite(covered, sizeof covered, 1, f) != 1) { perror(coverage); return 1; }
		fclose(f);
	}
	return 0;
}
