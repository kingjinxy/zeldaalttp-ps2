#include "gba/gba.h"
#include "global.h"

void splash_screen_main(void)
{
    switch (gSubState)
    {
    case 0:  // fade in?
        sub_0800BED8();
        gUnknown_030004A0.dispCnt = 0x100;
        gUnknown_030004A0.bgConfig[0].bgcnt = 0x1C00;
        load_gfx_group(4);
        load_palette_from_gfx_group(gGameLanguage == 0 ? 3 : 40);
        set_palette_color(0, 0x7FFF);
        zero_memory(&gUnknown_02016D60, 40);
        gUnknown_02016D60.unk4 = 60;
        sub_0800C0B0(2, 8);
        gSubState++;
        break;
    case 1:
        sub_0800C41C();
        if (sub_0800D610() != 0)
            sub_0800C0B0(1, 8);
        break;
    case 2:
        if (gUnknown_03000520.unk0 == 0)
        {
            load_gfx_group(7);
            load_palette_from_gfx_group(7);
            gUnknown_030004A0.dispCnt = 0x300;
            gUnknown_030004A0.bgConfig[0].bgcnt = 0x1C00;
            gUnknown_030004A0.bgConfig[1].bgcnt = 0x1D05;
            sub_0800C0B0(0, 8);
            gUnknown_02016D60.unk4 = 120;
            gSubState++;
        }
        break;
    case 3:  // showing title screen
        if (sub_0800D610() != 0)
            sub_0800C0B0(3, 8);
        break;
    case 4:
        if (gUnknown_03000520.unk0 == 0)
            set_main_state(8);
        break;
    }
}

int sub_0800D610(void)
{
    if (gUnknown_03000520.unk0 != 0 || --gUnknown_02016D60.unk4 != 0)
        return 0;
    gSubState++;
    return 1;
}

void sub_0800D644(void)
{
    if (gUnknown_02000010.unk0.asBitfield.unk0 & 0x7F)
        gUnknown_02000010.unk0.asBitfield.unk0 = 135;
}

void sub_0800D65C(void)
{
    if (gUnknown_0201ED90.unk6 & 0x8000)
        gUnknown_0201ED90.unk6 &= 0x7FFF;
}

void sub_0800D67C(u16 a)
{
    CpuCopy32(&gUnknown_08137D44, &gUnknown_02000010, 24);
    gUnknown_02000010.unk6 = a;
}

void sub_0800D6A4(u16 a)
{
    if ((gUnknown_0201ED90.unk6 & 0x8000) == 0)
    {
        zero_memory(&gUnknown_0201ED90, 24);
        gUnknown_0201ED90.unk0.asBitfield.unk0 = 1;
        gUnknown_0201ED90.unk6 = a;
        gUnknown_0201ED90.unk0.asBitfield.unk2_0 = 3;
        gUnknown_0201ED90.unk0.asBitfield.unk2_4 = (a & 0x7FFF) >> 8;
    }
}

void sub_0800D6F4(void)
{
    zero_memory(&gUnknown_02000010, 24);
    zero_memory(&gTextbox, 272);
    zero_memory(&gUnknown_020309C0, 16);
    zero_memory(gUnknown_02030990, 16);
    zero_memory(gUnknown_02000000, 4);
    gUnknown_0202E154 = 0;
}

void sub_0800D744(void)
{
    zero_memory(&gUnknown_0201ED90, 24);
    zero_memory(&gUnknown_0202A5E0, 272);
    zero_memory(gUnknown_020309B0, 16);
    zero_memory(gUnknown_020309A0, 16);
    gUnknown_0202E155 = 0;
}

void sub_0800D788(void)
{
    if (gUnknown_0201ED90.unk0.asBitfield.unk0 == 1)
    {
        gUnknown_0201ED90.unk0.asBitfield.unk0 = 0;
        gUnknown_0202A5E0.unkF8 = 1;
    }

    switch (gUnknown_02000010.unk0.asBitfield.unk0)
    {
    case 1:
        gTextbox.unk108 = 0;
        gTextbox.unkF8 = 1;
        gUnknown_0202E154 = (gUnknown_0202E154 + 1) | ~0x7F;
        break;
    case 135:
        if (gTextbox.unk0 <= 1)
            gTextbox.unkF8 = 5;
        else if (gTextbox.unk0 <= 6)
            gTextbox.unkF8 = 4;
        break;
    }

    while (gUnknown_084273EC[gUnknown_0202A6D8]())
        ;

    if (gTextbox.unkFA != 0)
        gTextbox.unkFA--;
    else
    {
        if (gTextbox.unk108 != 0)
        {
            gTextbox.unk108 = 0;
            sub_0800E3B0(2);
        }
        else
        {
            while (gUnknown_084273D4[gTextbox.unkF8]())
                ;
        }
    }

    sub_0800E430();
    sub_0800E570();
    sub_0800E78C();
}

void sub_0800D87C(void)
{
    gTextbox.unk10B = 0;
}

int sub_0800D890(void)
{
    return 0;
}

extern void sub_0800EB50(u8 *, u32);

int sub_0800D894(void)
{
    struct Struct0202A5E0 *r4 = &gTextbox;

    zero_memory(&gUnknown_020309C0, 16);
    zero_memory(gUnknown_0201EF00, 20);
    zero_memory(r4, 272);
    CpuCopy32(&gUnknown_02000010, r4, 24);
    r4->unk19 = r4->unk4_7;
    if ((r4->unk2_0) == 3)
        r4->unk2_0 = unk3000000.unk6;
    sub_0800ED7C(&r4->unk18, r4->unk6);
    sub_0800EBD4(r4);
    gUnknown_020309C0.unk8 = gUnknown_0202E154;
    gUnknown_020309C0.unk0 = gUnknown_0202E154;
    r4->unk60 = gUnknown_02002490;
    r4->unk5A = 208;
    sub_0800DFC4(r4, 113);
    r4->unk1B = 1;
    r4->unk24 = r4->fillerD8;
    r4->unkF8 = 2;
    sub_0800EB50(r4, r4->unk2_4);
    sub_0800E69C(1);
    return 1;
}

int sub_0800D958(void)
{
    struct Struct0202A5E0 *r5 = &gUnknown_0202A5E0;

    zero_memory(gUnknown_020309B0, 16);
    zero_memory(r5, 272);
    CpuCopy32(&gUnknown_0201ED90, r5, 24);
    if (r5->unk2_0 == 3)
        r5->unk2_0 = unk3000000.unk6;
    r5->unk6 &= 0x7FFF;
    sub_0800ED7C(&r5->unk18, r5->unk6);
    CpuFastFill(-1, gUnknown_02002B90, 0x500);
    sub_0800EB08(2);
    play_sound(121);
    sub_0800EBD4(r5);
    r5->unk4_0 = 20;
    r5->unk60 = gUnknown_02002B90;
    r5->unk5A = 160;
    sub_0800DFC4(r5, 113);
    r5->unk1B = 2;
    r5->unk24 = r5->fillerD8;
    r5->unkF8 = 2;
    sub_0800EB50(r5, r5->unk2_4);
    return 0;
}

int sub_0800DA30(void)
{
    struct Struct0202A5E0 *r4 = &gTextbox;

    if (r4->unk10B != 1)
    {
        r4->unk10B = 1;
        play_sound(67);
    }
    sub_0800E69C(2);
    if (sub_0800E6B0(1) != 0)
        r4->unkF8 = 3;
    return 0;
}

int sub_0800DA70(void)
{
    if (sub_0800E4EC(-1) != 0)
        gUnknown_0202A5E0.unkF8 = 3;
    return 0;
}

int sub_0800DA90(void)
{
    if (gTextbox.unk10B != 3)
    {
        gTextbox.unk10B = 3;
        gTextbox.unkD7 = 0;
        gTextbox.unkD6 = 0;
        gTextbox.unkD5 = 0;
        gTextbox.unkD4 = 0;
        play_sound(68);
    }
    sub_0800E69C(7);
    if (sub_0800E6B0(-1) != 0)
        gTextbox.unkF8 = 5;
    return 0;
}

int sub_0800DAE8(void)
{
    if (sub_0800E4EC(1) != 0)
        gUnknown_0202A5E0.unkF8 = 5;
    return 0;
}

int sub_0800DB08(void)
{
    sub_0800E69C(0);
    gTextbox.unk10B = 4;
    gTextbox.unkF8 = 0;
    return 0;
}

int sub_0800DB30(void)
{
    sub_0800E4EC(0);
    gUnknown_0202A5E0.unkF8 = 0;
    gUnknown_0201ED90.unk0.asBitfield.unk0 = 0;
    gUnknown_0202A5E0.unk0 = 0;
    return 0;
}

int sub_0800DB54(void)
{
    return 0;
}

int sub_0800DB58(void)
{
    gUnknown_08427408[gUnknown_0202A5E0.unkF9](&gUnknown_0202A5E0);
    sub_0800E4EC(0);
    return 0;
}

int sub_0800DB84(void)
{
    sub_0800E69C(3);
    gTextbox.unk10B = 2;
    gUnknown_08427408[gTextbox.unkF9](&gTextbox);
    sub_0800E6B0(0);
    return 0;
}

void sub_0800DBC0(struct Struct0202A5E0 *a)
{
    if (a->unk1B != 2)
        sub_0800E3B0(0);
    a->unkF9 = 1;
}

extern u16 sub_0800DCDC();

void sub_0800DBE0(struct Struct0202A5E0 *a)
{
    int r2;
    s16 r5;
    u16 r6;

    if (a->unk105 != 0)
    {
        a->unk105--;
        return;
    }
    if (a->unk106 != 0)
        a->unk106--;

    if (a->unk1B != 2)
    {
        int r1;

        if ((gUnknown_03000940[gLCDRegisterBuffer] & 2) != 0)
            r1 = 5;
        else
            r1 = 1;
        r2 = r1;
    }
    else
        r2 = 2;

    a->unk102 -= r2;
    if (a->unk102 > 0)
        return;

    r5 = 0;
    while (a->unk102 <= 0)
    {
        r5++;
        a->unk102 += gUnknown_08137D5C[a->unk2_0];
    }

    r6 = 0;
    do
    {
        u16 r1 = sub_0800DCDC(a);

        if (r1 == 0 || a->unk105 != 0 || a->unkFA != 0)
            break;
        r6 += r1;
        r5--;
    }
    while (r5 > 0);

    if (r6 == 0)
        return;

    if (a->unk1B != 2)
        sub_0800EB08(a->unk109);
    else
        sub_0800EB08(2);
}


// Functions not decompiled yet are in asm/non_matching/rom_0800D4F0/, one .inc each (tools/asm_split.py from asm/rom_0800D4F0.s).

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800DCDC.inc\"");
#ifdef NONMATCHING
void sub_0800DFC4(u8 *p, u8 f)
{
    u8 *q = &p[255];
    u8 *c;
    u8 *dst;
    u8 n;
    u32 col;

    if ((*q & 48) != (f & 112)) {
        *q = f & 63;
        c = &p[91];
        if (*c - p[257] > 0)
            *c = (*c + 7) & ~7;
    } else {
        *q = f & 63;
        c = &p[91];
    }
    p[92] = f & 15;
    col = *c >> 3;
    n = 28 - col;
    if (p[27] != 2)
        dst = &p[100] + (p[263] & 2) * 28 + col;
    else
        dst = &p[100] + col;
    f &= 48;
    while ((s8)--n != -1) {
        dst[28] = f;
        dst[0] = f;
        dst++;
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800DFC4.inc\"");
#endif
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E094.inc\"");

#ifdef NONMATCHING
void sub_0800E1D4(u8 *p)
{
    u8 n = p[260];

    if (n != 0) {
        if (--p[260] == 0)
            p[249] = 5;
    } else if (gUnknown_03005E10[gLCDRegisterBuffer] & 0xF3) {
        play_sound(66);
        p[268] = n;
        p[249] = 5;
    } else {
        p[268]++;
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E1D4.inc\"");
#endif

#ifdef NONMATCHING
extern u8 gUnknown_02002B90[];
extern u8 gUnknown_0201EF00[];

// Scrolls the text box up a line: rows 1-3 move up, the last row clears
void sub_0800E240(u8 *p)
{
    u16 zero;
    s32 fill;

    CpuSet(p + 128, p + 100, 14);
    CpuSet(p + 156, p + 128, 14);
    CpuSet(p + 184, p + 156, 14);
    zero = 0;
    CpuSet(&zero, p + 184, 0x0100000E);
    p[212] = p[213];
    p[213] = p[214];
    p[214] = p[215];
    p[215] = 0;
    if (p[27] == 2) {
        if (p[212] != 0)
            return;
        fill = -1;
        CpuFastSet(&fill, gUnknown_02002B90, 0x01000140);
        sub_0800EB08(2);
    } else {
        if (p[214] != 0)
            return;
        p[264] = 1;
        gUnknown_0201EF00[8] -= 2;
        gUnknown_0201EF00[9] -= 2;
        gUnknown_0201EF00[10] -= 2;
        gUnknown_0201EF00[11] -= 2;
    }
    p[91] = 0;
    sub_0800DFC4(p, p[255] | 64);
    p[249] = 1;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E240.inc\"");
#endif

void sub_0800E324(u8 *p)
{
    if (p[27] != 2) {
        sub_0800E69C(6);
        if (p[254] == 0 && (gUnknown_03005E10[gLCDRegisterBuffer] & 0xF3))
            p[249] = 3;
    } else if (gUnknown_0201ED90.unk6 & 0x8000) {
        p[260] = 1;
    } else if (--p[260] == 0xFF) {
        p[249] = 3;
    }
}


void sub_0800E39C(struct Struct0800EE2C *p)
{
    p->unkF8++;
    p->unkF9 = 0;
}

#ifdef NONMATCHING
void sub_0800E3B0(u32 a)
{
    s32 fill;
    u8 v;

    if (a != 0) {
        gTextbox.unk109 ^= 1;
        a = 2;
    }
    fill = -1;
    CpuFastSet(&fill, gUnknown_02002490, 0x010001A0);
    sub_0800EB08(gTextbox.unk109);
    v = gTextbox.unk109 ? 204 : 152;
    (&gTextbox.unkD4)[a] = v;
    (&gTextbox.unkD4)[a + 1] = v + 1;
    gTextbox.filler5B[0] = 0;
    sub_0800DFC4(&gTextbox, ((u8 *)&gTextbox)[255] | 64);
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E3B0.inc\"");
#endif
#ifdef NONMATCHING
void sub_0802C974(u8, u8);

void sub_0800E430(void)
{
    u8 *r;
    u16 *p, *q, *next;
    s32 rows, i;

    r = &gUnknown_020309A0[gUnknown_03000420[3] * 8];
    if (r[1] != 0) {
        r[1] = 0;
        p = (u16 *)((gUnknown_03000420[3] << 11) + &gBG0Buffer[r[5] * 64]);
        rows = 20 - r[5];
        do {
            next = p + 32;
            rows--;
            q = p + 21;
            do
                *q = 0;
            while ((s32)--q >= (s32)p);
            p = next;
        } while (rows > 0);
        sub_0802C934();
    }
    r = &gUnknown_02030990[gUnknown_03000420[3] * 8];
    if (r[1] != 0) {
        r[1] = 0;
        p = (u16 *)((gUnknown_03000420[3] << 11) + &gBG0Buffer[(r[5] * 32 + r[4]) * 2]);
        rows = r[7] + 2;
        do {
            next = p + 32;
            rows--;
            for (i = 0; i < r[6] + 2; i++)
                *p++ = 0;
            p = next;
        } while (rows > 0);
        sub_0802C974(r[5], r[7]);
        sub_0802C934();
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E430.inc\"");
#endif

#ifdef NONMATCHING
u32 sub_0800E4EC(s32 d)
{
    u32 clamped = 0;

    gUnknown_0202A5E0.unk4_0 += d;
    if (gUnknown_0202A5E0.unk4_0 <= 17) {
        gUnknown_0202A5E0.unk4_0 = 17;
        clamped = 1;
    } else if (gUnknown_0202A5E0.unk4_0 > 19) {
        gUnknown_0202A5E0.unk4_0 = 20;
        clamped = 1;
    }
    gUnknown_020309B0[gUnknown_03000420[3] * 8 + 5] = gUnknown_0202A5E0.unk4_0;
    gUnknown_020309B0[gUnknown_03000420[3] * 8 + 7] = 20 - gUnknown_0202A5E0.unk4_0;
    gUnknown_020309B0[gUnknown_03000420[3] * 8 + 1] = 1;
    return clamped;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E4EC.inc\"");
#endif

#ifdef NONMATCHING
struct Window8 { u8 unk0; u8 unk1; u8 unk2; u8 unk3; u8 unk4; u8 unk5; u8 unk6; s8 unk7; };
extern u8 gUnknown_0202D5D0[];
void sub_0800E5EC(s8, u16 *);
void sub_0800E63C(u16 *, u8);

void sub_0800E570(void)
{
    struct Window8 *w = &((struct Window8 *)gUnknown_020309B0)[gUnknown_03000420[3]];
    u16 *p;
    s8 n;

    if (w->unk1 != 0) {
        p = (u16 *)(gUnknown_0202D5D0 + (gUnknown_03000420[3] << 11));
        n = w->unk7;
        sub_0800E5EC(n, p);
        p += 2;
        switch (n) {
        case 3:
            sub_0800E63C(p, 1);
            p -= 32;
        case 2:
            sub_0800E63C(p, 0);
        }
        ((struct Window8 *)gUnknown_020309A0)[gUnknown_03000420[3]] = ((struct Window8 *)gUnknown_020309B0)[gUnknown_03000420[3]];
        ((struct Window8 *)gUnknown_020309B0)[gUnknown_03000420[3]].unk1 = 0;
        sub_0802C934();
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E570.inc\"");
#endif
// Draws an n-row frame top into tilemap p (rows go up by 32 tiles)
void sub_0800E5EC(s8 n, u16 *p)
{
    u16 *q;
    u16 t;

    switch (n) {
    case 3:
        p[0] = 101;
        p[1] = 102;
        p[21] = 105;
        p -= 32;
    case 2:
        p[0] = 99;
        p[1] = 100;
        p[21] = 105;
        p -= 32;
    case 1:
        p[0] = 0x467;
        t = 103;
        q = p + 19;
        do
            q[1] = t;
        while ((s32)--q >= (s32)p); /* matching: signed pointer compare */
        p[21] = 104;
    }
}

// Fills one 19-tile row for file n: tiles b, b+2, ... with high bytes from its name, or blank (15)

struct View0202A5E0 { u8 pad[100]; u8 names[4][28]; u8 unkD4[4]; };

void sub_0800E63C(u16 *p, u8 n)
{
    s32 count = 19;
    u16 b = ((struct View0202A5E0 *)&gUnknown_0202A5E0)->unkD4[n];
    u8 j;

    if (b == 0) {
        do
            *p++ = 15;
        while (--count != 0);
    } else {
        j = 0;
        do {
            *p++ = (((struct View0202A5E0 *)&gUnknown_0202A5E0)->names[n][j++] << 8) | b;
            b += 2;
        } while (--count != 0);
    }
}



void sub_0800E69C(u32 a)
{
    gUnknown_02000010.unk0.asNotBitfield.unk0 = gTextbox.unk0 = a;
}

#ifdef NONMATCHING
struct TextboxDims { u8 pad[3]; u8 x : 5; u8 : 3; u8 y : 5; u8 : 3; u8 w : 5; u8 h : 3; };
extern u8 gUnknown_0202E154;

// Grows or shrinks the text window by d steps (0..8) and recomputes its centred rectangle
u32 sub_0800E6B0(s32 d)
{
    u32 clamped = 0;
    s8 *n = &gTextbox.unk10D;
    struct TextboxDims *t;
    u8 *w;
    s32 k;

    *n += d;
    if (*n <= 0) {
        *n = 0;
        clamped = 1;
    } else if (*n > 7) {
        *n = 8;
        clamped = 1;
    }
    w = (u8 *)&gUnknown_020309C0 + gUnknown_03000420[3] * 8;
    t = (struct TextboxDims *)&gTextbox;
    if (gTextbox.unk10D != 0) {
        k = gTextbox.unk10D;
        w[6] = (t->w * 2 * k) >> 4;
        if (w[6] & 1)
            w[6]++;
        w[4] = t->x + (t->w >> 1) - (w[6] >> 1);
        w[7] = (t->h * 2 * k) >> 4;
        if (w[7] & 1)
            w[7]++;
        w[5] = t->y + (t->h >> 1) - (w[7] >> 1);
    } else {
        w[5] = 0xFF;
        w[4] = -1;
        w[7] = -1;
        w[6] = -1;
    }
    w[2] = gUnknown_0202E154;
    w[1] = gUnknown_0202E154;
    return clamped;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E6B0.inc\"");
#endif
#ifdef NONMATCHING
void sub_0800E80C(u16 *, s16, s16, u16);
void sub_0800E78C(void)
{
    u8 *w;

    if (gTextbox.unk10D > 0) {
        w = (u8 *)&gUnknown_020309C0 + gUnknown_03000420[3] * 8;
        sub_0800E80C((u16 *)((gUnknown_03000420[3] << 11) + &gBG0Buffer[(w[5] * 32 + w[4]) * 2]),
                     w[6], w[7], (gTextbox.unk2_6 << 12) | 144);
        sub_0800E950();
        sub_0800EA38();
        sub_0800EAA4();
        ((struct U32Pair *)gUnknown_02030990)[gUnknown_03000420[3]] = *(struct U32Pair *)w;
        sub_0802C934();
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E78C.inc\"");
#endif
#ifdef NONMATCHING
// Draws a w x h window frame at p from tiles t (corner), t+1/t+2 (top edge), t+3/t+4 (side edge);
// the bottom and right sides are the same tiles flipped (0x800 vertical, 0x400 horizontal)
void sub_0800E80C(u16 *p, s16 w, s16 h, u16 t)
{
    u16 *q = p;
    u16 *b = p + h * 32 + 32;
    u16 n;

    *q++ = t;
    *b++ = t | 0x800;
    if (w > 0) {
        *q++ = t + 1;
        *b++ = (t + 1) | 0x800;
        for (n = w - 2; (s16)n-- > 0;) {
            *q++ = t + 2;
            *b++ = (t + 2) | 0x800;
        }
        *q++ = (t + 1) | 0x400;
        *b++ = (t + 1) | 0xC00;
    }
    *q = t | 0x400;
    *b = t | 0xC00;
    p += 32;
    q += 32;
    if (h > 0) {
        *p = t + 3;
        *q = (t + 3) | 0x400;
        p += 32;
        q += 32;
        for (n = h - 2; (s16)n-- > 0;) {
            *p = t + 4;
            *q = (t + 4) | 0x400;
            p += 32;
            q += 32;
        }
        *p = (t + 3) | 0x800;
        *q = (t + 3) | 0xC00;
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E80C.inc\"");
#endif

#ifdef NONMATCHING
extern u8 gUnknown_0202D112[];
extern u8 gUnknown_0201EEC4[];
extern u8 gUnknown_0201EE54[];

// Redraws the text window rows: blank rows get tile 15, others tiles b, b+2, ... over the row's text
void sub_0800E950(void)
{
    u8 *w = (u8 *)&gUnknown_020309C0 + gUnknown_03000420[3] * 8;
    s32 rows;
    u16 *p;
    s32 r;
    u8 n;
    s8 i;
    u16 b;

    if (w[6] == 0 || w[7] == 0)
        return;
    rows = w[7];
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D112 + (w[5] * 32 + w[4]) * 2);
    r = (4 - rows) / 2;
    do {
        n = w[6];
        p += 32;
        if (gUnknown_0201EEC4[r] == 0) {
            u16 *q = p;
            do
                *q++ = 15;
            while ((s8)--n > 0);
        } else {
            i = 0;
            b = gUnknown_0201EEC4[r];
            do {
                p[i] = (gUnknown_0201EE54[r * 28 + i] << 8) | b;
                i++;
                b += 2;
            } while ((s8)--n > 0);
        }
        r++;
    } while (--rows != 0);
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800E950.inc\"");
#endif
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EA38.inc\"");
#ifdef NONMATCHING
struct Window0800EAA4 { u8 unk0[4]; u8 x; u8 y; u8 w; u8 h; };
void sub_0800EAA4(void)
{
    struct Window0800EAA4 *w;

    if ((gTextbox.unk10C & 16) && gTextbox.unk10B == 2) {
        w = (struct Window0800EAA4 *)&gUnknown_020309C0 + gUnknown_03000420[3];
        *(u16 *)((u8 *)&((u16 *)gBG0Buffer)[w->y * 32 + w->x] + (gUnknown_03000420[3] << 11) + ((w->h + 1) * 32 - 2 + w->w) * 2) = 151;
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EAA4.inc\"");
#endif

void sub_0800EB08(u32 n)
{
    switch (n)
    {
    case 0:
        sub_080009F4((void *)0x0600D300, (u32)gUnknown_02002490, 0x680);
        break;
    case 1:
        sub_080009F4((void *)0x0600D980, (u32)gUnknown_02002490, 0x680);
        break;
    case 2:
        sub_080009F4((void *)0x0600CD40, (u32)gUnknown_02002B90, 0x4C0);
        break;
    }
}
#ifdef NONMATCHING
void sub_0800EB50(u8 *p, u32 k)
{
    if (p[270] != (k | 0x80)) {
        p[270] = k | 0x80;
        if (p[27] != 2) {
            sub_080009F4((void *)0x0600D200, (u32)(gUnknown_03000030 + ((k << 8) + 0xAE6FC)), 256);
        } else {
            sub_080009F4((void *)0x0600CCE0, (u32)(gUnknown_03000030 + 0xAEAFC), 96);
            sub_080009F4((void *)0x0600CC60, (u32)(gUnknown_03000030 + ((k << 7) + 0xAEB5C)), 128);
        }
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EB50.inc\"");
#endif


void sub_0800EBD4(struct Struct0800EE2C *p)
{
    sub_0800EC08(p->unk8[0], p->unkD8[0]);
    sub_0800EC08(p->unk8[1], p->unkD8[1]);
    sub_0800EC08(p->unk8[2], p->unkD8[2]);
    sub_0800EC08(p->unk8[3], p->unkD8[3]);
}


extern u32 gUnknown_0202E150;

// Writes n (clamped to 9999999) as decimal ASCII into s; returns the digit count
u32 sub_0800EC08(u32 n, u8 *s)
{
    if (n > 999999) {
        if (n > 9999999)
            n = 9999999;
        gUnknown_0202E150 = 7;
    } else if (n > 99999) {
        gUnknown_0202E150 = 6;
    } else if (n > 9999) {
        gUnknown_0202E150 = 5;
    } else if (n > 999) {
        gUnknown_0202E150 = 4;
    } else if (n > 99) {
        gUnknown_0202E150 = 3;
    } else if (n > 9) {
        gUnknown_0202E150 = 2;
    } else {
        gUnknown_0202E150 = 1;
    }
    switch (gUnknown_0202E150) {
    case 7:
        *s++ = (n % 10000000) / 1000000 | '0';
    case 6:
        *s++ = (n % 1000000) / 100000 | '0';
    case 5:
        *s++ = (n % 100000) / 10000 | '0';
    case 4:
        *s++ = (n % 10000) / 1000 | '0';
    case 3:
        *s++ = (n % 1000) / 100 | '0';
    case 2:
        *s++ = (n % 100) / 10 | '0';
    }
    s[0] = n % 10 | '0';
    s[1] = 0;
    return gUnknown_0202E150;
}


u32 sub_0800ED7C(struct Struct0800EE2C *p, u16 id)
{
    u8 *t;

    p->unk6 = id;
    t = gUnknown_08427444[gGameLanguage];
    t += ((u32 *)t)[id >> 8];
    return sub_0800EDB8(p, t + ((u32 *)t)[(u8)id]);
}


u32 sub_0800EDB8(struct Struct0800EE2C *p, u8 *v)
{
    if (p->unk0 != 0)
    {
        if (p->unk2 > 6)
            return 0;
        p->unk2++;
    }
    p->unk20[p->unk2] = v;
    p->unk0 = 1;
    return 1;
}

asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EDE4.inc\"");

u32 sub_0800EDF0(u8 *p)
{
    if (p[2] == 0)
    {
        p[0] = 0;
        return 0;
    }
    p[2]--;
    return 1;
}

asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EE08.inc\"");

u32 sub_0800EE2C(struct Struct0800EE2C *p)
{
    if ((p->unk0 | p->unk2) == 0)
        return 0;
    return *p->unk20[p->unk2]++;
}


extern const u32 gUnknown_08427460[];

// Glyph address for character c: bits 8-10 pick the font bank, bits 0-7 the glyph (64 bytes each)
const u8 *sub_0800EE50(u16 c)
{
    s32 bank = (c >> 8) & 7;
    u16 idx = (u8)c;

    switch (bank) {
    case 1:
        if (gGameLanguage != 0 && idx > 128)
            bank = 0;
        break;
    case 3:
    case 4:
        idx <<= 1;
        break;
    }
    return gUnknown_03000030 + gUnknown_08427460[bank] + idx * 64;
}

asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EEA8.inc\"");
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EEE0.inc\"");
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EF14.inc\"");
#ifdef NONMATCHING
struct Mask0202E158 { u8 unk0; u8 lo; u8 hi; u8 n; u32 mask; };
extern struct Mask0202E158 gUnknown_0202E158;
extern u32 gUnknown_0202E160[32];
u8 sub_0800F190(u32);
s32 sub_0800B830(s32);
void sub_0800F0A0(struct Struct0800EE2C *, const void *);

// Draws an 8x8 4bpp glyph at the reader's pixel column unk3: trims empty nibble columns (sub_0800F190),
// shifts it into place and splits it across two tiles when it crosses a tile edge
void sub_0800EF34(struct Struct0800EE2C *p, const u32 *glyph)
{
    s8 d;
    u8 s, s2, c, mode;
    u8 i;
    u32 *out;

    if (p->unk2 <= p->unk3)
        return;
    if (sub_0800F190(*glyph) == 2)
        return;
    d = gUnknown_0202E158.lo - (p->unk3 & 7);
    if (d >= 0) {
        mode = d != 0;
    } else {
        d = sub_0800B830(d);
        mode = (p->unk3 & 7) + gUnknown_0202E158.n > 8 ? 3 : 2;
    }
    switch (mode) {
    case 1:
        s = (u8)d << 2;
        out = gUnknown_0202E160;
        for (i = 16; i != 0; i--)
            *out++ = (*glyph++ & gUnknown_0202E158.mask) >> s;
        glyph = gUnknown_0202E160;
        break;
    case 2:
        s = (u8)d << 2;
        out = gUnknown_0202E160;
        for (i = 16; i != 0; i--)
            *out++ = (*glyph++ & gUnknown_0202E158.mask) << s;
        glyph = gUnknown_0202E160;
        break;
    case 3:
        c = 8 - (p->unk3 & 7);
        s2 = (u8)(c + gUnknown_0202E158.lo) << 2;
        gUnknown_0202E158.n -= c;
        s = (u8)d << 2;
        out = gUnknown_0202E160;
        for (i = 16; i != 0; i--) {
            out[0] = (*glyph & gUnknown_0202E158.mask) << s;
            out[16] = (*glyph++ & gUnknown_0202E158.mask) >> s2;
            out++;
        }
        sub_0800F0A0(p, gUnknown_0202E160);
        glyph = gUnknown_0202E160 + 16;
        p->unk3 = (p->unk3 + 7) & ~7;
        break;
    }
    sub_0800F0A0(p, glyph);
    p->unk3 += gUnknown_0202E158.n;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800EF34.inc\"");
#endif
#ifdef NONMATCHING
extern const u8 *const gUnknown_08427474[];

// Blits an 8x16 4bpp glyph (16 rows of 4 bytes) into the reader's buffer at pixel column unk3, mapping
// each nibble through colour table unk4 (low nibbles at [0..15], high at [16..31])
void sub_0800F0A0(struct Struct0800EE2C *p, const void *glyph)
{
    const u8 *src = glyph;
    const u8 *map = gUnknown_08427474[(u8)p->unk4];
    u8 *dst = (u8 *)p->unk8[0] + (p->unk3 >> 3) * 64;
    u8 off = p->unk3 & 7;
    u8 i, k, b;
    u8 half, odd, start;

    if (off == 0) {
        for (i = 64; i != 0; i--) {
            b = *src++;
            *dst++ = map[b & 15] | map[16 + ((b >> 4) & 15)];
        }
        return;
    }
    half = off >> 1;
    odd = off & 1;
    start = (off + 1) & 14;
    for (i = 16; i != 0; i--) {
        src += half;
        dst += half;
        if (odd) {
            b = *src++;
            *dst = (*dst & 15) | map[16 + ((b >> 4) & 15)];
            dst++;
        }
        for (k = start; k <= 7; k += 2) {
            b = *src++;
            *dst++ = map[b & 15] | map[16 + ((b >> 4) & 15)];
        }
    }
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F0A0.inc\"");
#endif
#ifdef NONMATCHING

// Counts the all-ones nibbles at both ends of m; returns 2 if m is all ones, 1 if none are, else 0
u8 sub_0800F190(u32 m)
{
    u32 k;
    u32 i;

    gUnknown_0202E158.lo = 0;
    gUnknown_0202E158.hi = 0;
    gUnknown_0202E158.unk0 = 0;
    gUnknown_0202E158.n = 8;
    gUnknown_0202E158.mask = -1;
    if (m == -1)
        return gUnknown_0202E158.unk0 = 2;
    k = 15;
    if ((m & k) == k) {
        i = 0;
        do {
            i++;
            k <<= 4;
        } while ((k & m) == k);
        gUnknown_0202E158.lo = i;
    }
    k = 0xF0000000;
    if ((m & k) == k) {
        i = gUnknown_0202E158.hi;
        do {
            i++;
            k >>= 4;
        } while ((k & m) == k);
        gUnknown_0202E158.hi = i;
    }
    i = gUnknown_0202E158.lo + gUnknown_0202E158.hi;
    if (i == 0)
        return gUnknown_0202E158.unk0 = 1;
    gUnknown_0202E158.n -= i;
    gUnknown_0202E158.mask = (-1 << (gUnknown_0202E158.lo * 4)) & ((u32)-1 >> (gUnknown_0202E158.hi * 4));
    return 0;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F190.inc\"");
#endif
#ifdef NONMATCHING
// Next character of the text: handles control codes 0-15 (0 end/next string, 2 inline table string,
// 3 jump to text id, 7 colour, 12 inline string, 13-15 extended character sets); returns the character
// (> 0xFF for extended ones) or 2 for a bad table index
u16 sub_0800F22C(struct Struct0800EE2C *p)
{
    u16 c;
    u16 n;
    u16 skip;
    u8 i;
    u8 b;
    u8 *buf;

next:
    skip = 0;
    c = (u8)sub_0800EE2C(p);
    switch (c) {
    case 0:
        if (sub_0800EDF0((u8 *)p))
            goto next;
        break;
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
        break;
    case 7:
        *(u8 *)&p->unk4 = sub_0800EE2C(p) & 127;
        break;
    case 2: {
        s32 k = sub_0800EE2C(p) & 127;
        u8 *t;

        *(u8 *)&p->unk4 = k;
        if (k > 3 || k < 0)
            return 2;
        t = (u8 *)p->unk8[1];
        if (t != NULL) {
            if (p->unk3 != 0)
                t += k * 8;
            sub_0800EDB8(p, t);
        }
        goto next;
    }
    case 3:
        c = (sub_0800EE2C(p) & 127) | (p->unk6 & 0xFF00);
        p->unk0 = 0;
        p->unk2 = 0;
        sub_0800ED7C(p, c);
        goto next;
    case 12:
        b = sub_0800EE2C(p);
        skip = b >> 4;
        n = (b & 15) - 1;
        buf = (u8 *)&p->unk8[2];
        i = 0;
        while (n != 0xFFFF) {
            buf[i++] = sub_0800EE2C(p);
            n--;
        }
        buf[i] = 0;
        if (p->unk1 == 0)
            goto next;
        while ((s16)--skip != -1)
            sub_0800EE2C(p);
        sub_0800EDB8(p, buf);
        goto next;
    case 13:
        b = sub_0800EE2C(p);
        c = ((b & 0xC0) << 6) | 0x400 | (b & 63);
        break;
    case 14:
        c = (u8)sub_0800EE2C(p) | 0x300;
        break;
    case 15:
        c = (u8)sub_0800EE2C(p) | 0x100;
        if (c > 0x180)
            c &= 127;
        c += 256;
        break;
    default:
        c += 256;
        break;
    }
    if (skip)
        goto next;
    return c;
}
#else
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F22C.inc\"");
#endif
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F408.inc\"");
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F4C4.inc\"");
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F68C.inc\"");
asm(".include \"asm/non_matching/rom_0800D4F0/sub_0800F76C.inc\"");

// Draws glyph c (two halves above 0x2FF) into the text reader; returns how far unk3 advanced
u16 sub_0800F7B4(u16 c, struct Struct0800EE2C *p)
{
    u8 *glyph;
    u8 start;

    if (p->unk2 <= p->unk3)
        return 0;
    glyph = (u8 *)sub_0800EE50(c);
    start = p->unk3;
    if (c > 0x2FF) {
        sub_0800EF34(p, glyph);
        glyph += 64;
    }
    sub_0800EF34(p, glyph);
    if (p->unk3 > p->unk2)
        p->unk3 = p->unk2;
    return p->unk3 - start;
}

