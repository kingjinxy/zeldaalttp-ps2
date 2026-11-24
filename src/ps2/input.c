// PS2: controller 1 into the GBA's KEYINPUT register (0x04000130, active low), each frame before the game reads it.
// libpad over the BIOS's XSIO2MAN/XPADMAN modules, as in tp-ps2's pad.c. Mapping (Nintendo layout):
//   Circle A, Cross B, L1 L, R1 R, Start Start, Select Select, D-pad or left stick the D-pad.
#include <kernel.h>
#include <libpad.h>
#include <loadfile.h>
#include <sifrpc.h>

void ps2_log(const char *fmt, ...);

#define KEYINPUT (*(volatile u16 *)0x04000130)
enum { GBA_A = 1, GBA_B = 2, GBA_SELECT = 4, GBA_START = 8, GBA_RIGHT = 16, GBA_LEFT = 32, GBA_UP = 64, GBA_DOWN = 128,
       GBA_R = 256, GBA_L = 512 };

static const struct { u16 ps2, gba; } sMap[] = {
    { PAD_CIRCLE, GBA_A }, { PAD_CROSS, GBA_B }, { PAD_L1, GBA_L }, { PAD_R1, GBA_R }, { PAD_START, GBA_START },
    { PAD_SELECT, GBA_SELECT }, { PAD_RIGHT, GBA_RIGHT }, { PAD_LEFT, GBA_LEFT }, { PAD_UP, GBA_UP },
    { PAD_DOWN, GBA_DOWN },
};

static char sPadBuf[256] __attribute__((aligned(64)));
static int sOpen;

void ps2_input_init(void)
{
    int a, b;
    SifInitRpc(0);
    a = SifLoadModule("rom0:XSIO2MAN", 0, NULL);
    b = SifLoadModule("rom0:XPADMAN", 0, NULL);
    sOpen = a >= 0 && b >= 0 && padInit(0) == 1 && padPortOpen(0, 0, sPadBuf) != 0;
    ps2_log("input: controller port 1 %s (XSIO2MAN %d, XPADMAN %d)", sOpen ? "open" : "unavailable", a, b);
}

void ps2_input_frame(void)
{
    struct padButtonStatus st;
    u16 held = 0, keys = 0;
    int state, i;
    if (sOpen) {
        state = padGetState(0, 0);
        if ((state == PAD_STATE_STABLE || state == PAD_STATE_FINDCTP1) && padRead(0, 0, &st) != 0) {
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
