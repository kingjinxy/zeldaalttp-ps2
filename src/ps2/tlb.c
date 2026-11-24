// Maps the GBA address space onto PS2 RAM with TLB entries, so the game's absolute GBA addresses work unchanged.
// Several game instances (one per player) each keep their RAM/I-O/video memory in a block of their own; ps2_tlb_select
// copies the running instance out of the mapped ("live") block and the next one in. The ROM is shared. The game keeps
// all its state at GBA addresses (no writable globals of its own in PS2 memory), so swapping the memory swaps the game.
// (Repointing the TLB entries per instance was tried first: PCSX2's EE recompiler bakes the host pointer of a constant
// address into the code it compiles, so code compiled under one instance kept writing that instance's memory.)
// Physical layout (top 16 MB of the PS2's 32 MB; ps2.ld keeps the ELF, heap and stack below 0x01000000):
//   0x01000000-0x017EFFFF  GBA ROM (code area and data, loaded by the ELF loader; ps2.ld, fix_elf.py)
//   0x017F0000             EEPROM port 8 KB (0x0D000000 and 0x0DFFE000; all ones: always ready; io.c emulates it)
//   0x01800000             the live block, mapped:
//     +0x00000 EWRAM 256 KB (0x02000000, mirrored at 0x02040000)   +0x40000 IWRAM 32 KB (0x03000000)
//     +0x48000 I/O 8 KB (0x04000000; io.c gives writes their effects) +0x4A000 palette 8 KB (0x05000000)
//     +0x50000 VRAM 128 KB (0x06000000)                             +0x70000 OAM 8 KB (0x07000000)
//   0x01900000 + i MB      instance i's copy of the live block while another instance runs (up to 4)
#include <kernel.h>
#include <string.h>

#define PHYS_ROM 0x01000000u
#define PHYS_EEPROM 0x017F0000u
#define PHYS_LIVE 0x01800000u
#define SAVED(i) ((u8 *)(0x80000000u + 0x01900000u + (u32)(i) * 0x100000u))  // kseg0: cached, unmapped

void ps2_fatal(const char *fmt, ...);
void ps2_log(const char *fmt, ...);

int ps2_cur_instance = -1;

// EntryLo: PFN, cache mode 3 (cached, noncoherent), dirty (writable), valid, global
static u32 lo(u32 phys) { return ((phys >> 12) << 6) | (3 << 3) | (1 << 2) | (1 << 1) | 1; }

// The EE kernel (PCSX2's BIOS) refuses PutTLBEntry for these ranges (-1) and leaves entries 39-47 invalid: they're
// used from the top down.
static int sNextFree = 47;

static int map(u32 va, u32 pagemask, u32 phys0, u32 phys1)
{
    for (; sNextFree >= 0; sNextFree--) {
        unsigned int pm, hi, l0, l1;
        GetTLBEntry(sNextFree, &pm, &hi, &l0, &l1);
        if (!((l0 | l1) & 2)) {
            _SetTLBEntry(sNextFree, pagemask, va, lo(phys0), lo(phys1));
            return sNextFree--;
        }
    }
    ps2_fatal("tlb: no free TLB entry for %08x", va);
    return -1;
}

// the live block: virtual address, page mask, offset of the even and odd page, bytes the game uses (copied per switch)
static const struct { u32 va, mask, even, odd, used; } sRegions[] = {
    { 0x02000000, 0x0007E000, 0x00000, 0x00000, 0x40000 },  // EWRAM, 2 x 256 KB (mirror)
    { 0x03000000, 0x00006000, 0x40000, 0x44000, 0x8000 },   // IWRAM, 2 x 16 KB
    { 0x04000000, 0x00000000, 0x48000, 0x49000, 0x400 },    // I/O, 2 x 4 KB
    { 0x05000000, 0x00000000, 0x4A000, 0x4B000, 0x400 },    // palette
    { 0x06000000, 0x0001E000, 0x50000, 0x60000, 0x18000 },  // VRAM, 2 x 64 KB
    { 0x07000000, 0x00000000, 0x70000, 0x71000, 0x400 },    // OAM
};
#define NREGIONS (sizeof(sRegions) / sizeof(sRegions[0]))

void ps2_tlb_select(int inst)
{
    u32 r;
    if (inst == ps2_cur_instance)
        return;
    for (r = 0; r < NREGIONS; r++) {
        if (ps2_cur_instance >= 0)
            memcpy(SAVED(ps2_cur_instance) + sRegions[r].even, (void *)sRegions[r].va, sRegions[r].used);
        memcpy((void *)sRegions[r].va, SAVED(inst) + sRegions[r].even, sRegions[r].used);
    }
    ps2_cur_instance = inst;
}

void ps2_tlb_map(int instances)
{
    u32 r;
    int i;
    map(0x08000000, 0x007FE000, PHYS_ROM, PHYS_ROM + 0x400000);  // 2 x 4 MB, shared
    map(0x0DFFE000, 0x00000000, PHYS_EEPROM, PHYS_EEPROM + 0x1000);
    map(0x0D000000, 0x00000000, PHYS_EEPROM, PHYS_EEPROM + 0x1000);  // the window's other end, same page
    memset((void *)0x0DFFE000, 0xFF, 0x2000);
    for (r = 0; r < NREGIONS; r++)
        map(sRegions[r].va, sRegions[r].mask, PHYS_LIVE + sRegions[r].even, PHYS_LIVE + sRegions[r].odd);
    for (i = 0; i < instances; i++) {  // each instance starts zeroed (the GBA's crt0 clears RAM too)
        memset(SAVED(i), 0, 0x80000);
        *(volatile u16 *)(SAVED(i) + 0x48130) = 0x03FF;  // KEYINPUT is active low: no buttons held (input.c sets it)
    }
}
