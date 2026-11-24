// Functions not decompiled yet are in asm/non_matching/rom2a/, one .inc each (tools/asm_split.py from asm/rom2a.s).

#include "global.h"
#include "entity.h"

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/rom2a/sub_0802DC80.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DD50.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DDAC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DE48.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DEB8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802DFD0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E02C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E1A8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E354.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E4B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E5E0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E750.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E764.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E78C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E904.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802E9B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EA14.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EA98.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802EDA0.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F080.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F0B8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F1BC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F304.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F364.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F688.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F6D4.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802F9F8.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FA3C.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FA94.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FAEC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FB28.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FC84.inc\"");

void sub_0802FCC8(void)
{
}

asm(".include \"asm/non_matching/rom2a/sub_0802FCCC.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FD88.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_0802FE04.inc\"");
#ifdef NONMATCHING
// The lobby's last step (gUnknown_02016D60 byte 0 the step): 0 clears the players' choices (gUnknown_03006C80.unk28,
// 8 words) and starts the link, 1 waits for gUnknown_03000FC0.unk8 == 1, 2 checks the choices: every player's high
// nibble of unk28[i].unk4 the same (0xF0: anyone) and none zero, else main state 10; then main state 5.
void sub_0802FEE8(void)
{
    u8 *step = (u8 *)&gUnknown_02016D60;
    u32 zero;
    u8 i, v, t;

    if (gUnknown_03000520.unk0 != 0)
        return;
    gUnknown_03000FC0.unk12 = 8;
    switch (*step) {
    case 0:
        gUnknown_030004A0.dispCnt = 64;
        *(vu16 *)0x04000000 = 0;
        sub_0801239C();
        sub_080123BC();
        zero = 0;
        CpuSet(&zero, gUnknown_03006C80.unk28, 0x05000008);
        sub_08036704(3);
        (*step)++;
        break;
    case 1:
        if (gUnknown_03000FC0.unk8 == 1)
            *step = 2;
        break;
    case 2:
        sub_0800BED8();
        v = gUnknown_03006C80.unk28[0].unk4 & 0xF0;
        if (v != 0xF0) {
            for (i = 1; i < gUnknown_03006C80.unk0; i++) {
                t = gUnknown_03006C80.unk28[i].unk4 & 0xF0;
                if (t != 0xF0 && t != v) {
                    set_main_state(10);
                    return;
                }
            }
            for (i = 0; i < gUnknown_03006C80.unk0; i++)
                if (gUnknown_03006C80.unk28[i].unk4 == 0) {
                    set_main_state(10);
                    return;
                }
        }
        set_main_state(5);
        break;
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_0802FEE8.inc\"");
#endif
asm(".include \"asm/non_matching/rom2a/sub_0802FFE4.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030018.inc\"");
asm(".include \"asm/non_matching/rom2a/sub_08030054.inc\"");

void sub_0803006C(void)
{
    gUnknown_084278F8[gUnknown_03005050]();
}


void sub_0803008C(void)
{
    switch (gSubState) {
    case 0:
        sub_0800BED8();
        *(u16 *)0x05000000 = 0x6739;
        gPaletteBuf2[0] = 0x6739;
        sub_0801239C();
        sub_080123BC();
        sub_0800D6F4();
        gSubState++;
        gUnknown_02016D60.unk4 = 10;
        gUnknown_02016D60.unk6 = 0;
        sub_08036704(4);
        break;
    case 1:
        if (sub_080367CC() == 1) {
            gUnknown_03005050++;
            gSubState = 0;
        }
        break;
    }
}

#ifdef NONMATCHING
struct Select02016D60b { u8 pad[8]; u8 sel; u8 unk9; u8 unkA; u8 last; };

void sub_08030100(void)
{
    u8 r;

    if (gUnknown_03000520.unk0 == 0) {
        REG_DISPCNT = 0;
        sub_0800BED8();
        load_palette_from_gfx_group(15);
        load_gfx_group(20);
        *(u16 *)0x05000000 = 0x6739;
        gPaletteBuf2[0] = 0x6739;
        gUnknown_030004A0.dispCnt = 0x1D40;
        gUnknown_030004A0.bgConfig[0].bgcnt = 0x1C00;
        gUnknown_030004A0.bgConfig[1].bgcnt = 0x1D01;
        gUnknown_030004A0.bgConfig[2].bgcnt = 0x1E02;
        gUnknown_030004A0.bgConfig[3].bgcnt = 0x1F03;
        gUnknown_02016D60.unk26 = 96;
        gUnknown_030004A0.bgConfig[1].hofs = -96;
        gUnknown_030004A0.bgConfig[0].hofs = 0;
        gUnknown_030004A0.bgConfig[3].hofs = gUnknown_030004A0.bgConfig[2].hofs = -8;
        gUnknown_030004A0.bgConfig[0].vofs = 0;
        gUnknown_030004A0.bgConfig[3].vofs = gUnknown_030004A0.bgConfig[2].vofs = gUnknown_030004A0.bgConfig[1].vofs = -8;
        gUnknown_03000450.unk22 = gUnknown_03000450.unk20 = -8;
        gUnknown_030004A0.bldcnt = 0x3F40;
        gUnknown_030004A0.bldalpha = 0x70C;
        sub_080599A8(NULL, 1);
        gUnknown_03005050++;
        gUnknown_02016D60.unk4 = 106;
        gUnknown_03000948.unk5 = 1;
        ((struct Select02016D60b *)&gUnknown_02016D60)->sel = 0;
        sub_0804C8A8(70, 0, 0);
        sub_0804C8A8(70, 1, 0);
        r = sub_080397F0();
        ((struct Select02016D60b *)&gUnknown_02016D60)->unkA = r;
        ((struct Select02016D60b *)&gUnknown_02016D60)->last = r ? 4 : 3;
        gUnknown_03006C80.unk3 = 0;
        gUnknown_03000830 = 0;
        sub_0800D1A0();
        play_sound(0x80010000);
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_08030100.inc\"");
#endif
#ifdef NONMATCHING
struct Gfx08427910 { const void *src; u16 size; };
extern const struct Gfx08427910 gUnknown_08427910[];

// Game-select menu: loads the sprite sheet for option n, creates its objects and plays its sound
void sub_08030214(u8 n)
{
    sub_080009F4((void *)0x06014000, (u32)gUnknown_08427910[n].src, gUnknown_08427910[n].size);
    play_sound(0x80020000);
    switch (n) {
    case 0:
        sub_0804C8A8(70, 8, n);
        sub_0804C8A8(70, 9, n);
        play_sound(440);
        break;
    case 1:
        sub_0804C8A8(70, 10, n);
        sub_0804C8A8(70, 14, n);
        sub_0804C8A8(70, 19, n);
        play_sound(0x1B5);
        break;
    case 2:
        sub_0804C8A8(70, 12, n);
        sub_0804C8A8(70, 16, n);
        play_sound(436);
        break;
    case 3:
        sub_0804C8A8(70, 13, n);
        sub_0804C8A8(70, 15, n);
        sub_0804C8A8(70, 18, n);
        play_sound(438);
        break;
    case 4:
        sub_0804C8A8(70, 17, n);
        play_sound(0x1B7);
        break;
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_08030214.inc\"");
#endif

void sub_08030214(u8);
void sub_08030724(void);

void sub_08030314(void)
{
    struct Entity *e;

    sub_08030214(((struct { u8 pad[8]; u8 v; } *)&gUnknown_02016D60)->v);
    sub_0804C8A8(70, 6, ((struct { u8 pad[8]; u8 v; } *)&gUnknown_02016D60)->v);
    gUnknown_03000450.unk0 = sub_0804C8A8(70, 7, gLCDRegisterBuffer);
    sub_08036704(5);
    gUnknown_03005050 = 4;
    gSubState = 0;
    if (gLCDRegisterBuffer != 0) {
        e = sub_0804C8A8(70, 5, 0);
        e->x.HALF.HI = 120;
        e->y.HALF.HI = 80;
    }
    sub_08030724();
}


void sub_08030314(void);
void sub_08137AFC(void);

void sub_08030380(void)
{
    if (--gUnknown_02016D60.unk4 == 0) {
        sub_08059A44();
        if (((u8 *)&gUnknown_02016D60)[10] != 0) {
            gUnknown_030004A0.dispCnt |= 0x4200;
            gUnknown_030004A0.winin = 0x3D3F;
            gUnknown_030004A0.winout = 63;
            gUnknown_030004A0.win1h = 120;
            gUnknown_030004A0.win1v = 160;
            gUnknown_03000450.unk0 = sub_0804C8A8(70, 2, 0);
            sub_0804C8A8(70, 3, 0);
            sub_0804C8A8(70, 4, 0);
            gUnknown_03005050 = 3;
            gUnknown_02016D60.unk4 = 60;
        } else {
            sub_08030314();
        }
    }
    sub_08137AFC();
    sub_08000BAC();
}

asm(".include \"asm/non_matching/rom2a/sub_08030418.inc\"");
#ifdef NONMATCHING
struct Select02016D60 { u8 pad[8]; u8 sel; u8 unk9; u8 unkA; u8 last; };
void sub_08030728(void);
void sub_080599A8(struct Entity *, u32);

void sub_080304FC(void)
{
    struct Select02016D60 *s;
    u16 k;

    if (sub_08037554()) {
        sub_08037750();
        sub_0800099C();
        k = gUnknown_03005E10[0];
        if (k & 0x60) {
            s = (struct Select02016D60 *)&gUnknown_02016D60;
            s->sel = s->sel == s->last ? 0 : s->sel + 1;
            sub_08030214(s->sel);
            play_sound(61);
        } else if (k & 0x90) {
            s = (struct Select02016D60 *)&gUnknown_02016D60;
            s->sel = s->sel == 0 ? s->last : s->sel - 1;
            sub_08030214(s->sel);
            play_sound(61);
        } else if (k & 9) {
            play_sound(0x80010000);
            play_sound(62);
            play_sound(77);
            sub_080599A8(gUnknown_03000450.unk0, 0);
            gUnknown_03005050++;
            sub_08036704(5);
        }
        sub_08030728();
        sub_08030654();
        sub_08137AFC();
        sub_08000BAC();
        sub_08037574();
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_080304FC.inc\"");
#endif
#ifdef NONMATCHING
extern const u8 gUnknown_08427938[];
u32 sub_08059A2C(void);
void sub_08030654(void);
void sub_08137AFC(void);

void sub_080305BC(void)
{
    if (sub_08037554()) {
        sub_08037750();
        if (sub_08059A2C()) {
            sub_0800BED8();
            *(u16 *)0x05000000 = 0;
            gPaletteBuf2[0] = 0;
            sub_080123BC();
            sub_0801239C();
            sub_08036760();
            sub_08059A44();
            *(u16 *)0x05000000 = 0;
            gPaletteBuf2[0] = 0;
            gUnknown_03006C80.unk1 = gUnknown_08427938[((u8 *)&gUnknown_02016D60)[8]];
            gUnknown_03006C80.unk2 = ((u8 *)&gUnknown_02016D60)[8] == 0;
            if (gUnknown_03006C80.unk1 == 2 && ((u8 *)&gUnknown_02016D60)[10] > 1)
                set_main_state(3);
            else
                set_main_state(2);
        }
        sub_08030654();
        sub_08137AFC();
        sub_08000BAC();
        sub_08037574();
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_080305BC.inc\"");
#endif
#ifdef NONMATCHING
// Eases the camera one pixel a frame toward the followed entity (clamped to -8..24) and sets BG1-3 scroll
void sub_08030654(void)
{
    struct Entity *e = gUnknown_03000450.unk0;
    u16 t;

    if (e != NULL) {
        t = e->x.HALF.HI - 112;
        if ((s16)t < -8)
            t = -8;
        if ((s16)t > 24)
            t = 24;
        if ((s16)gUnknown_03000450.unk20 != (s16)t) {
            if ((s16)gUnknown_03000450.unk20 < (s16)t)
                gUnknown_03000450.unk20++;
            else
                gUnknown_03000450.unk20--;
        }
        gUnknown_030004A0.bgConfig[1].hofs = (gUnknown_030004A0.bgConfig[2].hofs = gUnknown_030004A0.bgConfig[3].hofs = gUnknown_03000450.unk20) - gUnknown_02016D60.unk26;
        t = e->y.HALF.HI - 72;
        if ((s16)t < -8)
            t = -8;
        if ((s16)t > 24)
            t = 24;
        if ((s16)gUnknown_03000450.unk22 != (s16)t) {
            if ((s16)gUnknown_03000450.unk22 < (s16)t)
                gUnknown_03000450.unk22++;
            else
                gUnknown_03000450.unk22--;
        }
        gUnknown_030004A0.bgConfig[1].vofs = gUnknown_030004A0.bgConfig[2].vofs = gUnknown_030004A0.bgConfig[3].vofs = gUnknown_03000450.unk22;
    }
}
#else
asm(".include \"asm/non_matching/rom2a/sub_08030654.inc\"");
#endif

void sub_08030724(void)
{
}


void sub_08030728(void)
{
}

asm(".include \"asm/non_matching/rom2a/sub_0803072C.inc\"");
