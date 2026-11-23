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
    REG16(REG_VCOUNT) = 160;
    REG16(REG_IF) |= 1;
    if (h)
        ps2_icall(h)();
    REG16(BIOS_IF) |= 1;
    REG16(REG_IF) &= ~1;
    if (++sFrame % 60 == 0)
        ps2_log("frame %u", sFrame);
}
