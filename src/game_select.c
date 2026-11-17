#include "gba/gba.h"
#include "global.h"
#include "entity.h"

void sub_0803074C(void)
{
    u8 i;
    u16 *r3;

    gUnknown_08427948[gUnknown_03005050]();
    if ((gUnknown_03000948.unk0 & 0x1F) == 0)
        gUnknown_030004A0.bgConfig[2].hofs--;
    gUnknown_02016D60.unk10--;
    gUnknown_02016D60.unk11--;
    gUnknown_02016D60.unk12--;
    gUnknown_02016D60.unk13--;
    if ((u8)gUnknown_02016D60.unk10 == 0)
    {
        gUnknown_02016D60.unk10 = 48;
        gUnknown_030004A0.bgConfig[3].hofs--;
    }
    if (gUnknown_02016D60.unk11 == 0)
    {
        gUnknown_02016D60.unk11 = 24;
        gUnknown_03000BE0.unk4--;
    }
    if (gUnknown_02016D60.unk12 == 0)
    {
        gUnknown_02016D60.unk12 = 12;
        gUnknown_03000BE0.unk8--;
    }
    if (gUnknown_02016D60.unk13 == 0)
    {
        gUnknown_02016D60.unk13 = 7;
        gUnknown_03000BE0.unkC--;
    }
    r3 = &gUnknown_0202A0F0[gUnknown_03000204][0];
    for (i = 0; i < gUnknown_03000BE0.unk6; i++)
        *r3++ = gUnknown_030004A0.bgConfig[3].hofs;
    for (; i < gUnknown_03000BE0.unkA; i++)
        *r3++ = gUnknown_03000BE0.unk4;
    for (; i < gUnknown_03000BE0.unkE; i++)
        *r3++ = gUnknown_03000BE0.unk8;
    for (; i < 160; i++)
        *r3++ = gUnknown_03000BE0.unkC;
    gUnknown_03000BC0.src = &gUnknown_0202A0F0[gUnknown_03000204][1];
    if (gUnknown_02016D60.unk14 == 0)
    {
        gUnknown_030004A0.bgConfig[0].hofs = 88 - gUnknown_02016D60.unk20;
        gUnknown_030004A0.bgConfig[0].vofs = 56 - gUnknown_02016D60.unk22;
        gUnknown_030004A0.bgConfig[1].hofs = 88 - gUnknown_02016D60.unk24;
        gUnknown_030004A0.bgConfig[1].vofs = 56 - gUnknown_02016D60.unk26;
    }
    sub_08137AFC();
    sub_08000BAC();
    sub_0800099C();
}

void sub_080308C0(void)
{
    //if (gUnknown_02016D60.unk2_0 == 0 && gUnknown_02016D60.unk2_4 == 0 && gUnknown_02016D60.unk2_6 == 0)
    if (gUnknown_02016D60.unk0.asNotBitfield.unk2 == 0)
        gUnknown_03000520.unkC = 0x0F0007E0;
    else
        gUnknown_03000520.unkC = 0xF000F100;
    gUnknown_03000520.unk7 = 0;
    sub_0800C1EC(64);
}

void sub_080308F8(void)
{
    if (gUnknown_03000520.unk0 == 0)
    {
        sub_0800BED8();
        *(u16 *)PLTT = 0x6739;
        gPaletteBuf2[0] = 0x6739;
        sub_080123BC();
        sub_0801239C();
        sub_0800C4E8();
        sub_08011418(unk3000000.unk4);
        sub_080681D0(&gUnknown_0200B250[unk3000000.unk4]);
        sub_0800B85C(gUnknown_0200B250[unk3000000.unk4].unk25);
        load_palette_from_gfx_group(22);
        load_gfx_group(28);
        gUnknown_030004A0.dispCnt = 0x1F40;
        gUnknown_030004A0.bgConfig[0].bgcnt = 0x1A40;
        gUnknown_030004A0.bgConfig[1].bgcnt = 0x1B41;
        gUnknown_030004A0.bgConfig[2].bgcnt = 0x5C46;
        gUnknown_030004A0.bgConfig[3].bgcnt = 0x5E47;
        gUnknown_02016D60.unk20 = 64;
        gUnknown_02016D60.unk22 = 24;
        gUnknown_02016D60.unk24 = 176;
        gUnknown_02016D60.unk26 = 136;
        gUnknown_030004A0.bldcnt = 0x3F42;
        gUnknown_030004A0.bldalpha = 0x0C04;
        gUnknown_02016D60.unk8 = sub_0804C8A8(2, 0, 0);
        gUnknown_02016D60.unkC = sub_0804C8A8(2, 1, 0);
        sub_0804C808(gUnknown_0813D838);
        gUnknown_03000BC0.unk0 = 1;
        gUnknown_03000BC0.dest = (void *)REG_ADDR_BG3HOFS;
        gUnknown_03000BC0.dmaCnt = 0xA2600001;
        gUnknown_03000BE0.unk0 = 1;
        gUnknown_02016D60.unk10 = 48;
        gUnknown_02016D60.unk11 = 24;
        gUnknown_02016D60.unk12 = 12;
        gUnknown_02016D60.unk13 = 7;
        gUnknown_03000BE0.unk6 = 80;
        gUnknown_03000BE0.unkA = 112;
        gUnknown_03000BE0.unkE = 128;
        gUnknown_02016D60.unk0.asNotBitfield.unk2 = 0;
        gUnknown_02016D60.unk4 = 14;
        gUnknown_02016D60.unk14 = 0;
        gUnknown_03000520.unkC = -1;
        sub_0800C0B0(2, 8);
        gUnknown_03005050++;
    }
}

void sub_08030A40(void)
{
    switch (gSubState)
    {
    case 0:
        gUnknown_02016D60.unk20 += 8;
        gUnknown_02016D60.unk24 -= 8;
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_02016D60.unk4 = 7;
            gSubState++;
        }
        break;
    case 1:
        gUnknown_02016D60.unk20 -= 8;
        gUnknown_02016D60.unk22 += 8;
        gUnknown_02016D60.unk24 += 8;
        gUnknown_02016D60.unk26 -= 8;
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_03005050 += 3;
            gSubState = 0;
            gUnknown_02016D60.unk20 = 104;
            gUnknown_02016D60.unk22 = 72;
            gUnknown_02016D60.unk24 = 136;
            gUnknown_02016D60.unk26 = 104;
            play_sound(0x020A);
            play_sound(0x800B0190);
            sub_0800C0B0(2, 8);
        }
        break;
    }
}

void sub_08030AE8(s16 a)
{
    struct Struct0201ED90_child *r4;

    switch (gSubState)
    {
    case 0:
        gUnknown_02016D60.unk4 = 4;
        gSubState++;
        // fall through
    case 1:
        gUnknown_02016D60.unk20 += a;
        gUnknown_02016D60.unk24 -= a;
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_02016D60.unk4 = 4;
            gSubState++;
        }
        break;
    case 2:
        gUnknown_02016D60.unk20 -= a;
        gUnknown_02016D60.unk22 += a;
        gUnknown_02016D60.unk24 += a;
        gUnknown_02016D60.unk26 -= a;
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_02016D60.unk4 = 4;
            gSubState++;
        }
        break;
    case 3:
        gUnknown_02016D60.unk20 += a;
        gUnknown_02016D60.unk24 -= a;
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_03005050 = 4;
            gSubState = 0;
            //if (gUnknown_02016D60.unk2_0 == 0 && gUnknown_02016D60.unk2_4 == 0 && gUnknown_02016D60.unk2_6 == 0)
            if (gUnknown_02016D60.unk0.asNotBitfield.unk2 == 0)
            {
                gUnknown_0200B310 |= 0xFFFFF100;
                gUnknown_030004A0.bgConfig[0].bgcnt = 0x1A00;
                gUnknown_030004A0.bgConfig[1].bgcnt = 0x1B01;
                gUnknown_030004A0.bldcnt = 0x3F42;
                r4 = gUnknown_02016D60.unkC;
                r4->unk1D_6 = 0;
                r4->unk1F_6 = 0;
                r4 = gUnknown_02016D60.unk8;
                r4->unk1D_6 = 1;
                r4->unk1F_6 = 1;
            }
            else
            {
                gUnknown_0200B310 |= 0xFFFF07E0;
                gUnknown_030004A0.bgConfig[0].bgcnt = 0x1A01;
                gUnknown_030004A0.bgConfig[1].bgcnt = 0x1B00;
                gUnknown_030004A0.bldcnt = 0x3F41;
                r4 = gUnknown_02016D60.unkC;
                r4->unk1D_6 = 1;
                r4->unk1F_6 = 1;
                r4 = gUnknown_02016D60.unk8;
                r4->unk1D_6 = 0;
                r4->unk1F_6 = 0;
            }
        }
        break;
    }
}

void sub_08030C70(void)
{
    sub_08030AE8(8);
}

void sub_08030C7C(void)
{
    sub_08030AE8(-8);
}

void sub_08030C8C(void)
{
    if (gNewKeys & DPAD_ANY)
    {
        gUnknown_03005050 = (gUnknown_02016D60.unk0.asNotBitfield.unk2 == 0) ? 2 : 3;
        gUnknown_02016D60.unk0.asNotBitfield.unk2 ^= 1;
        play_sound(66);
    }
    else if (gNewKeys & (START_BUTTON | A_BUTTON))
    {
        gUnknown_03005050++;
        gUnknown_02016D60.unk20 = 120;
        gUnknown_02016D60.unk24 = 120;
        gUnknown_02016D60.unk22 = 80;
        gUnknown_02016D60.unk26 = 80;
        gUnknown_02016D60.unk4 = 8;
        if (gUnknown_02016D60.unk0.asNotBitfield.unk2 == 0)
        {
            gUnknown_03000520.unkC = 0xF000F000;
        }
        else
        {
            gUnknown_03000520.unkC = 0x0F000F00;
            sub_0800C4E8();
        }
        sub_0800C0B0(2, 16);
        play_sound(62);
        play_sound(0x80040002);
    }
}

void sub_08030D34(void)
{
    switch (gSubState)
    {
    case 0:
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_02016D60.unk4 = 8;
            sub_0800C0B0(2, 16);
            gSubState++;
        }
        break;
    case 1:
        gUnknown_02016D60.unk4--;
        if (gUnknown_02016D60.unk4 == 0)
        {
            gUnknown_03000520.unkC = -1;
            sub_0800C0B0(3, 8);
            gUnknown_03000520.unk7 = 31;
            gSubState++;
        }
        break;
    case 2:
        if (gUnknown_03000520.unk0 == 0)
        {
            if (gUnknown_02016D60.unk0.asNotBitfield.unk2 == 0)
            {
                gUnknown_03000BE0.unk0 = 0;
                gUnknown_03000BC0.unk0 = 0;
                set_main_state(13);
            }
            else if (sub_08000A40(gUnknown_03000834 & 0xF) <= 1)
            {
                gUnknown_03005050++;
                gSubState = 0;
            }
            else
                sub_08030E0C();
        }
        break;
    }
}

void sub_08030E0C(void)
{
    sub_0800BED8();
    *(u16 *)PLTT = 0x6739;
    gPaletteBuf2[0] = 0x6739;
    gUnknown_03000BE0.unk0 = 0;
    sub_0801239C();
    sub_080123BC();
    sub_0800D6F4();
    sub_0800D744();
    set_main_state(9);
}

// Probably not part of game_select

void sub_08030E4C(void)
{
    sub_0800F4C4(0x0403, gUnknown_08427964);
    CpuFastCopy(gBG0Buffer, gBG0Buffer + 0x800, 384);
}

void sub_08030E74(void)
{
    gUnknown_0842797C[gSubState]();
}

// Functions not decompiled yet are in asm/non_matching/game_select/, one .inc each (tools/asm_split.py from asm/game_select.s).

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/game_select/sub_08030E94.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08030F64.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08030FE0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080310B4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080310DC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031188.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080311A0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080311D0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031324.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080313E0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031448.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031584.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803178C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080317F4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031884.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803194C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031AA0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031B4C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031B90.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031BCC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031C00.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031F08.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031F20.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031F7C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08031FC0.inc\"");

void sub_08031FD8(void)
{
    gUnknown_08427A10[gUnknown_03005050]();
}

asm(".include \"asm/non_matching/game_select/sub_08031FF8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032138.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080321D0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032220.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032264.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803253C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080327B4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032868.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032888.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080328F8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032A70.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032AB8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032B18.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032B7C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032D88.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032DD4.inc\"");

void sub_08032E08(void)
{
    gUnknown_08427A4C[gUnknown_03005050]();
}

asm(".include \"asm/non_matching/game_select/sub_08032E28.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032EE0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08032F50.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803306C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033188.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033364.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033398.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080333D0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033464.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080335F8.inc\"");

void sub_08033618(void)
{
}

asm(".include \"asm/non_matching/game_select/sub_0803361C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803364C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803367C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080336AC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080336E4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080336F0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033728.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033760.inc\"");

void sub_0803377C(void)
{
}


void sub_08033780(struct Entity *this)
{
    gUnknown_0813D900[this->form](this);
}


void sub_08033798(struct Entity *this)
{
    gUnknown_0813D92C[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080337B0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033818.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080338C0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080338EC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033940.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033984.inc\"");

void sub_080339CC(struct Entity *this)
{
    gUnknown_0813D960[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080339E4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033A5C.inc\"");

void sub_08033AA8(void)
{
}


void sub_08033AAC(struct Entity *this)
{
    gUnknown_0813D96C[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033AC4.inc\"");

void sub_08033AEC(void)
{
    GetNextFrame();
}


void sub_08033AF8(struct Entity *this)
{
    gUnknown_0813D974[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033B10.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033B4C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033BB0.inc\"");

void sub_08033BDC(struct Entity *this)
{
    gUnknown_0813D980[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033BF4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033C1C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033C78.inc\"");

void sub_08033CD0(struct Entity *this)
{
    gUnknown_0813D990[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033CE8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033D20.inc\"");

void sub_08033D44(struct Entity *this)
{
    gUnknown_0813D998[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033D5C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033D84.inc\"");

void sub_08033DAC(struct Entity *this)
{
    gUnknown_0813D9A0[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033DC4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033DFC.inc\"");

void sub_08033E48(struct Entity *this)
{
    gUnknown_0813D9A8[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08033E60.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033E88.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033EAC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033EEC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08033F60.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034008.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034030.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034058.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080340A8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080340CC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034120.inc\"");

void sub_0803413C(struct Entity *this)
{
    gUnknown_08427A8C[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034154.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080341A8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034238.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034248.inc\"");

void sub_08034278(struct Entity *this)
{
    gUnknown_0813DADC[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034290.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034308.inc\"");

void sub_0803432C(struct Entity *this)
{
    gUnknown_08427A98[this->form](this);
}


void sub_08034344(struct Entity *this)
{
    gUnknown_08427AB0[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_0803435C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080343E8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034414.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080344A4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080344E8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803454C.inc\"");

void sub_080345CC(struct Entity *this)
{
    gUnknown_08427AD8[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080345E4.inc\"");

void sub_08034674(void)
{
}


void sub_08034678(struct Entity *this)
{
    gUnknown_08427AF0[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034690.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080346F8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803472C.inc\"");

void sub_0803478C(struct Entity *this)
{
    gUnknown_08427AF8[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080347A4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080347F4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034824.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034860.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080348A8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080348D0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080348F0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034920.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034984.inc\"");

void sub_080349D8(struct Entity *this)
{
    gUnknown_08427B04[this->unk15](this);
}

asm(".include \"asm/non_matching/game_select/sub_080349F0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034A18.inc\"");

void sub_08034A40(void)
{
}


void sub_08034A44(void)
{
}


void sub_08034A48(struct Entity *this)
{
    gUnknown_08427B0C[this->unk15](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034A60.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034ACC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034AF0.inc\"");

void sub_08034B64(void)
{
    GetNextFrame();
}


void sub_08034B70(struct Entity *this)
{
    gUnknown_08427B1C[this->unk15](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034B88.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034B9C.inc\"");

void sub_08034BD4(struct Entity *this)
{
    gUnknown_08427B24[this->unk15](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034BEC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034C28.inc\"");

void sub_08034C44(struct Entity *this)
{
    gUnknown_0813DCA8[this->unk14](this);
}


void sub_08034C5C(struct Entity *this)
{
    struct MapData *m;

    this->unk14 = 1;
    m = (struct MapData *)sub_08015DC0(this->unk50);
    this->unk7C.p = &m->unk4[((this->x.HALF.HI - gUnknown_03000450.unk18) >> 4) |
                             (((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6)];
    this->unk78.h = *this->unk7C.p;
}


void sub_08034CA0(struct Entity *this)
{
    struct Entity *e;

    if (this->unk78.h != *this->unk7C.p)
    {
        e = sub_0804C8A8(0, this->form, 1);
        if (e != NULL)
            sub_0803D3D0(this, e);
        DeleteThisEntity(this);
    }
}


void sub_08034CD4(struct Entity *this)
{
    gUnknown_08427B2C[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034CEC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034D10.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034D88.inc\"");

void sub_08034E84(struct Entity *this)
{
    gUnknown_08427B34[this->form](this);
}


void sub_08034E9C(struct Entity *this)
{
    gUnknown_08427B3C[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034EB4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034EFC.inc\"");

void sub_08034F60(struct Entity *this)
{
    gUnknown_08427B44[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08034F78.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08034FE0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080350B8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080351E0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803522C.inc\"");

void sub_08035304(void)
{
}


void sub_08035308(struct Entity *this)
{
    gUnknown_08427B58[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08035320.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035338.inc\"");

void sub_08035374(struct Entity *this)
{
    gUnknown_08427B60[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_0803538C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080353F0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035418.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080354A4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080354EC.inc\"");

void sub_080355C4(struct Entity *this)
{
    gUnknown_0813DDF8[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080355DC.inc\"");

void sub_08035610(void)
{
    GetNextFrame();
}


void sub_0803561C(struct Entity *this)
{
    gUnknown_0813DE10[this->form](this);
}

asm(".include \"asm/non_matching/game_select/sub_08035634.inc\"");

void sub_080356C4(struct Entity *this)
{
    gUnknown_0813DE20[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_080356DC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035710.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035748.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080357A4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080357D4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080358B0.inc\"");

void sub_08035948(struct Entity *this)
{
    gUnknown_0813DEDC[this->form](this);
}

asm(".include \"asm/non_matching/game_select/sub_08035960.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803597C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080359B8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080359C8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035A04.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035A38.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035A88.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035AF8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035B6C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035BE8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035C10.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035C34.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035C90.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035D88.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035DC4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035E08.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035E44.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035E8C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035EAC.inc\"");

void sub_08035ED4(struct Entity *this)
{
    gUnknown_0813DF38[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08035EEC.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035F6C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08035FB4.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803609C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036110.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036190.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080361C0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803630C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036334.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036354.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036394.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080363D8.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036424.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803644C.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080364EC.inc\"");

void sub_08036508(struct Entity *this)
{
    gUnknown_08427B74[this->unk14](this);
}

asm(".include \"asm/non_matching/game_select/sub_08036520.inc\"");
asm(".include \"asm/non_matching/game_select/sub_08036598.inc\"");
asm(".include \"asm/non_matching/game_select/sub_080365F0.inc\"");
asm(".include \"asm/non_matching/game_select/sub_0803662C.inc\"");
