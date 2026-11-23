// PS2: one GBA frame per VBlankIntrWait. For the first boot milestone there's no rendering or vsync yet: the game's
// VBlank handler runs, the display-status VBlank bit stays set (the game polls it), and a heartbeat goes out over SIO.
// Logging is SIO only (CLAUDE.md: never block in printf from game-reachable code).
#include <kernel.h>
#include <sio.h>
#include <stdarg.h>
#include <stdio.h>

#define REG16(a) (*(volatile u16 *)(a))
#define REG_DISPSTAT 0x04000004u
#define REG_VCOUNT 0x04000006u
#define REG_IF 0x04000202u
#define BIOS_IF 0x03007FF8u          // the BIOS's interrupt flags (IntrWait), written by handlers
#define INTR_TABLE 0x03000B70u       // the game's handler table (crt0.s interrupt_main); VBlank is entry 1

u32 (*ps2_icall(u32 target))();
void ps2_io_vblank(void);

static u32 sFrame;

void ps2_log(const char *fmt, ...)
{
    char buf[256];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    sio_puts(buf);
}

void ps2_fatal(const char *fmt, ...)
{
    char buf[256];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    sio_putsn("FATAL: ");
    sio_puts(buf);
    for (;;)
        SleepThread();
}

void ps2_native_missing(const char *name) { ps2_fatal("native GBA function not translated: %s", name); }

void ps2_vblank_wait(void)
{
    u32 h = *(volatile u32 *)(INTR_TABLE + 4);
    REG16(REG_DISPSTAT) |= 1;
    REG16(REG_IF) |= 1;
    ps2_io_vblank();
    if (h)
        ps2_icall(h)();
    REG16(BIOS_IF) |= 1;
    REG16(REG_IF) &= ~1;
    if (++sFrame % 60 == 0 || sFrame <= 10)
        ps2_log("frame %u", sFrame);
}

// Watchdog: once a second (EE VBlank interrupt), the frame count and the last global-state functions entered
// (ring at 0x0203C200, include/gstate.h GSTATE_TRACE), so a hang shows where the game is. SIO only, polled.
static int watch_handler(int cause)
{
    static u32 ticks, lastFrame;
    volatile u32 *ring = (volatile u32 *)0x0203C200;
    char buf[160];
    (void)cause;
    // shortcut: VCOUNT alternates 159/160 each PS2 vblank, enough for waits on line 159 (m4a SampleFreqSet); a real
    // scanline counter comes with the renderer, which steps lines
    REG16(REG_VCOUNT) = REG16(REG_VCOUNT) == 159 ? 160 : 159;
    if (++ticks % 60 == 0) {
        u32 i = ring[0] % 1024, k;
        int n = snprintf(buf, sizeof(buf), "watch: frame %u%s ring", sFrame, sFrame == lastFrame ? " (stuck)" : "");
        for (k = 1; k <= 6 && n < 150; k++) {
            u32 j = (i + 1024 - k) % 1024;
            n += snprintf(buf + n, sizeof(buf) - n, " %08x", ring[1 + 3 * j]);
        }
        sio_puts(buf);
        lastFrame = sFrame;
    }
    ExitHandler();
    return 0;
}

void ps2_watch_init(void)
{
    AddIntcHandler(INTC_VBLANK_S, watch_handler, 0);
    EnableIntc(INTC_VBLANK_S);
}
