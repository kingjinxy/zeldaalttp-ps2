// Maps the GBA address space onto PS2 RAM with TLB entries, so the game's absolute GBA addresses work unchanged.
// Physical layout (top 16 MB of the PS2's 32 MB; ps2.ld keeps the ELF, heap and stack below 0x01000000):
//   0x01000000-0x017FFFFF  GBA ROM (code area and data, loaded by the ELF loader; ps2.ld, fix_elf.py)
//   0x01800000             EWRAM 256 KB      (0x02000000, mirrored at 0x02040000)
//   0x01840000             IWRAM 32 KB       (0x03000000)
//   0x01848000             I/O shadow 8 KB   (0x04000000; frame.c reads the registers from here)
//   0x0184A000             palette 8 KB      (0x05000000)
//   0x01850000             VRAM 128 KB       (0x06000000)
//   0x01870000             OAM 8 KB          (0x07000000)
#include <kernel.h>
#include <string.h>

#define PHYS_ROM 0x01000000u
#define PHYS_EWRAM 0x01800000u
#define PHYS_IWRAM 0x01840000u
#define PHYS_IO 0x01848000u
#define PHYS_PAL 0x0184A000u
#define PHYS_VRAM 0x01850000u
#define PHYS_OAM 0x01870000u

void ps2_fatal(const char *fmt, ...);

// EntryLo: PFN, cache mode 3 (cached, noncoherent), dirty (writable), valid, global
static u32 lo(u32 phys) { return ((phys >> 12) << 6) | (3 << 3) | (1 << 2) | (1 << 1) | 1; }

// one entry maps an even/odd page pair: va (aligned to two pages) -> phys0, phys1
static void map(u32 va, u32 pagemask, u32 phys0, u32 phys1)
{
    if (PutTLBEntry(pagemask, va, lo(phys0), lo(phys1)) < 0)
        ps2_fatal("PutTLBEntry %08x failed", va);
}

void ps2_tlb_map(void)
{
    map(0x08000000, 0x007FE000, PHYS_ROM, PHYS_ROM + 0x400000);       // 2 x 4 MB
    map(0x02000000, 0x0007E000, PHYS_EWRAM, PHYS_EWRAM);              // 2 x 256 KB, mirror
    map(0x03000000, 0x00006000, PHYS_IWRAM, PHYS_IWRAM + 0x4000);     // 2 x 16 KB
    map(0x04000000, 0x00000000, PHYS_IO, PHYS_IO + 0x1000);           // 2 x 4 KB
    map(0x05000000, 0x00000000, PHYS_PAL, PHYS_PAL + 0x1000);
    map(0x06000000, 0x0001E000, PHYS_VRAM, PHYS_VRAM + 0x10000);      // 2 x 64 KB
    map(0x07000000, 0x00000000, PHYS_OAM, PHYS_OAM + 0x1000);
    // RAM starts zeroed (the GBA's crt0 clears it too); the ROM pages came from the ELF
    memset((void *)0x02000000, 0, 0x40000);
    memset((void *)0x03000000, 0, 0x8000);
    memset((void *)0x04000000, 0, 0x2000);
    memset((void *)0x05000000, 0, 0x400);
    memset((void *)0x06000000, 0, 0x18000);
    memset((void *)0x07000000, 0, 0x400);
}
