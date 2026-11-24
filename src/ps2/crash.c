// PS2: crash reporter (adapted from the psx-to-ps2-HAL's crash_ps2.c). On a TLB or address
// error, bus error, reserved instruction, overflow or trap, ps2sdk's ee_debug level-1 handler
// saves the registers and the faulting thread resumes in crash_report(), which prints them from
// thread context (over SIO, ps2_log) and then parks the thread.
//
// Traps matter on GCC: it guards integer division with `teq` (divide by zero; handled as the GBA does, below) and turns a
// provable NULL dereference into `teq zero, zero`. Unhandled, they halt the EE silently with
// interrupts off. Look up the reported pc with addr2line on build/ps2/zeldaalttp.elf.
//
// Includes ps2sdk headers directly: this file uses no Dolphin types (tamtypes.h clashes there).

#include <kernel.h>
#include <ee_debug.h>
void ps2_log(const char *fmt, ...);

static EE_RegFrame s_frame;

static void crash_report(void) {
    static const char* const CAUSE[] = {"int", "TLB mod", "TLB load", "TLB store", "addr load",
                                        "addr store", "bus ifetch", "bus data", "syscall", "break",
                                        "reserved instruction", "coprocessor unusable", "overflow",
                                        "trap"};
    int code = (s_frame.cause >> 2) & 31;
    ps2_log("CRASH: %s at pc=%08X badvaddr=%08X ra=%08X sp=%08X thread %d",
           code < 14 ? CAUSE[code] : "?", (unsigned)s_frame.epc, (unsigned)s_frame.badvaddr,
           (unsigned)s_frame.ra[0], (unsigned)s_frame.sp[0], (int)GetThreadId());
    ps2_log("CRASH: a0=%08X a1=%08X a2=%08X a3=%08X v0=%08X v1=%08X", (unsigned)s_frame.a0[0],
           (unsigned)s_frame.a1[0], (unsigned)s_frame.a2[0], (unsigned)s_frame.a3[0],
           (unsigned)s_frame.v0[0], (unsigned)s_frame.v1[0]);
    for (;;) {
        SleepThread();
    }
}

static int crash_handler(EE_RegFrame* frame) {
    // Division by zero (GCC's `teq divisor, zero, 7` after div/divu): the GBA's libgcc returns 0 for both quotient
    // and remainder (__udivsi3/__umodsi3/__divsi3/__modsi3 -> Ldiv0: __div0, then 0), and game code relies on it
    // (sub_08012B64: a random pick among none). Same here: HI = LO = 0, continue after the teq.
    u32 insn = *(u32*)frame->epc;
    if (((frame->cause >> 2) & 31) == 13 && (insn & 0xFC00FFFF) == 0x000001F4 && !(frame->cause & 0x80000000)) {
        frame->hi = frame->lo = 0;
        frame->hi1 = frame->lo1 = 0;
        frame->epc += 4;
        return 1;
    }
    s_frame = *frame;
    frame->epc = (u32)crash_report;
    return 1;
}

__attribute__((constructor)) static void crash_install(void) {
    ee_dbg_install(1);
    for (int cause = 1; cause <= 13; cause++) {
        if (cause != 8 && cause != 9 && cause != 11) {  // not syscall, break, coprocessor unusable
            ee_dbg_set_level1_handler(cause, crash_handler);
        }
    }
}
