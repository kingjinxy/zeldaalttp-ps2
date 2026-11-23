// PS2: C versions of the game's ARM-mode routines (the GBA runs them from IWRAM), the resolver for indirect calls of
// translated code (ICALL, include/auto.h) and startup sorting of the global-state tables. Compiled with the game's
// flags: it uses include/gstate.h.
#include "gstate.h"

void ps2_fatal(const char *fmt, ...);

// ---- global-state entry with chosen registers ----------------------------------------------------------------------

static const struct GstateEntry *find_entry(u32 a)
{
    const struct GstateEntry *f = gstate_find(__gstatetable_start, __gstatetable_end, a & ~1u);
    return f ? f : gstate_find(__gstatetablew_start, __gstatetablew_end, a & ~1u);
}

// call GBA code at a with r0-r11 from regs (r4-r11 matter for code outside the C convention); returns r0
static u32 gba_call(u32 a, const u32 *regs)
{
    const struct GstateEntry *e = find_entry(a);
    u32 f[17] = { 0 };
    u32 i;
    if (!e)
        ps2_fatal("gba_call: no global-state entry at %08x", a);
    for (i = 0; i < 4; i++)
        f[7 + i] = regs[i];
    f[11] = regs[4];
    for (i = 0; i < 3; i++)
        f[i] = regs[5 + i];
    for (i = 0; i < 4; i++)
        f[3 + i] = regs[8 + i];
    gstate_enter_ce(e->fn, e->off, f);
    return f[7];
}

// ---- ARM routines --------------------------------------------------------------------------------------------------

extern u8 sub_08000448[], sub_08008C02__base[];
u32 sub_08009554();
u32 sub_08009F1C();
void DeleteThisEntity();
void DoPlayerEntity();
void DoObjectEntity();
void DoPlayerItemEntity();
void DoManagerEntity();
void sub_0803E114(void);
void sub_080126CC(void);

// sub_080007C4 (IWRAM 0x03000E40): for each collision list, test the list's entity against each listed entity
// (sub_08000448 with them in r4/r5) and link the two on a hit
static void port_sub_080007C4(void)
{
    u8 *head = *(u8 **)0x02016D50, *n = head;
    do {
        u32 cnt = n[12];
        u8 *a = *(u8 **)(n + 8);
        u8 af = a ? a[60] : 0;
        if (cnt && (af & 0x80)) {
            u8 **p = (u8 **)(n + 16);
            for (; cnt; cnt--, p++) {
                u8 *b = *p;
                u32 bf = b[60], regs[12] = { 0 };
                if (bf < 0x80)
                    continue;
                if (!((bf | af) & 0x40)) {
                    if (b[67] && a[8] == 1)
                        continue;
                    if (a[61] || b[61])
                        continue;
                }
                regs[4] = (u32)a, regs[5] = (u32)b;
                if (gba_call((u32)sub_08000448, regs)) {
                    b[65] = a[64] | 0x80;
                    *(u8 **)(b + 76) = a;
                    a[65] = b[64] | 0x80;
                    *(u8 **)(a + 76) = b;
                }
            }
        }
        n = *(u8 **)(n + 4);
    } while (n != head);
}

// sub_080008A8 (IWRAM 0x03005AE0): after an entity's update, add it to the collision list of every entity near it
// whose mask matches; type-3 entities keep the count in +0x6B
static void port_sub_080008A8(u8 *e)
{
    u32 count = 0;
    if (e[0x3C] >= 0x80) {
        const u32 *masks = (const u32 *)0x08137B10;
        u16 mask = *(u16 *)(e + 0x5C), fl = *(u16 *)(e + 0x50);
        u16 x = *(u16 *)(e + 0x32) + 0x38, y = *(u16 *)(e + 0x36) + 0x38;
        u8 *head = *(u8 **)0x02016D50, *n = head;
        do {
            u8 *o = *(u8 **)(n + 8);
            if (o && o[0x3C] >= 0x80 && (masks[o[0x3C] & 15] & mask) && (u16)(x - *(u16 *)(o + 0x32)) < 0x71 &&
                (u16)(y - *(u16 *)(o + 0x36)) < 0x71 && ((fl & *(u16 *)(o + 0x50)) >> 14) && o != e) {
                count++;
                if (n[12] < 0x20) {
                    *(u8 **)(n + 0x10 + n[12] * 4) = e;
                    n[12]++;
                }
            }
            n = *(u8 **)(n + 4);
        } while (n != head);
    }
    if (e[8] == 3)
        e[0x6B] = count;
}

// sub_08008FA4 (ARM, IWRAM 0x03000530): copy the 32x24-tile window at the camera (0x03000450) from a 128-wide map
// buffer src into the 32x32 BG tilemap dst, wrapping columns and rows. Word stores land aligned down, as on ARM.
static void port_sub_08008FA4(u8 *dst, const u8 *src)
{
    const u8 *c = (const u8 *)0x03000450;
    u32 x0 = *(u16 *)(c + 32) - *(u16 *)(c + 24), x1 = x0 + *(u16 *)(c + 28);
    u32 y0 = *(u16 *)(c + 34) - *(u16 *)(c + 26), y1 = y0 + *(u16 *)(c + 30);
    u32 col, row, i, rows;
    x1 >>= 3, x0 >>= 3, y0 >>= 3, y1 >>= 3;
    if (x0 >= 1)
        x0--, x1--;
    if (y0 >= 2)
        y0 -= 2, y1 -= 2;
    col = (x1 & 31) * 2;
    row = (y1 & 31) * 2;
    src += (x0 + y0 * 128) * 2;
    for (rows = 24; rows; rows--) {
        u8 *line = dst + row * 32;
        u32 o = col;
        if ((u32)src & 2) {
            *(u16 *)(line + o) = *(const u16 *)src;
            o = (o + 2) & 60;
            for (i = 0; i < 15; i++, o = (o + 4) & 60)
                *(u32 *)(line + (o & ~3u)) = *(const u32 *)(src + 2 + 4 * i);
            *(u16 *)(line + o) = *(const u16 *)(src + 62);
        } else {
            for (i = 0; i < 16; i++, o = (o + 4) & 60)
                *(u32 *)(line + (o & ~3u)) = *(const u32 *)(src + 4 * i);
        }
        row = (row + 2) & 62;
        src += 256;
    }
}

// sub_08008F78 (Thumb, inside rom1's code area): set one tile entry of a layer from a metatile's table
u32 sub_08008F78(u32 tile, u32 pos, u32 layer)
{
    u32 k = layer >> 14;
    u16 v = (*(u16 **)(0x08008F68 + 4 * k))[tile];
    (*(u16 **)(0x08009280 + 8 * k))[pos] = v;
    return v;
}

// sub_08009106: a branch into sub_08008C02 + 0x2A
u32 sub_08009106(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 r[12] = { a0, a1, a2, a3 };
    return gba_call((u32)sub_08008C02__base + 0x2A, r);
}

// UpdateAllEntities (crt0.s, IWRAM 0x03006740): run each entity list through its type's handler
static void entity_handler(u8 *e)
{
    switch (e[8]) {
    case 1: DoPlayerEntity(e); break;
    case 3: sub_08009554(e); break;  // the table's sub_08008FA4+0x5B1 (the Thumb function after the IWRAM code)
    case 4: sub_08009F1C(e); break;  // sub_08008FA4+0xF79
    case 6: DoObjectEntity(e); break;
    case 7: DoPlayerItemEntity(e); break;
    case 8: DoManagerEntity(e); break;
    default: DeleteThisEntity(e); break;
    }
}

void UpdateAllEntities(void)
{
    u16 *flags = (u16 *)0x03000208;
    u8 **cur = (u8 **)0x0300044C;
    u8 *list;
    flags[1] = flags[0];
    flags[0] = 0;
    for (list = (u8 *)0x03005960; list < (u8 *)0x030059A0; list += 8) {
        u8 *e = *(u8 **)(list + 4);
        while (e != list) {
            *cur = e;
            entity_handler(e);
            if (*cur == e)
                port_sub_080008A8(e);
            e = *(u8 **)(*cur + 4);
        }
        if (list == (u8 *)0x03005968)
            sub_0803E114();
    }
    sub_080126CC();
    flags[1] = 0;
}

// ---- indirect calls ------------------------------------------------------------------------------------------------

// the game copies its ARM routines to IWRAM (AgbMain) and calls the copies: 0x03000530 sub_08008FA4,
// 0x03000E40 sub_080007C4, 0x03005AE0 sub_080008A8, 0x03006740 UpdateAllEntities

static u32 sTarget;
static u32 trampoline(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s1, u32 s2, u32 s3)
{
    u32 t = sTarget, r[12] = { a0, a1, a2, a3 };
    (void)s0, (void)s1, (void)s2, (void)s3;
    return gba_call(t, r);
}

static u32 port_08008FA4(u32 dst, u32 src) { port_sub_08008FA4((u8 *)dst, (const u8 *)src); return 0; }
static u32 port_080007C4(void) { port_sub_080007C4(); return 0; }
static u32 port_080008A8(u32 e) { port_sub_080008A8((u8 *)e); return 0; }
static u32 port_update(void) { UpdateAllEntities(); return 0; }

u32 (*ps2_icall(u32 a))()
{
    u32 b = a & ~1u;
    if (b < 0x02000000u || b >= 0x0A000000u)
        return (u32 (*)())a;  // PS2 code
    if (b == 0x03000E40u)
        return (u32 (*)())port_080007C4;
    if (b == 0x03005AE0u)
        return (u32 (*)())port_080008A8;
    if (b == 0x03006740u)
        return (u32 (*)())port_update;
    if (b == 0x03000530u)
        return (u32 (*)())port_08008FA4;
    if (find_entry(b)) {
        sTarget = b;
        return (u32 (*)())trampoline;
    }
    ps2_fatal("ICALL to GBA address %08x with no C or global-state code", a);
    return 0;
}

// ---- startup -------------------------------------------------------------------------------------------------------

static void sort_table(struct GstateEntry *lo, struct GstateEntry *hi)
{
    struct GstateEntry *i, *j;
    for (i = lo + 1; i < hi; i++) {  // insertion sort: the tables come out of the link almost sorted
        struct GstateEntry t = *i;
        for (j = i; j > lo && (j[-1].addr & ~1u) > (t.addr & ~1u); j--)
            *j = j[-1];
        *j = t;
    }
}

void ps2_glue_init(void)
{
    sort_table(__gstatetable_start, __gstatetable_end);
    sort_table(__gstatetablew_start, __gstatetablew_end);
}

// ---- symbols of native GBA code ------------------------------------------------------------------------------------

// copied to IWRAM by AgbMain (CpuCopy32), never run from there: ps2_icall sends their IWRAM addresses to the ports
const u8 sub_080007C4[0x100], sub_080008A8[0x100], sub_08008FA4[0x910], interrupt_main[4];
// thumb_interwork_veneers.s: Thumb -> ARM UpdateAllEntities
void sub_08137AFC(void) { UpdateAllEntities(); }

// asm/lttp/sprite_bee.s (A Link to the Past only, native Thumb on the GBA build): not ported
void ps2_native_missing(const char *name);
#define MISSING(n) u32 n(void) { ps2_native_missing(#n); return 0; }
MISSING(sub_080D0148) MISSING(sub_080D0480) MISSING(sub_080D0524) MISSING(sub_080D0550) MISSING(sub_080D05F8)
MISSING(sub_080D0664) MISSING(sub_080D0820) MISSING(sub_080D08CC) MISSING(sub_080D09F4) MISSING(sub_080D0BA4)
MISSING(sub_080D0C14) MISSING(sub_080D0E24) MISSING(sub_080D0EE0) MISSING(sub_080D0FCC) MISSING(sub_080D1050)
MISSING(sub_080D1080)
