// PS2: one GBA frame per VBlankIntrWait, in the instance's thread: run the game's VBlank handler (the display-status
// VBlank bit stays set; the game polls it), then hand control back to the frame loop (main.c), which draws and shows
// every instance's screen, and return when woken for the next frame. A heartbeat goes out over SIO.
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
extern int ps2_main_thread;
extern u32 ps2_frame;
extern u32 ps2_io_reads, ps2_io_last;
#define sFrame ps2_frame

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
    {  // the last functions entered (trace ring, 0x0203C200)
        volatile u32 *ring = (volatile u32 *)0x0203C200;
        u32 i = ring[0] % 1024, k;
        int n = snprintf(buf, sizeof(buf), "FATAL: ring");
        for (k = 1; k <= 12 && n < 240; k++)
            n += snprintf(buf + n, sizeof(buf) - n, " %08x", ring[1 + 3 * ((i + 1024 - k) % 1024)]);
        sio_puts(buf);
    }
    for (;;)
        SleepThread();
}

void ps2_native_missing(const char *name) { ps2_fatal("native GBA function not translated: %s", name); }

void sub_0800B7FC(void), process_dma_request(void);  // src/main.c, the VCount handlers

// the VBlank and VCount handlers of the mapped instance, as at the end of each of its frames (also the shared world's
// view pass, shared.c)
void ps2_vblank_run(void)
{
    u32 h = *(volatile u32 *)(INTR_TABLE + 4);
    // VBlank, as on the GBA: the handler copies the game's buffers to the registers and OAM before the frame is drawn
    REG16(REG_DISPSTAT) |= 1;
    REG16(REG_IF) |= 1;
    ps2_io_vblank();
    if (h)
        ps2_icall(h)();
    REG16(BIOS_IF) |= 1;
    REG16(REG_IF) &= ~1;
    // VCount: the game's handlers move the match line on each time (src/main.c process_dma_request at line 0 starts
    // the HBlank DMA for the frame and moves it to 32; sub_0800B7FC at 32 mixes sound and moves it back). On the GBA
    // both come during the next frame; the port runs them here, before the frame is drawn, as it does VBlank. Each line
    // at most once a frame, in line order.
    {
        u32 done = 0, line, vc;
        while ((REG16(0x04000200u) & 4) && (REG16(REG_DISPSTAT) & 0x20) && (line = REG16(REG_DISPSTAT) >> 8) < 160 &&
               !(done & (1u << (line / 8))) && (!done || line > 0)) {
            done |= 1u << (line / 8);
            REG16(REG_VCOUNT) = line;
            REG16(REG_DISPSTAT) = (REG16(REG_DISPSTAT) & ~1) | 4;  // VCount match, not in VBlank
            REG16(REG_IF) |= 4;
            vc = *(volatile u32 *)(INTR_TABLE + 8);  // the VCount entry (main.c gUnknown_03000B70.unk8)
            if (vc == (u32)sub_0800B7FC) {
                // shortcut: sub_0800B7FC (line 32) mixes sound (m4a SoundMain, native ARM, not translated) and hands
                // back to line 0; the port has no sound yet, so only the hand-back. Run it when sound is ported.
                REG16(REG_DISPSTAT) = 0x28 | (REG16(REG_DISPSTAT) & 7);
                *(volatile u32 *)(INTR_TABLE + 8) = (u32)process_dma_request;
            } else if (vc)
                ps2_icall(vc)();
            REG16(REG_IF) &= ~4;
            REG16(REG_DISPSTAT) &= ~4;
        }
        // the VBlank flag stays set between frames, as before: the port has no line timing, and code that waits for
        // it (file select's sub_0801484C polls DISPSTAT) would wait forever
        REG16(REG_DISPSTAT) |= 1;
    }
}

void ps2_vblank_wait(void)
{
    ps2_vblank_run();
    WakeupThread(ps2_main_thread);  // this instance's frame is done: main.c draws it
    SleepThread();                  // until its next frame (main.c has mapped this instance again)
}

// Watchdog: once a second (EE VBlank interrupt) a heartbeat with the frame count; when the frame count stops, the
// interrupted pc and the last functions entered (ring at 0x0203C200, include/gstate.h GSTATE_TRACE) instead, so a hang
// shows where the game is. SIO only, polled.
static int watch_handler(int cause)
{
    static u32 ticks, lastFrame;
    volatile u32 *ring = (volatile u32 *)0x0203C200;
    char buf[160];
    (void)cause;
    if (++ticks % 60 == 0) {
        u32 i = ring[0] % 1024, k;
        u32 epc;
        int n;
        __asm__ volatile("mfc0 %0, $14" : "=r"(epc));  // the interrupted pc (EPC is still set in the handler)
        if (sFrame != lastFrame) {  // tp-ps2's pcsx2_run.py reads this line as the heartbeat
            snprintf(buf, sizeof(buf), "heartbeat: vblank %u frame %u", ticks, sFrame);
            sio_puts(buf);
            lastFrame = sFrame;
            ExitHandler();
            return 0;
        }
        n = snprintf(buf, sizeof(buf), "watch: frame %u (stuck) pc %08x io reads %u last %08x = %04x ring", sFrame, epc, ps2_io_reads, ps2_io_last, REG16(ps2_io_last));
        for (k = 1; k <= 6 && n < 150; k++) {
            u32 j = (i + 1024 - k) % 1024;
            n += snprintf(buf + n, sizeof(buf) - n, " %08x", ring[1 + 3 * j]);
        }
        sio_puts(buf);
        {  // thread states: who is stuck where (status 1 running, 2 ready, 4 waiting; wait 1 sleep, 2 semaphore)
            int t;
            for (t = 1; t <= 6; t++) {
                ee_thread_status_t st;
                if (iReferThreadStatus(t, &st) >= 0) {
                    snprintf(buf, sizeof(buf), "watch: thread %d status %d wait %d id %d prio %d", t, st.status, st.waitType, st.waitId, st.current_priority);
                    sio_puts(buf);
                }
            }
        }
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

void ps2_trace_print(u32 a);
extern volatile int ps2_trace_on;
u32 ps2_gstate_watch;  // 0: nothing watched (shared.c sets it)

// -finstrument-functions on hand-written game C (Makefile.ps2): each entry goes into the trace ring too, so the
// watchdog names hand C as well
__attribute__((no_instrument_function)) void __cyg_profile_func_enter(void *fn, void *site)
{
    volatile u32 *ring = (volatile u32 *)0x0203C200;
    u32 i = ring[0] % 1024;
    (void)site;
    ring[1 + 3 * i] = (u32)fn;
    ring[0] = i + 1;
    if (ps2_trace_on)
        ps2_trace_print((u32)fn);
}

// verbose tracing (ps2_trace_on, set where a problem is being looked at): every traced entry over SIO
volatile int ps2_trace_on;
__attribute__((no_instrument_function)) void ps2_trace_print(u32 a)
{
    char b[16];
    snprintf(b, sizeof(b), "T %08x", a);
    sio_puts(b);
}
__attribute__((no_instrument_function)) void __cyg_profile_func_exit(void *fn, void *site) { (void)fn, (void)site; }
