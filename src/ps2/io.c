// PS2: side effects of the GBA I/O registers. The I/O page (0x04000000) is plain RAM holding the register values.
// Translated code reaches it through ps2_io_read/ps2_io_write (include/auto.h R*/W* macros); hand-written C's DmaSet
// calls ps2_io_poll. (A read-only mapping that traps stores was tried first: PCSX2 doesn't raise TLB-modified
// exceptions, so stores went through silently.)
#include <kernel.h>

#define IO8(o) (*(volatile u8 *)(0x04000000u + (o)))
#define IO16(o) (*(volatile u16 *)(0x04000000u + (o)))
#define IO32(o) (*(volatile u32 *)(0x04000000u + (o)))

// ---- EEPROM (64 Kbit), as mGBA: 8 KB, block n (8 bytes) at n * 8, bits most significant first -------------------
// The game talks to it with DMA3 bit streams (one bit per halfword, bit 0): a read request "11" + address + "0", then
// a 68-bit read (4 junk bits, 64 data); a write "10" + address + 64 data bits + "0". Address: 6 or 14 bits.
extern int ps2_cur_instance;  // tlb.c: the game instance mapped now
u8 ps2_eeprom[8][8192];     // per instance (up to 8)
int ps2_eeprom_dirty[8];
static u32 sEepromRead[8];  // byte offset of the block the last read request named

static void eeprom_command(const volatile u16 *src, u32 n)
{
    u32 i, addr = 0, abits;
    if (n < 9 || !(src[0] & 1))
        return;
    abits = (src[1] & 1) ? n - 3 : n - 67;  // read request : write
    if (abits != 6 && abits != 14)
        return;
    for (i = 0; i < abits; i++)
        addr = (addr << 1) | (src[2 + i] & 1);
    addr = (addr & 0x3FF) * 8;
    if (src[1] & 1) {
        sEepromRead[ps2_cur_instance] = addr;
        return;
    }
    for (i = 0; i < 64; i++) {
        u8 *b = &ps2_eeprom[ps2_cur_instance][addr + i / 8], m = 0x80 >> (i % 8);
        *b = (src[2 + abits + i] & 1) ? (*b | m) : (*b & ~m);
    }
    ps2_eeprom_dirty[ps2_cur_instance] = 1;
}

static void eeprom_read(volatile u16 *dst, u32 n)
{
    u32 i;
    for (i = 0; i < n; i++)
        dst[i] = i < 4 ? 0 : (ps2_eeprom[ps2_cur_instance][sEepromRead[ps2_cur_instance] + (i - 4) / 8] >> (7 - (i - 4) % 8)) & 1;
}

// DMA channel n (0-3): registers at 0xB0 + 12n: SAD, DAD, CNT_L (count), CNT_H (control)
static void dma_run(int n)
{
    u32 base = 0xB0 + 12 * n, ctl = IO16(base + 10), src = IO32(base), dst = IO32(base + 4);
    u32 count = IO16(base + 8), wide = ctl & 0x400, step = wide ? 4 : 2;
    int dstep = ((ctl >> 5) & 3) == 1 ? -(int)step : ((ctl >> 5) & 3) == 2 ? 0 : (int)step;
    int sstep = ((ctl >> 7) & 3) == 1 ? -(int)step : ((ctl >> 7) & 3) == 2 ? 0 : (int)step;
    if (dst - 0x0D000000u < 0x01000000u) {
        eeprom_command((const volatile u16 *)src, count);
    } else if (src - 0x0D000000u < 0x01000000u) {
        eeprom_read((volatile u16 *)dst, count);
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

u8 ps2_openbus[8];  // what the GBA's BIOS area reads as to game code that follows a null pointer (gstate2c.py, sub_08003870)
u32 ps2_io_reads, ps2_io_last;  // debugging: the watchdog shows whether game code still runs, and what it reads

u32 ps2_io_read(u32 a, u32 size)
{
    u32 o = a - 0x04000000u;
    ps2_io_reads++, ps2_io_last = a;
    if (o == 6)  // VCOUNT: a line further on each read (0-227), so waits for a line end (m4a's SampleFreqSet)
        IO16(6) = (IO16(6) + 1) % 228;
    dma_check(0);
    if (o - 0x128 < 2) {  // SIOCNT: the link status bits (link.c)
        u32 ps2_link_siocnt(int inst, u32 v);
        u32 v = ps2_link_siocnt(ps2_cur_instance, IO16(0x128));
        return size == 1 ? (o == 0x128 ? v & 0xFF : v >> 8) : size == 2 ? v : v | (u32)IO16(0x12A) << 16;
    }
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
