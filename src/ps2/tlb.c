// Maps the GBA address space onto PS2 RAM with TLB entries, so the game's absolute GBA addresses work unchanged.
// Physical layout (top 16 MB of the PS2's 32 MB; ps2.ld keeps the ELF, heap and stack below 0x01000000):
//   0x01000000-0x017FFFFF  GBA ROM (code area and data, loaded by the ELF loader; ps2.ld, fix_elf.py)
//   0x01800000             EWRAM 256 KB      (0x02000000, mirrored at 0x02040000)
//   0x01840000             IWRAM 32 KB       (0x03000000)
//   0x01848000             I/O shadow 8 KB   (0x04000000; io.c gives writes their effects)
//   0x0184A000             palette 8 KB      (0x05000000)
//   0x01850000             VRAM 128 KB       (0x06000000)
//   0x01870000             OAM 8 KB          (0x07000000)
//   0x01872000             EEPROM port 8 KB  (0x0D000000 and 0x0DFFE000; all ones: always ready. shortcut: no saves yet)
#include <kernel.h>
#include <string.h>

#define PHYS_ROM 0x01000000u
#define PHYS_EWRAM 0x01800000u
#define PHYS_IWRAM 0x01840000u
#define PHYS_IO 0x01848000u
#define PHYS_PAL 0x0184A000u
#define PHYS_VRAM 0x01850000u
#define PHYS_OAM 0x01870000u
#define PHYS_EEPROM 0x01872000u

void ps2_fatal(const char *fmt, ...);
void ps2_log(const char *fmt, ...);

// TLB entries the kernel leaves free (EntryLo0/1 not valid), from the top down; filled when PutTLBEntry refuses.
// The EE kernel (PCSX2's BIOS) refuses PutTLBEntry for these ranges (-1) and leaves entries 39-47 invalid.
static int sNextFree = 47;

// EntryLo: PFN, cache mode 3 (cached, noncoherent), dirty (writable), valid, global
static u32 lo(u32 phys) { return ((phys >> 12) << 6) | (3 << 3) | (1 << 2) | (1 << 1) | 1; }

// one entry maps an even/odd page pair: va (aligned to two pages) -> phys0, phys1
static void map_lo(u32 va, u32 pagemask, u32 lo0, u32 lo1)
{
    int r = PutTLBEntry(pagemask, va, lo0, lo1);
    if (r >= 0)
        return;
    for (; sNextFree >= 0; sNextFree--) {
        unsigned int pm, hi, l0, l1;
        GetTLBEntry(sNextFree, &pm, &hi, &l0, &l1);
        if (!((l0 | l1) & 2)) {
            ps2_log("tlb: PutTLBEntry %08x -> %d, using free entry %d", va, r, sNextFree);
            _SetTLBEntry(sNextFree--, pagemask, va, lo0, lo1);
            return;
        }
    }
    ps2_fatal("tlb: no free TLB entry for %08x", va);
}

static void map(u32 va, u32 pagemask, u32 phys0, u32 phys1) { map_lo(va, pagemask, lo(phys0), lo(phys1)); }

void ps2_tlb_map(void)
{
    map(0x08000000, 0x007FE000, PHYS_ROM, PHYS_ROM + 0x400000);       // 2 x 4 MB
    map(0x02000000, 0x0007E000, PHYS_EWRAM, PHYS_EWRAM);              // 2 x 256 KB, mirror
    map(0x03000000, 0x00006000, PHYS_IWRAM, PHYS_IWRAM + 0x4000);     // 2 x 16 KB
    map(0x04000000, 0x00000000, PHYS_IO, PHYS_IO + 0x1000);           // 2 x 4 KB
    map(0x05000000, 0x00000000, PHYS_PAL, PHYS_PAL + 0x1000);
    map(0x06000000, 0x0001E000, PHYS_VRAM, PHYS_VRAM + 0x10000);      // 2 x 64 KB
    map(0x07000000, 0x00000000, PHYS_OAM, PHYS_OAM + 0x1000);
    map(0x0DFFE000, 0x00000000, PHYS_EEPROM, PHYS_EEPROM + 0x1000);
    map(0x0D000000, 0x00000000, PHYS_EEPROM, PHYS_EEPROM + 0x1000);  // the window's other end, same page
    // RAM starts zeroed (the GBA's crt0 clears it too); the ROM pages came from the ELF
    memset((void *)0x02000000, 0, 0x40000);
    memset((void *)0x03000000, 0, 0x8000);
    memset((void *)0x04000000, 0, 0x2000);
    memset((void *)0x05000000, 0, 0x400);
    memset((void *)0x06000000, 0, 0x18000);
    memset((void *)0x07000000, 0, 0x400);
    memset((void *)0x0DFFE000, 0xFF, 0x2000);
}
