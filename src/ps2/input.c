// PS2: controller port i into game instance i's KEYINPUT register (0x04000130, active low), each frame before the
// game reads it (main.c maps the instance first).
// A script replaces a port: host:replay_p<n>.inputs (n = player 1-4), mGBA runner format (tools/mgba_run.c): lines
// "FRAME KEYS", KEYS from A B s(elect) S(tart) r l U D R L or "-", held from FRAME on. Frame numbers count
// game frames (ps2_frame, one per VBlankIntrWait), as mGBA counts video frames while the game doesn't lag.
// host:replay.lag (tools/ps2/to_gameframes.py) lists the GBA's lag frames as "GAMEFRAME COUNT": VBlanks that came
// while the game was still busy with that frame (loading); ps2_input_lag gives frame.c the count to run.
// libpad over the BIOS's XSIO2MAN/XPADMAN modules, as in tp-ps2's pad.c. Mapping (Nintendo layout):
//   Circle A, Cross B, L1 L, R1 R, Start Start, Select Select, D-pad or left stick the D-pad.
#include <kernel.h>
#include <libpad.h>
#include <loadfile.h>
#include <sifrpc.h>
#include <stdio.h>
#include <stdlib.h>

void ps2_log(const char *fmt, ...);

#define KEYINPUT (*(volatile u16 *)0x04000130)
enum { GBA_A = 1, GBA_B = 2, GBA_SELECT = 4, GBA_START = 8, GBA_RIGHT = 16, GBA_LEFT = 32, GBA_UP = 64, GBA_DOWN = 128,
       GBA_R = 256, GBA_L = 512 };

static const struct { u16 ps2, gba; } sMap[] = {
    { PAD_CIRCLE, GBA_A }, { PAD_CROSS, GBA_B }, { PAD_L1, GBA_L }, { PAD_R1, GBA_R }, { PAD_START, GBA_START },
    { PAD_SELECT, GBA_SELECT }, { PAD_RIGHT, GBA_RIGHT }, { PAD_LEFT, GBA_LEFT }, { PAD_UP, GBA_UP },
    { PAD_DOWN, GBA_DOWN },
};

extern u32 ps2_frame;

#define MAX_LINES 4096
static struct Script {
    int n, line;
    u32 frame[MAX_LINES];
    u16 keys[MAX_LINES];
    u16 held;
} *sScript[8];  // per player (up to 8)

static void load_script(int inst)
{
    char name[40], buf[96], k[64], *c;
    struct Script *s;
    FILE *f;
    snprintf(name, sizeof(name), "host:replay_p%d.inputs", inst + 1);
    if (!(f = fopen(name, "r")))
        return;
    s = sScript[inst] = calloc(1, sizeof(*s));
    while (fgets(buf, sizeof(buf), f) && s->n < MAX_LINES) {
        u16 keys = 0;
        if (buf[0] == '#' || sscanf(buf, "%u %63s", &s->frame[s->n], k) != 2)
            continue;
        for (c = k; *c; c++)
            keys |= *c == 'A' ? 1 : *c == 'B' ? 2 : *c == 's' ? 4 : *c == 'S' ? 8 : *c == 'r' ? 16 : *c == 'l' ? 32 :
                    *c == 'U' ? 64 : *c == 'D' ? 128 : *c == 'R' ? 256 : *c == 'L' ? 512 : 0;
        s->keys[s->n++] = keys;
    }
    fclose(f);
    ps2_log("input: player %d from %s (%d lines)", inst + 1, name, s->n);
}

static struct { u32 frame, n; } *sLag;
static int sLagN, sLagLine;

static void load_lag(void)
{
    char buf[64];
    FILE *f = fopen("host:replay.lag", "r");
    if (!f)
        return;
    sLag = calloc(MAX_LINES, sizeof(*sLag));
    while (fgets(buf, sizeof(buf), f) && sLagN < MAX_LINES)
        if (sscanf(buf, "%u %u", &sLag[sLagN].frame, &sLag[sLagN].n) == 2)
            sLagN++;
    fclose(f);
    ps2_log("input: %d lag entries from host:replay.lag", sLagN);
}

// the lag VBlanks in game frame ps2_frame + 1 (the one finishing now), for the instance finishing first in it
int ps2_input_lag(void)
{
    while (sLagLine < sLagN && sLag[sLagLine].frame < ps2_frame + 1)
        sLagLine++;
    return sLagLine < sLagN && sLag[sLagLine].frame == ps2_frame + 1 ? sLag[sLagLine].n : 0;
}

static char sPadBuf[2][256] __attribute__((aligned(64)));
static int sOpen[2];

void ps2_input_init(void)
{
    int a, b;
    SifInitRpc(0);
    a = SifLoadModule("rom0:XSIO2MAN", 0, NULL);
    b = SifLoadModule("rom0:XPADMAN", 0, NULL);
    if (a >= 0 && b >= 0 && padInit(0) == 1) {
        sOpen[0] = padPortOpen(0, 0, sPadBuf[0]) != 0;
        sOpen[1] = padPortOpen(1, 0, sPadBuf[1]) != 0;
    }
    for (a = 0; a < 4; a++)
        load_script(a);
    load_lag();
    ps2_log("input: controller ports %s %s (XSIO2MAN %d, XPADMAN %d)", sOpen[0] ? "1" : "-", sOpen[1] ? "2" : "-", a, b);
}

void ps2_input_frame(int inst)
{
    struct padButtonStatus st;
    u16 held = 0, keys = 0;
    int state, i;
    struct Script *s = sScript[inst];
    if (s) {  // keys for the next frame, as the mGBA runner sets them after each frame
        while (s->line < s->n && s->frame[s->line] <= ps2_frame + 1)
            s->held = s->keys[s->line++];
        KEYINPUT = 0x03FF & ~s->held;
        return;
    }
    if (inst < 2 && sOpen[inst]) {
        state = padGetState(inst, 0);
        if ((state == PAD_STATE_STABLE || state == PAD_STATE_FINDCTP1) && padRead(inst, 0, &st) != 0) {
            held = 0xFFFF ^ st.btns;
            // left stick as the D-pad, when the pad reports analog values (DualShock mode)
            if ((st.mode >> 4) == 7) {
                if (st.ljoy_h < 64) held |= PAD_LEFT;
                if (st.ljoy_h > 192) held |= PAD_RIGHT;
                if (st.ljoy_v < 64) held |= PAD_UP;
                if (st.ljoy_v > 192) held |= PAD_DOWN;
            }
        }
    }
    for (i = 0; i < (int)(sizeof(sMap) / sizeof(sMap[0])); i++)
        if (held & sMap[i].ps2)
            keys |= sMap[i].gba;
    KEYINPUT = 0x03FF & ~keys;
}
