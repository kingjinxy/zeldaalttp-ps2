// PS2: side effects of the GBA I/O registers. The I/O page (0x04000000) is plain RAM holding the register values.
// Translated code reaches it through ps2_io_read/ps2_io_write (include/auto.h R*/W* macros); hand-written C's DmaSet
// calls ps2_io_poll. (A read-only mapping that traps stores was tried first: PCSX2 doesn't raise TLB-modified
// exceptions, so stores went through silently.)
#include <kernel.h>

#define IO8(o) (*(volatile u8 *)(0x04000000u + (o)))
#define IO16(o) (*(volatile u16 *)(0x04000000u + (o)))
#define IO32(o) (*(volatile u32 *)(0x04000000u + (o)))

// DMA channel n (0-3): registers at 0xB0 + 12n: SAD, DAD, CNT_L (count), CNT_H (control)
static void dma_run(int n)
{
    u32 base = 0xB0 + 12 * n, ctl = IO16(base + 10), src = IO32(base), dst = IO32(base + 4);
    u32 count = IO16(base + 8), wide = ctl & 0x400, step = wide ? 4 : 2;
    int dstep = ((ctl >> 5) & 3) == 1 ? -(int)step : ((ctl >> 5) & 3) == 2 ? 0 : (int)step;
    int sstep = ((ctl >> 7) & 3) == 1 ? -(int)step : ((ctl >> 7) & 3) == 2 ? 0 : (int)step;
    if (src - 0x0D000000u < 0x01000000u || dst - 0x0D000000u < 0x01000000u) {
        // EEPROM: shortcut: no save chip yet, reads return all ones; upgrade with real save support
        if (src - 0x0D000000u < 0x01000000u)
            for (; count; count--, dst += dstep)
                *(volatile u16 *)dst = 1;
    } else {
        if (count == 0)
            count = n == 3 ? 0x10000 : 0x4000;
        for (; count; count--, src += sstep, dst += dstep) {
            if (wide)
                *(volatile u32 *)dst = *(volatile u32 *)src;
            else
                *(volatile u16 *)dst = *(volatile u16 *)src;
        }
    }
    if (!(ctl & 0x200))  // not repeating: done, the enable bit clears
        IO16(base + 10) = ctl & ~0x8000;
}

// DMAs whose start timing has come: immediate ones now; VBlank ones from ps2_io_vblank
static void dma_check(u32 timing)
{
    int n;
    for (n = 0; n < 4; n++) {
        u16 ctl = IO16(0xB0 + 12 * n + 10);
        if ((ctl & 0x8000) && ((ctl >> 12) & 3) == timing)
            dma_run(n);
    }
}

void ps2_io_poll(void) { dma_check(0); }
void ps2_io_vblank(void) { dma_check(1); }

u32 ps2_io_read(u32 a, u32 size)
{
    u32 o = a - 0x04000000u;
    dma_check(0);
    return size == 1 ? IO8(o) : size == 2 ? IO16(o) : IO32(o);
}

void ps2_log(const char *fmt, ...);

void ps2_io_write(u32 a, u32 v, u32 size)
{
    u32 o = a - 0x04000000u;
    if (a < 0x00100000u) {  // GBA BIOS area / null pointer: the GBA ignores these stores, the PS2 kernel lives here
        static int logged;
        if (logged < 16)
            logged++, ps2_log("io: dropped %u-byte store of %08x to %08x (from %p)", size, v, a,
                              __builtin_return_address(0));
        return;
    }
    u16 oldIF = IO16(0x202);
    if (size == 1)
        IO8(o) = v;
    else if (size == 2)
        IO16(o) = v;
    else
        IO32(o) = v;
    if (o <= 0x203 && o + size > 0x202)  // IF: writing 1 clears the bit
        IO16(0x202) = oldIF & ~IO16(0x202);
    dma_check(0);
}
