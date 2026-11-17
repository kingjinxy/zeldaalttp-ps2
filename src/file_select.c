#include "gba/gba.h"
#include "global.h"
#include "entity.h"

#include "sounds.h"

void (*const gUnknown_0842748C[])(void) =
{
    sub_0800F9AC,
    sub_0800FDB0,
    sub_0800FDB4,
    sub_080103F8,
    sub_08010628,
    sub_08010834,
    sub_0800FAB4,
    sub_0800F868,
};

struct Struct0201ED90_alt
{
	u8 filler0[4];
	u16 unk4;
	u8 filler6[0xC-0x6];
	u8 *unkC;
	u8 filler10[0x15-0x10];
	u8 unk15;
	u8 filler16[1];
	u8 unk17;
	u8 unk18;
	u8 unk19;
	u8 filler1A[1];
	u8 unk1B;
	u8 filler1C[1];
	u8 unk1D;
	u8 unk1E;
	u8 unk1F;
	u8 unk20;
	s8 unk21;
	u8 filler22[0x27-0x22];
	u8 unk27;
};

// same address as gUnknown_02016D60, but fields have different types
extern struct Struct0201ED90_alt gUnknown_02016D60_alt;

void sub_0800F808(void)
{
	gUnknown_0842748C[gUnknown_03005050]();
	sub_0800F8B0();
	if (unk3000000.unk7 != gUnknown_02016D60_alt.unk27)
	{
		unk3000000.unk7 = gUnknown_02016D60_alt.unk27;
		sub_0800B85C(gUnknown_02016D60_alt.unk27);
		load_palette(gUnknown_02016D60_alt.unkC, 0, 32);
	}
	gUnknown_02016D60_alt.unk1B = 0;
	gUnknown_02016D60_alt.unk1D = 0;
	if (gUnknown_02016D60_alt.unk15 == 0)
	{
		sub_08137AFC();
		sub_08000BAC();
	}
}

void sub_0800F868(void)
{
	if (gUnknown_03000520.unk0 == 0)
	{
		sub_0800F97C(0);
		set_main_state(6);
	}
}

void sub_0800F888(u32 a)
{
	gUnknown_02016D60_alt.unk27 = (a < 3) ? gUnknown_0200B250[a].unk25 : 1;
}

extern u16 gUnknown_084274AC[];

extern u32 sub_0800099C(void);

void sub_0800F8B0(void)
{
	u8 *r4;

	if (gUnknown_02016D60_alt.unk17 == 255)
		return;
	if (gUnknown_02016D60_alt.unk17 != 0)
		gUnknown_02016D60_alt.unk17--;
	else
	{
		gUnknown_02016D60_alt.unk19--;
		if (gUnknown_02016D60_alt.unk19 == 0)
		{
			gUnknown_02016D60_alt.unk19 = 8;
			r4 = gUnknown_03000030 + gUnknown_084274AC[gUnknown_02016D60_alt.unk18++];
			if (((uintptr_t)r4 & 1) != 0)
			{
				gUnknown_02016D60_alt.unk18 = 0;
				gUnknown_02016D60_alt.unk17 = 16 + ((sub_0800099C() & 7) * 32);
			}
			else
			{
				CpuFastCopy(r4 + 0x1880, gUnknown_02016D60_alt.unkC + 480, 32);
				CpuFastCopy(r4 + 0x1780, gUnknown_02016D60_alt.unkC + 448, 32);
				CpuFastCopy(r4 + 0x1680, gUnknown_02016D60_alt.unkC + 416, 32);
				CpuFastCopy(r4 + 0x1580, gUnknown_02016D60_alt.unkC + 384, 32);
				load_palette(gUnknown_02016D60_alt.unkC + 384, 12, 4);
			}
		}
	}
}

void sub_0800F97C(int a)
{
	sub_0800BED8();
	sub_0801239C();
	sub_080123BC();
	gUnknown_030004A0.dispCnt = a | 0x40;
	gUnknown_030004A0.bgConfig[3].bgcnt = 0x1E0B;
	gUnknown_030004A0.bgConfig[3].vofs = 96;
}

void sub_0800F9AC(void)
{
	sub_0800F97C(0);
	sub_0800F888(-1);
	sub_0800B85C(1);
	load_gfx_group(21);
	load_palette_from_gfx_group(16);
	load_palette_from_gfx_group(17);
	play_sound(SOUND_BGM_FILE_SELECT);
	sub_0800C0B0(2, 8);
	do
	{
		sub_0800BEC4();
		gUnknown_02016D60_alt.unkC = sub_0800BD14(0x400);
	}
	while (gUnknown_02016D60_alt.unkC == 0);
	CpuFastCopy(gPaletteBuf2, gUnknown_02016D60_alt.unkC, 1024);
	sub_08011324();
	sub_08010DD8();
	sub_0800FA44(0);
	sub_0800FA44(128);
	unk3000000.unk4 = 0;
	gUnknown_02016D60_alt.unk18 = 0;
	gUnknown_02016D60_alt.unk19 = 60;
	gUnknown_02016D60_alt.unk17 = 60;
	gUnknown_03005050 = 2;
}

struct Struct0800EEA8
{
	u8 filler0[2];
	u8 unk2;
	u8 unk3;
	u8 filler4[4];
	void *unk8;
};

struct Struct0800EEA8 *sub_0800EEA8(void);

void sub_0800FA44(u16 a)
{
	struct Struct0800EEA8 *r5 = sub_0800EEA8();
	s16 r6;

	if (r5 != NULL)
	{
		r5->unk8 = gUnknown_02002490;
		r5->unk2 = 128;
		
		for (r6 = 128, a+= 256; r6 > 0; r6--)
		{
			sub_0800EF14(r5, sub_0800EE50(a));
			CpuFastCopy(gUnknown_02002490, (u8 *)VRAM + 0x4000 + ((u8)a * 64), 64);
			a++;
			r5->unk3 = 0;
		}
		sub_0800EEE0(r5);
	}
}

extern void (*gUnknown_084274CC[])(void);

void sub_0800FAB4(void)
{
	gUnknown_084274CC[gSubState]();
}

void sub_0800FAD4(void)
{
	struct Struct0200B250 *r4;
	u8 r1;
	u32 r0;

	sub_0800F97C(0);
	r4 = &gUnknown_0200B250[unk3000000.unk4];
	sub_0800B85C(r4->unk25);
	sub_080681D0(r4);
	r0 = sub_08010E04(unk3000000.unk4);
	gUnknown_02016D60_alt.unk20 = r0;
	r1 = gUnknown_02016D60_alt.unk1F = r4->unk0 & 0xF0;
	asm(""::"r"(r1 ^ r0));
	// This is hard to match. Compiler wants to use `bic` here instead  of `eor`/`and`.
	gUnknown_02016D60_alt.unk1E = (r1 ^ r0) & r0;
	if (gUnknown_02016D60_alt.unk1E == 0)
	{
		gUnknown_03005050 = 7;
		gSubState = 0;
	}
	else
	{
		gUnknown_02016D60_alt.unk21 = 3;
		gSubState = 1;
		CpuFastFill(0, (void *)VRAM, 0x20);
		CpuFastFill(0, (void *)(VRAM + 0xE000), 0x800);
		load_gfx_group(5);
		load_palette_from_gfx_group(12);
		gPaletteBuf2[0] = gPaletteBuf2[15];
		sub_0800C0B0(2, 8);
	}
}

extern u16 gUnknown_08137EB4[];
extern u8 gUnknown_08137E9C[];

void sub_0800FB9C(void)
{
	if (gUnknown_03000520.unk0 != 0)
		return;
	if (gUnknown_02016D60_alt.unk21 >= 0)
	{
		while (((gUnknown_02016D60_alt.unk1E >> (u8)gUnknown_02016D60_alt.unk21) & 0x10) == 0)
		{
			gUnknown_02016D60_alt.unk21--;
			if (gUnknown_02016D60_alt.unk21 < 0)
				break;
		}
	}
	if (gUnknown_02016D60_alt.unk21 < 0)
	{
		gUnknown_0200B250[unk3000000.unk4].unk0 |= gUnknown_02016D60_alt.unk20;
		sub_08011434(unk3000000.unk4);
		gUnknown_03005050 = 7;
		gSubState = 0;
		sub_0800C0B0(3, 8);
	}
	else
	{
		gUnknown_030004A0.dispCnt |= 0x100;
		gUnknown_030004A0.bgConfig[0].bgcnt = 0x1C00;
		gUnknown_02016D60_alt.unk4 = 300;
		gSubState = 2;
		CpuFastFill(0, gBG0Buffer, 0x800);
		sub_0800FD28();
		sub_0800F4C4(gUnknown_08137EB4[(u8)gUnknown_02016D60_alt.unk21], gUnknown_08137E9C);
		play_sound(32);
	}
}

void sub_0800FCA0(void)
{
	gUnknown_02016D60_alt.unk4--;
	switch (gUnknown_02016D60_alt.unk4)
	{
	case 0:
		gUnknown_02016D60_alt.unk21--;
		gSubState = 1;
		return;
	case 240:
		gUnknown_02016D60_alt.unk1F |= 0x10 << (u8)gUnknown_02016D60_alt.unk21;
		sub_0800FD28();
		play_sound(9);
		break;
	}
	//! why compare to a double here?
	if (gUnknown_02016D60_alt.unk4 < 150.0 && (gNewKeys & 11) != 0)
		gUnknown_02016D60_alt.unk4 = 1;
}

// Functions not decompiled yet are in asm/non_matching/file_select/, one .inc each (tools/asm_split.py from asm/file_select.s).

asm(".INCLUDE \"macro.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0800FD28.inc\"");

void sub_0800FDB0(void)
{
}


void sub_0800FDB4(void)
{
    gUnknown_084274D8[gSubState]();
}

asm(".include \"asm/non_matching/file_select/sub_0800FDD4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0800FEAC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0800FEE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010094.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080100E4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010104.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801017C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080101C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801022C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010270.inc\"");

void sub_080103F8(void)
{
    gUnknown_084274EC[gSubState]();
}

asm(".include \"asm/non_matching/file_select/sub_08010418.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010434.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080104F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080105E0.inc\"");

void sub_08010628(void)
{
    gUnknown_084274FC[gSubState]();
}

asm(".include \"asm/non_matching/file_select/sub_08010648.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010664.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010724.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080107D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080107F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010834.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010858.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080108CC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010AA4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010B30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010B64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010BD0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010BFC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010C48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010C9C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010CCC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010D1C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010DC0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010DD8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010E04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08010E90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011120.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011184.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080111C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080111F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011228.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080112B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080112E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011324.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011344.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080113D8.inc\"");

void sub_08011408(void)
{
    play_sound(0x80090000);
}

asm(".include \"asm/non_matching/file_select/sub_08011418.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011434.inc\"");

void sub_0801147C(struct Entity *this)
{
    gUnknown_08427548[this->form](this);
}


void sub_08011494(struct Entity *this)
{
    gUnknown_08427588[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_080114AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801152C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080115BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011684.inc\"");

void sub_08011760(struct Entity *this)
{
    gUnknown_084275BC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08011778.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080117B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011820.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011870.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801189C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011920.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011960.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011990.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080119A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011A58.inc\"");

void sub_08011AA8(struct Entity *this)
{
    gUnknown_084275DC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08011AC0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011ADC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011B7C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011BB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011BE0.inc\"");

void sub_08011C30(struct Entity *this)
{
    gUnknown_084275EC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08011C48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011C58.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011C74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011CC4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011CF0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011D4C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011DE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011E5C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011E9C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011EE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011F28.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08011F98.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080120D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080122C0.inc\"");

void sub_0801239C(void)
{
    u32 zero = 0;

    CpuSet(&zero, gEntityList, 0x05001000);
}


void sub_080123BC(void)
{
    struct EntityLinks *p;

    for (p = gEntityLinks; p < gEntityLinks + 8; p++)
    {
        p->unk4 = p;
        p->unk0 = p;
    }
    gUnknown_03005AD8 = 0;
    gUnknown_0202A8C4 = 0;
}


struct Entity *sub_080123E8(void)
{
    u8 *e;

    for (e = gEntityList; e < gEntityList + 0x3A00; e += 0x80)
        if (*(u32 *)e == 0)
            return (struct Entity *)e;
    return NULL;
}

// Next free entity slot after e (first word 0), or NULL
struct Entity *sub_08012410(struct Entity *e)
{
    struct Entity *p = e + 1;

    if (p >= (struct Entity *)gUnknown_03004A50)
        return NULL;
    for (; p < (struct Entity *)(gUnknown_03004A50 + 0x600); p++)
        if (*(u32 *)p == 0)
            return p;
    return NULL;
}

struct Entity *sub_08012440(void)
{
    u8 *e;

    for (e = gUnknown_03004A50; e < gUnknown_03004A50 + 0x600; e += 0x80)
        if (*(u32 *)e == 0)
            return (struct Entity *)e;
    return NULL;
}

asm(".include \"asm/non_matching/file_select/sub_08012468.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012494.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080124C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080124EC.inc\"");
asm(".include \"asm/non_matching/file_select/DeleteThisEntity.inc\"");

extern u8 gUnknown_0202A370[];

// Clears the entity slots listed in gUnknown_0202A370 (count gUnknown_0202A8C4)
void sub_080126CC(void)
{
    u8 *p = gUnknown_0202A370;

    while (--gUnknown_0202A8C4 != 0xFF) {
        u32 zero = 0;
        CpuSet(&zero, gEntityList + (*p++ << 7), 0x05000020);
    }
    gUnknown_0202A8C4 = 0;
}


void sub_08012728(u8 type, struct Entity *e)
{
    struct EntityLinks *l = &gEntityLinks[type];

    e->next = (struct Entity *)l;
    e->prev = l->unk0;
    l->unk0 = e;
    e->prev->next = e;
    if (e->unk48 == NULL)
        e->unk48 = gUnknown_0813E7D4;
    e->unk5E_0 = 2;
    gUnknown_03005AD8++;
}


void sub_0801276C(u8 i)
{
    struct EntityLinks *l = &gEntityLinks[i];
    struct Entity *e = l->unk4;

    if (e != l->unk0)
    {
        e->prev->next = e->next;
        e->next->prev = e->prev;
        gUnknown_03005AD8--;
        sub_08012728(i, e);
    }
}

asm(".include \"asm/non_matching/file_select/sub_080127A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080127D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012800.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012824.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080128EC.inc\"");

u32 sub_08012A24(const u16 *p, u16 key)
{
    u16 r = 0xFFFF;

    do
    {
        if (p[0] == key)
        {
            r = p[1];
            break;
        }
        p += 2;
    } while (p[0] != 0xFFFF);
    return r;
}


void sub_08012A50(u16 a, u16 b)
{
    u32 s = sub_08012A24(gUnknown_08138104, a);

    if (s != 0xFFFF)
        sub_08008F78((sub_0800099C() & 1) ? s : 32, b, 0x4000);
}

asm(".include \"asm/non_matching/file_select/sub_08012A94.inc\"");

void sub_08012B04(u16 a, u16 b)
{
    if ((gUnknown_03006C80.unk1 == 3 || gUnknown_03006C80.unk1 == 0) && a == 130)
    {
        a = (sub_0800099C() & 255) <= 126 ? 129 : 128;
        sub_08008F78(a, b, 0x4000);
    }
}


void sub_08012B44(u8 room)
{
    void (*f)(u8) = (void (*)(u8))sub_08012F84(room, 7);

    if (f != NULL)
        f(room);
}

asm(".include \"asm/non_matching/file_select/sub_08012B64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012BE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012EB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08012F20.inc\"");

u32 sub_08012F84(u8 room, u8 layer)
{
    u32 *t = gUnknown_02016330[room];

    if (t == NULL)
        return 0;
    return t[layer];
}


extern u8 gUnknown_0202A720[];
extern u8 gUnknown_020309E0[];

void sub_08012FA8(void)
{
    u32 i, j;
    u8 t;
    u32 zero;

    if (gUnknown_03006C80.unk4 == 0) {
        gUnknown_03006C80.unk4B = 0;
        gUnknown_03006C80.unk49 = 0;
        for (i = 0; i < 64; i++) {
            ((u8 *)gUnknown_0202A880)[i] = i;
            gUnknown_0202A720[i] = i;
        }
        for (i = 63; i != 0; i--) {
            j = sub_0800099C() % i;
            t = ((u8 *)gUnknown_0202A880)[i];
            ((u8 *)gUnknown_0202A880)[i] = ((u8 *)gUnknown_0202A880)[j];
            ((u8 *)gUnknown_0202A880)[j] = t;
        }
        for (i = 63; i != 0; i--) {
            j = sub_0800099C() % i;
            t = gUnknown_0202A720[i];
            gUnknown_0202A720[i] = gUnknown_0202A720[j];
            gUnknown_0202A720[j] = t;
        }
        zero = 0;
        CpuSet(&zero, gUnknown_020309E0, 0x05000020);
    }
}
asm(".include \"asm/non_matching/file_select/sub_0801303C.inc\"");

asm(".include \"asm/non_matching/file_select/sub_080130D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08013120.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080131C8.inc\"");

asm(".include \"asm/non_matching/file_select/sub_080131FC.inc\"");

asm(".include \"asm/non_matching/file_select/sub_080132B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080133D0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08013490.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080136D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08013754.inc\"");


void sub_080137DC(void)
{
    u16 i;

    for (i = 0; i <= 7; i++)
    {
        gUnknown_0202A580[i].unk0 = 0;
        gUnknown_0202A580[i].unk4 = 0;
        gUnknown_0202A580[i].unk6 = 0;
        gUnknown_0202A580[i].unk7 = 0;
    }
}


void sub_08013804(void)
{
    load_gfx_group(gUnknown_0813811A[gUnknown_03006C80.unk1]);
}

asm(".include \"asm/non_matching/file_select/sub_08013824.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801386C.inc\"");

void sub_080138BC(void)
{
    u32 a, b;

    a = 0;
    CpuSet(&a, gUnknown_0201EF30, 0x05000030);
    b = 0;
    CpuSet(&b, gUnknown_02003110, 0x05000030);
}


u32 sub_08013948(u16 *, u8, u32 *, u32 *);

u32 sub_080138F0(u16 *p, u8 b)
{
    u32 type = (*p >> 9) & 15;
    u8 id = *p;

    if (type == 6) {
        if (id == 92 && sub_08013948(p, b, gUnknown_0201EF30, gUnknown_0201EF30 + 48) != 0)
            return 0;
        if (id == 8 && sub_08013948(p, b, gUnknown_02003110, gUnknown_02003110 + 48) != 0)
            return 0;
    }
    return 1;
}

asm(".include \"asm/non_matching/file_select/sub_08013948.inc\"");
struct Rec08013A10 { u16 tile; u8 id; u8 unk3; };

// For each of 48 records with id 0xFF: call sub_080144F0 on its tile and set bit 13
void sub_08013A10(void)
{
    struct Rec08013A10 *p;

    for (p = (struct Rec08013A10 *)gUnknown_0201EF30; p < (struct Rec08013A10 *)gUnknown_0201EF30 + 48; p++) {
        if (p->id == 0xFF) {
            sub_080144F0(310, p->tile & 0xFFF, p->tile & 0xC000);
            p->tile |= 0x2000;
        }
    }
}
asm(".include \"asm/non_matching/file_select/sub_08013A60.inc\"");

void sub_08013C04(const u16 *p)
{
    struct Entity *e = sub_0804C8A8(15, 2, 0);

    if (e != NULL)
    {
        e->x.HALF_U.HI = ((*p & 63) << 4) | 8;
        e->y.HALF_U.HI = ((*p & 0xFC0) >> 2) | 8;
        e->unk50 = *p & 0xC000;
        sub_08008DD8(e);
    }
}


// Compacts 4-byte records in [a, b): moves the last used ones (u16 0 = unused) into the gaps
void sub_08013C50(u32 *a, u32 *b)
{
    u32 v;

    do
        b--;
    while (*(u16 *)b == 0 && b > a);
    do { /* matching: the wrapper sets the register order (skill tip T12) */
        for (; a < b; a++) {
            v = *(u16 *)a;
            if (v == 0) {
                *a = *b;
                *b = v;
                while (*(u16 *)b == 0 && b > a)
                    b--;
            }
        }
    } while (0);
}
asm(".include \"asm/non_matching/file_select/sub_08013C8C.inc\"");


asm(".include \"asm/non_matching/file_select/sub_08013D20.inc\"");


asm(".include \"asm/non_matching/file_select/sub_08013D54.inc\"");


void sub_08013DE0(void)
{
    u32 v;

    gUnknown_0202A4F0 = 0;
    v = -1;
    CpuSet(&v, gUnknown_02016350, 0x05000020);
}

asm(".include \"asm/non_matching/file_select/sub_08013E0C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08013EC0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801400C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014020.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014048.inc\"");

void sub_080140A8(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_080140AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080140D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014134.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014180.inc\"");

s32 sub_080141AC(u8 i)
{
    s32 base = gUnknown_03006C80.unkC[i];
    s32 best = 0;
    s8 k;

    for (k = 3; k >= 0; k--)
        if (gUnknown_03006C80.unkC[k] - base > best)
            best = gUnknown_03006C80.unkC[k] - base;
    return best;
}



asm(".include \"asm/non_matching/file_select/sub_080141E8.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0801424C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080142F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014474.inc\"");

// Point the two text layers at BG2 and BG1, clear the 8 text slots, enable BG1+BG2
void sub_080144A0(void)
{
    struct Struct02002440 *p;
    u16 i;

    gUnknown_0201F020 = (struct UnknownStruct3 *)&gUnknown_030004A0.bgConfig[2];
    ((struct BGConfig *)gUnknown_0201F020)->bgcnt = gUnknown_08142374[16];
    *(struct BGConfig **)&gUnknown_0200B320 = &gUnknown_030004A0.bgConfig[1];
    (*(struct BGConfig **)&gUnknown_0200B320)->bgcnt = gUnknown_08142374[17];
    p = gUnknown_02002440;
    for (i = 0; i < 8; i++, p++)
        p->unk0 = NULL;
    gUnknown_030004A0.dispCnt |= 0x600;
}

asm(".include \"asm/non_matching/file_select/sub_080144F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080145B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080145D8.inc\"");

void sub_080145D8(u16, u16);

void sub_08014658(u16 a, u16 b, u16 c)
{
    if (a == 344 && gUnknown_03006C80.unk1 != 1) {
        sub_08008F78(a, b, c);
        sub_080145D8(b, c);
        sub_080145D8(b + 1, c);
        sub_080145D8(b - 1, c);
        sub_080145D8(b + 64, c);
        sub_080145D8(b - 64, c);
    } else {
        sub_080144F0(a, b, c);
    }
}

asm(".include \"asm/non_matching/file_select/sub_080146D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801478C.inc\"");

struct GfxRec0801484C { u32 src; u8 *dst; s32 ctrl; };
asm(".include \"asm/non_matching/file_select/sub_0801484C.inc\"");


extern u8 gUnknown_0202A500[];
void sub_08014958(u8 *);
void sub_08014E60(u8 *);

void sub_08014900(void)
{
    u8 *p = gUnknown_0202A500;
    u16 i;

    for (i = 0; i < gUnknown_02000004; i++, p += 8) {
        switch (p[3]) {
        case 1:
            sub_08014958(p);
            break;
        case 2:
            sub_08014E60(p);
            break;
        }
    }
    gUnknown_02000004 = 0;
    gUnknown_02016324 = 0;
}

asm(".include \"asm/non_matching/file_select/sub_08014958.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08014E60.inc\"");

void sub_080152E0(void)
{
    gUnknown_02000004 = 0;
    gUnknown_02016324 = 0;
}

asm(".include \"asm/non_matching/file_select/sub_080152F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080156BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080157F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08015888.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08015964.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080159F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08015AC4.inc\"");


asm(".include \"asm/non_matching/file_select/sub_08015C64.inc\"");


u16 sub_08015CD0(s32 *p)
{
    if (*p < 0)
        return gUnknown_081382A0[(u8)*p][sub_0800099C() & 7];
    return *p;
}

// Load a list of gfx entries (offsets into the gfx blob): bit 28 = palette, bit 31 = another follows
struct GfxLoad { u16 dst; u8 count; u8 flags; u32 offset; };

void sub_08015D04(const struct GfxLoad *p)
{
    while (1) {
        const u8 *src = gUnknown_03000030 + p->offset;
        u32 n = p->count + 1;
        u32 dst = p->dst;

        if ((*(u32 *)p >> 28) & 1)
            load_palette((u16 *)src, dst >> 5, n);
        else
            CpuFastSet(src, (void *)(dst + 0x06000000), n * 8);
        if (*(s32 *)p < 0)
            p++;
        else
            break;
    }
}

void sub_08015D50(const u16 *ids)
{
    struct Struct02002440 *d = gUnknown_02002440;

    while (*ids != 0xFFFF)
    {
        d->unk0 = gUnknown_08138BB4[*ids];
        d->unk6 = d->unk0[2];
        d++;
        ids++;
    }
}


void sub_08015D8C(void)
{
    gUnknown_03000450.unk6 = 1;
    gUnknown_03000450.unk4 = 0;
}


void sub_08015D9C(void)
{
    gUnknown_08138C08[gUnknown_03000450.unk6]();
}


void sub_08015DBC(void)
{
}


u16 *sub_08015DC0(u16 a)
{
    if ((a >> 14) == 2)
        return (u16 *)&gUnknown_0200B320;
    return (u16 *)&gUnknown_0201F020_fs;
}

asm(".include \"asm/non_matching/file_select/sub_08015DD8.inc\"");

extern u8 gUnknown_02038000[];
extern u8 gUnknown_0203A000[];
extern const struct GfxRec0801484C *const gUnknown_08146090[];
void sub_0800BAE4(void *, void *, u32, u32);
void sub_080160F8(void);

void sub_08015F74(u16 n)
{
    zero_memory(gUnknown_02038000, 0x4000);
    sub_0801484C(gUnknown_08146090[n], 0);
    sub_0800BAE4(gUnknown_0201F020_fs.unk4, gUnknown_02038000, gUnknown_03000450.unk28 >> 4, (gUnknown_03000450.unk2A >> 4) | 0x8000);
    sub_0800BAE4(gUnknown_0200B320.unk4, gUnknown_0203A000, gUnknown_03000450.unk28 >> 4, (gUnknown_03000450.unk2A >> 4) | 0x8000);
    sub_080160F8();
}

asm(".include \"asm/non_matching/file_select/sub_08015FE4.inc\"");

extern u8 gUnknown_02016D90[];
extern u8 gUnknown_020031D0[];
extern u8 gUnknown_02016470[];
void sub_080159F4(void *, void *);

void sub_08016084(void)
{
    CpuSet(gUnknown_0201F020_fs.unk4, (u8 *)gUnknown_0201F020_fs.unk4 + 0x3000, 0x04000800);
    CpuSet(gUnknown_0200B320.unk4, (u8 *)gUnknown_0200B320.unk4 + 0x3000, 0x04000800);
    sub_080159F4(gUnknown_02016D90, &gUnknown_0201F020_fs);
    sub_080159F4(gUnknown_020031D0, &gUnknown_0200B320);
    CpuFastSet(gUnknown_02016470, gUnknown_02016470 + 512, 8);
    gUnknown_0200B310 |= 0x200000;
}

asm(".include \"asm/non_matching/file_select/sub_080160F8.inc\"");

void sub_080161F8(u16 a, u8 b)
{
    gUnknown_03000450.unk16 = a;
    gUnknown_03000450.unk5 = b & 3;
}



void sub_0801620C(void)
{
    s32 n = gUnknown_03006C80.unk1;

    if (n < 0)
        return;
    if (n > 2)
        return;
    gUnknown_03000450.unk8 = 12;
    gUnknown_030004A0.bgConfig[3].bgcnt = gUnknown_08142374[19];
    gUnknown_030004A0.dispCnt |= 0x800;
    sub_08008D74();
}


asm(".include \"asm/non_matching/file_select/sub_0801624C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016288.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080162B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016488.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801679C.inc\"");

void sub_08016848(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139104);
}


void sub_08016858(struct Entity *this)
{
    gUnknown_0813911C[this->unk14](this);
}


void sub_08016870(struct Entity *this)
{
    sub_080098A0(this, gUnknown_08139104);
}

asm(".include \"asm/non_matching/file_select/sub_08016880.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080168C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016938.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016958.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080169F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016A34.inc\"");

void sub_08016A90(struct Entity *this)
{
    gUnknown_081391FC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08016AA8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016B20.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016B84.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016BBC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016C04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016C30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016C5C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016C8C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016DB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016DF8.inc\"");

void sub_08016E1C(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139284);
}


void sub_08016E2C(struct Entity *this)
{
    gUnknown_0813929C[this->unk14](this);
}


void sub_08016E44(struct Entity *this)
{
    if (this->unk14 == 3)
    {
        this->unk14 = 1;
        this->speed = 128;
        this->unk18 = 20;
    }
    sub_080098A0(this, gUnknown_08139284);
}


void sub_08016E6C(struct Entity *this)
{
    this->unk1C_0 = 1;
    this->unk2E = 2;
    this->unk48 = gUnknown_0813935C;
    sub_08003870(this, 0);
    this->unk14++;
    this->unk2A = 0;
}


void sub_08016EA8(struct Entity *this)
{
    u8 d;

    this->unk14++;
    this->unk17 = (sub_0800099C() & 48) + 60;
    this->direction = sub_0800099C() & 24;
    d = sub_08043EE0(this->direction);
    if (d != this->unk2A)
    {
        this->unk2A = d;
        sub_08003870(this, d);
    }
}




u32 sub_0800997C(struct Entity *, u32);

void sub_08016EF0(struct Entity *this)
{
    u32 r;
    u8 d;

    if (this->unk18 == 0) {
        r = sub_0800997C(this, 12);
        d = r;
        if (r & 0x80) {
            this->unk14 = 3;
            this->unk17 = 16;
            this->speed = 416;
            this->direction = d & 24;
            this->unk2A = this->direction >> 3;
            sub_08003870(this, this->unk2A + 4);
            return;
        }
    } else {
        this->unk18--;
    }
    if (this->unk17 == 0) {
        this->unk14 = 1;
    } else {
        this->unk17--;
        sub_0800963C(this);
        GetNextFrame(this);
    }
}



void sub_08016F5C(struct Entity *this)
{
    if (this->unk17 != 0)
        this->unk17--;
    else
    {
        GetNextFrame(this);
        if (sub_0800963C(this) == 0)
        {
            this->unk14 = 1;
            this->speed = 128;
            this->unk18 = 20;
            sub_08003870(this, this->unk2A);
        }
    }
}


void sub_08016F9C(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139364);
}

asm(".include \"asm/non_matching/file_select/sub_08016FAC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08016FCC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017058.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801707C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080170EC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017120.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801715C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080171A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017254.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801729C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080172E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017344.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801740C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017444.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801753C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017588.inc\"");

void sub_080175CC(struct Entity *this)
{
    gUnknown_08139560[this->unk14](this);
}


void sub_080175E4(struct Entity *this)
{
    sub_080098A0(this, gUnknown_08139548);
}

asm(".include \"asm/non_matching/file_select/sub_080175F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017638.inc\"");

void sub_08017688(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813959C);
}


void sub_08017698(struct Entity *this)
{
    gUnknown_081395B4[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_080176B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080176DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017738.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801775C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080177B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017804.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017834.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801786C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080178B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080178E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017924.inc\"");

void sub_080179B4(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813968C);
}

asm(".include \"asm/non_matching/file_select/sub_080179C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017A30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017ADC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017AF0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017B34.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017B80.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017BA4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017BE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017C2C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017C74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017C88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017CAC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017D14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017D50.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017D78.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017DB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017DFC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017EE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017F88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08017FB4.inc\"");

void sub_08018010(struct Entity *this)
{
    gUnknown_08139770[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08018028.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018194.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080181A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080181EC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801828C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080182C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801833C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018378.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018450.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018474.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080184C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080184D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018514.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018528.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080185D0.inc\"");

void sub_08018608(struct Entity *this)
{
    gUnknown_0813988C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08018620.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018648.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018684.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801879C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080187D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018838.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018870.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080188A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080188E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018960.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080189F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018A14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018AE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018B14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018C2C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018C4C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018CB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018D64.inc\"");

void sub_08018E20(struct Entity *this)
{
    gUnknown_08139938[this->form](this);
}


void sub_08018E38(struct Entity *this)
{
    gUnknown_08139948[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08018E50.inc\"");

void sub_08018F18(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_08018F1C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018F5C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08018FF4.inc\"");

void sub_08018FFC(struct Entity *this)
{
    gUnknown_0813995C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08019014.inc\"");

void sub_08019050(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_08019054.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019078.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019114.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801911C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019170.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080191D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019274.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080192CC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019340.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019398.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019410.inc\"");

void sub_08019610(struct Entity *this)
{
    gUnknown_081399A0[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08019628.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019644.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019690.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080199A4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080199C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080199F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019A4C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019AD4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019B54.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019BC4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019C28.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019D48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019D74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019DD0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019E00.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019E58.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019E90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019EC4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019F00.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019F2C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019F9C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08019FC8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A038.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A08C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A11C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A1B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A1E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A210.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A254.inc\"");

void sub_0801A408(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139D1C);
}


void sub_0801A418(struct Entity *this)
{
    gUnknown_08139D34[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801A430.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A49C.inc\"");

void sub_0801A4E0(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_0801A4E4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A590.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A5E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A644.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A6A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A70C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A754.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A798.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A7F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A850.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A868.inc\"");

void sub_0801A908(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139E60);
}


void sub_0801A918(struct Entity *this)
{
    gUnknown_08139E78[this->unk14](this);
}


void sub_0801A930(struct Entity *this)
{
    sub_080098A0(this, gUnknown_08139E60);
}

asm(".include \"asm/non_matching/file_select/sub_0801A940.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A968.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A990.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801A9B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AA00.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AA3C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AA60.inc\"");

void sub_0801AA8C(struct Entity *this)
{
    sub_08009924(this, gUnknown_08139EF4);
}


void sub_0801AA9C(struct Entity *this)
{
    gUnknown_08139F0C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801AAB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AB54.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AC50.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AC70.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801ACE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AD3C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AEA0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801AFFC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B024.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B0BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B1A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B200.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B4F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B5A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B620.inc\"");

void sub_0801B644(struct Entity *this)
{
    gUnknown_0813A0BC[this->unk14](this);
}


void sub_0801B65C(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813A0A4);
}

asm(".include \"asm/non_matching/file_select/sub_0801B66C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B68C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B770.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B7A4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B800.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B828.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B880.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B8A4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B8D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B8F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801B9D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BA38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BAAC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BAD8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BB18.inc\"");

void sub_0801BB3C(struct Entity *this)
{
    gUnknown_0813A1A4[this->unk14](this);
}


void sub_0801BB54(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813A18C);
}

asm(".include \"asm/non_matching/file_select/sub_0801BB64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BB84.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BBB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BBC4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BBE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BC18.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BC74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BC98.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BCCC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BCE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BE44.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BEE4.inc\"");

void sub_0801BF08(struct Entity *this)
{
    gUnknown_0813A2E4[this->unk14](this);
}


void sub_0801BF20(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813A2CC);
}

asm(".include \"asm/non_matching/file_select/sub_0801BF30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BF50.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BF80.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BF90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BFB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801BFE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C044.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C068.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C09C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C0B4.inc\"");

void sub_0801C140(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813A40C);
}


void sub_0801C150(struct Entity *this)
{
    gUnknown_0813A424[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801C168.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C1D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C210.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C2B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C2C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C318.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C378.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C3D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C44C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C48C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C4C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C4E8.inc\"");

void sub_0801C554(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813A620);
}


void sub_0801C564(struct Entity *this)
{
    gUnknown_0813A638[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801C57C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C5FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C62C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C678.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C754.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C780.inc\"");

void sub_0801C7A8(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_0801C7AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C814.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C844.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C8F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C93C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C9B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801C9D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CA04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CABC.inc\"");

void sub_0801CB10(struct Entity *this)
{
    gUnknown_0813A754[this->unk14](this);
}


void sub_0801CB28(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813A73C);
}

asm(".include \"asm/non_matching/file_select/sub_0801CB38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CB4C.inc\"");

void sub_0801CB60(struct Entity *this)
{
    gUnknown_0813A75C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801CB78.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CC4C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CCB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CD04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CD40.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CD88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CDA0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CE00.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CE14.inc\"");

void sub_0801CE54(struct Entity *this)
{
    gUnknown_0813A7A4[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801CE6C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CF38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801CF88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D01C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D060.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D0FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D140.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D190.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D1B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D1E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D20C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D240.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D298.inc\"");

void sub_0801D2C0(struct Entity *this)
{
    gUnknown_0813A7D0[this->unk15](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801D2D8.inc\"");

void sub_0801D308(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_0801D30C.inc\"");

void sub_0801D32C(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_0801D330.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D380.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D3C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D3D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D3F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D41C.inc\"");

void sub_0801D454(struct Entity *this)
{
    gUnknown_0813A88C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801D46C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D4C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D544.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D590.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D5D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D5FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D634.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D658.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D690.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D6B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D6EC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D710.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D748.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D764.inc\"");

void sub_0801D84C(struct Entity *this)
{
    gUnknown_0813A8D8[this->form](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801D864.inc\"");

void sub_0801D890(struct Entity *this)
{
    gUnknown_0813A900[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801D8A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D8D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801D9E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801DA84.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801DAE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801DB90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801DC14.inc\"");

void sub_0801DC7C(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813AACC);
}


void sub_0801DC8C(struct Entity *this)
{
    if (this->unk14 != 0)
        sub_08044240(this, 128);
    gUnknown_0813AAE4[this->unk14](this);
}


void sub_0801DCB8(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813AACC);
}


extern const u8 gUnknown_0813AC70[];
struct Entity *sub_0804411C(struct Entity *, u8, u8);

void sub_0801DCC8(struct Entity *this)
{
    struct Entity *e = sub_0804411C(this, 6, 0);

    if (e != NULL) {
        e->unk54 = this;
        this->unk58 = e;
        this->unk1C_0 = 1;
        this->unk2E = 5;
        this->unk3C |= 0x80;
        this->unk48 = gUnknown_0813AC70;
        sub_0801DF24(this);
        this->unk2A = 0xFF;
        this->direction = sub_0800099C() & 24;
    }
}



asm(".include \"asm/non_matching/file_select/sub_0801DD28.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0801DDA0.inc\"");

void sub_0801DE14(struct Entity *this)
{
    sub_0801DEC0(this, 0);
    if (this->unk18 & 2)
    {
        this->unk14 = 4;
        sub_08003870(this, this->unk2A + 32);
    }
}


void sub_0801DE44(struct Entity *this)
{
    if (this->unk18 & 2) {
        GetNextFrame(this);
        if (this->unk29 & 0x20) {
            this->unk18 &= ~2;
            this->unk29 &= 0xF;
        }
    }
    if (this->unk18 & 0x80) {
        this->unk14 = 5;
        this->unk2A = 0xFF;
        sub_0801DEC0(this, 0);
    }
}


void sub_0801DE9C(struct Entity *this)
{
    sub_0801DEC0(this, 0);
    if (this->unk18 == 0)
    {
        sub_0801DF24(this);
        this->unk70.s.unk71 = 120;
    }
}


extern const u8 gUnknown_0813AB04[];


void sub_0801DEC0(struct Entity *this, u32 k)
{
    u8 base = k;
    u8 v = gUnknown_0813AB04[((this->unk58->direction + 4) & 24) >> 3];

    if (v != this->unk70.b || this->direction >> 3 != this->unk2A) {
        this->unk70.b = v;
        this->unk2A = this->direction >> 3;
        sub_08003870(this, base + (this->unk2A << 2) + this->unk70.b);
    }
}



void sub_0801DF24(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 60;
    this->unk18 = 0;
    this->unk64 = 0;
}

asm(".include \"asm/non_matching/file_select/sub_0801DF34.inc\"");

void sub_0801DF78(struct Entity *this)
{
    gUnknown_0813AC90[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801DF90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E054.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E084.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E0B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E110.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E16C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E1F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E360.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E3B4.inc\"");

void sub_0801E484(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813AD7C);
}


void sub_0801E494(struct Entity *this)
{
    gUnknown_0813AD94[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801E4AC.inc\"");

void sub_0801E590(struct Entity *this)
{
    this->unk14 = 1;
    this->unk17 = 1;
    this->unk1C_0 = 1;
    this->unk2E = 5;
    this->unk48 = gUnknown_0813AE64;
    this->unk2A = (this->direction = sub_0800099C() & 24) >> 3;
    sub_08003870(this, this->unk2A);
}

asm(".include \"asm/non_matching/file_select/sub_0801E5D8.inc\"");

void sub_0801E690(struct Entity *this)
{
    GetNextFrame(this);
    if (--this->unk17 == 0)
    {
        this->unk14 = 3;
        this->unk17 = 120;
        this->speed = 0x1C0;
        sub_08003870(this, 8);
    }
}


void sub_0801E6C0(struct Entity *this)
{
    if (sub_08009664(this) == 0)
        this->unk17 = 1;
    GetNextFrame(this);
    if (--this->unk17 != 0) {
        if ((this->unk17 & 7) == 0)
            sub_080040C4(this, sub_0803CECC(this, this->unk58));
    } else {
        this->unk14 = 4;
        this->unk17 = 16;
        sub_08003870(this, this->unk2A + 4);
    }
}


void sub_0801E724(struct Entity *this)
{
    if (--this->unk17 == 0)
    {
        this->unk14 = 1;
        this->unk17 = 1;
        this->speed = 128;
        sub_08003870(this, this->unk2A);
    }
}


void sub_0801E750(struct Entity *this)
{
    if (!sub_08003594(this, 0x1800))
    {
        this->unk14 = 1;
        this->unk17 = 1;
    }
}


void sub_0801E76C(struct Entity *this)
{
    sub_08009664(this);
    switch (sub_08003F1C(this, 0x1800))
    {
    case 0:
        this->unk14 = 7;
        this->unk17 = 150;
    case 1:
        sub_08003DFC(49);
    }
}



asm(".include \"asm/non_matching/file_select/sub_0801E7A0.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0801E80C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E83C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E868.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E8A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E8DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E8FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E92C.inc\"");

void sub_0801E954(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813AEB0);
}

asm(".include \"asm/non_matching/file_select/sub_0801E964.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801E9BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EA28.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EA54.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EA88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EB38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EBCC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EBF4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EC54.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EC9C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801ECE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801ED10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801ED3C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EDB4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EE30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801EE68.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F0A0.inc\"");

void sub_0801F0C4(struct Entity *this)
{
    gUnknown_0813AFFC[this->unk14](this);
}


void sub_0801F0DC(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813AFE4);
}

asm(".include \"asm/non_matching/file_select/sub_0801F0EC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F12C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F170.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F204.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F254.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F2E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F334.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F384.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F3B8.inc\"");

void sub_0801F47C(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813B108);
}

asm(".include \"asm/non_matching/file_select/sub_0801F48C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F4D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F54C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F5B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F608.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F668.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F6BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F6E8.inc\"");

void sub_0801F748(struct Entity *this)
{
    gUnknown_0813B1E4[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801F760.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F7E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F830.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F878.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F8AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F8D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F970.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801F9A0.inc\"");

void sub_0801F9BC(struct Entity *this)
{
    gUnknown_0813B244[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801F9D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FA10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FA70.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FA8C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FB08.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FB54.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FB74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FC04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FC38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FC70.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FCC4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FD28.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FD44.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FD5C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FD84.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FE00.inc\"");

void sub_0801FE50(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813B514);
}


void sub_0801FE60(struct Entity *this)
{
    gUnknown_0813B52C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0801FE78.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FEA0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FEDC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0801FFBC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020028.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020060.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080200A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080200D0.inc\"");

void sub_0802012C(struct Entity *this)
{
    gUnknown_0813B5EC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08020144.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020170.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020190.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802027C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020364.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080203B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802043C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020478.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080204E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020560.inc\"");

void sub_08020588(struct Entity *this)
{
    gUnknown_0813B66C[this->unk14](this);
}


void sub_080205A0(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813B654);
}

asm(".include \"asm/non_matching/file_select/sub_080205B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080205C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020610.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802065C.inc\"");

void sub_08020674(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813B67C);
}

asm(".include \"asm/non_matching/file_select/sub_08020684.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080206DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020710.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020760.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020798.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080207D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020850.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802086C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802093C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020980.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080209A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080209DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020A0C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020AE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020C0C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020C74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020D08.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020DB0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020E2C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020EBC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020F64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08020F9C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802103C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080210F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021154.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021190.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021234.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021350.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021378.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080215F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021694.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802173C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021860.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021930.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021A50.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021B18.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021B8C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021BB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021C58.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021C88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021E78.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021EA8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021F08.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021F38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08021F64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022004.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022044.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022460.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022508.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802256C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022734.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022764.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802292C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022998.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080229CC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022A7C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022AEC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022B10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022BB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022C24.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022CA4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022D50.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022D88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022DDC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022E0C.inc\"");

void sub_08022E6C(struct Entity *this)
{
    gUnknown_0813BDBC[this->unk15](this);
}

asm(".include \"asm/non_matching/file_select/sub_08022E84.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022EA8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022EE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022F04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022F3C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022F60.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022F98.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022FBC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08022FF4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023010.inc\"");

void sub_080230F8(struct Entity *this)
{
    sub_08009924(this, gUnknown_0813BDE0);
}


void sub_08023108(struct Entity *this)
{
    gUnknown_0813BDF8[this->form](this);
}


void sub_08023120(struct Entity *this)
{
    sub_080098A0(this, gUnknown_0813BDE0);
}

asm(".include \"asm/non_matching/file_select/sub_08023130.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023178.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080231D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023234.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080232D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080232E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802336C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802337C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080233B0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080233D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023408.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802347C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080234D0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023588.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080235C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080235F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023650.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080236F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023798.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080237F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080239C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023A38.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023BAC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023D14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023E14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023EB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023F10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023F34.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08023F7C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080240C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802416C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080241B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080241E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024220.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024274.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080242C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024304.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024370.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024418.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024474.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080244A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080244F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802452C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024588.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080245C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080245FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080246AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024728.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024778.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024834.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024898.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080248E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024914.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024930.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802495C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024998.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080249CC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024A80.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024AE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024BDC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024C90.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024CD0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024D10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024D48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024D7C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024EA0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024EFC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024F4C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024F98.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08024FEC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025058.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080250DC.inc\"");

void sub_08025100(struct Entity *this)
{
    gUnknown_0813C308[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08025118.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025144.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802519C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080251E8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025210.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025244.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802527C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080252A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080252FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025348.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080253B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025450.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080256A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080256DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025730.inc\"");

void sub_08025754(struct Entity *this)
{
    gUnknown_0813C434[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802576C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025798.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080257E4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025828.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025850.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025874.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080258DC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802595C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080259D8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025A40.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025A60.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08025ACC.inc\"");

void sub_08025B6C(struct Entity *this)
{
    gUnknown_0813C5B0[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08025B84.inc\"");

void sub_0802614C(struct Entity *);

void sub_08025C78(struct Entity *this)
{
    if ((this->unk54->unk18 & 1) && ((this->unk54->unk2A - 1) & 3) << 3 == this->direction) {
        this->unk14 = 2;
        this->direction = (this->direction - 8) & 31;
        this->speed = 0x700;
        this->unk78.h = this->unk54->x.HALF.HI;
        this->unk78.s2.unk7A = this->unk54->y.HALF.HI;
        sub_0802614C(this);
    } else {
        sub_0802614C(this);
        this->direction = (this->direction - 1) & 31;
    }
}

asm(".include \"asm/non_matching/file_select/sub_08025CEC.inc\"");

void sub_08025DB8(struct Entity *this)
{
    sub_08026244(this);
    sub_080040C4(this, this->unk54->unk2A << 3);
    sub_080040C4(this, this->unk54->unk2A << 3);
    sub_080040C4(this, this->unk54->unk2A << 3);
    sub_080040C4(this, this->unk54->unk2A << 3);
    sub_0803CC20(this);
    this->speed -= 36;
    if (this->speed <= 0x43F) {
        this->unk14 = 4;
        this->unk17 = 24;
    }
}


void sub_08025E24(struct Entity *this)
{
    sub_08026244(this);
    if (--this->unk17 == 0)
    {
        this->unk14 = 5;
        this->speed = 0x400;
        this->unk54->unk18 |= 2;
    }
}


void sub_08025E54(struct Entity *this)
{
    u16 x0, y0;

    if (this->speed <= 0x7FF)
        this->speed += 32;
    x0 = this->x.HALF.HI;
    y0 = this->y.HALF.HI;
    this->direction = ((this->unk54->unk2A << 3) - 8) & 24;
    sub_0802614C(this);
    if ((u16)(this->x.HALF.HI - x0 + 8) <= 16) {
        this->x.HALF.HI = x0;
        this->y.HALF.HI = y0;
        this->unk14 = 6;
        this->unk17 = 32;
        this->unk54->unk18 |= 0x80;
    } else {
        this->direction = sub_08003F54(x0, y0, this->x.HALF.HI, this->y.HALF.HI);
        this->x.HALF.HI = x0;
        this->y.HALF.HI = y0;
        sub_0803CC20(this);
    }
}


void sub_08025EE0(struct Entity *this)
{
    sub_080261A0(this, this->unk17 >> 1);
    this->direction = (this->direction - 1) & 31;
    if (--this->unk17 <= 7) {
        this->unk14 = 7;
        this->unk17 = 150;
        this->unk2E = 0;
        this->unk3C &= 0x7F;
        sub_08026204(this);
        sub_08003DFC(48);
    }
}


void sub_08025F34(struct Entity *this)
{
    sub_08026204(this);
    if (--this->unk17 == 0)
    {
        this->unk14 = 8;
        this->unk17 = 4;
        this->unk2E = 8;
        this->unk3C |= 0x80;
    }
}


void sub_08025F68(struct Entity *this)
{
    sub_080261A0(this, this->unk17 >> 3);
    this->direction = (this->direction - 1) & 31;
    if ((s8)++this->unk17 < 0)
    {
        this->unk14 = 1;
        this->unk54->unk18 = 0;
    }
}


void sub_08025FA0(struct Entity *this)
{
    gUnknown_0813C5DC[this->unk14](this);
}


void sub_08025FB8(struct Entity *this)
{
    this->unk14 = 1;
    this->z.HALF_U.HI = 0xFFFC;
    this->unk5E_0 = 3;
    sub_08008DD8(this);
    sub_08003870(this, 1);
    sub_08025FF0(this);
}
asm(".include \"asm/non_matching/file_select/sub_08025FF0.inc\"");


void sub_08026094(struct Entity *this)
{
    gUnknown_0813C61C[this->unk14](this);
}


void sub_080260AC(struct Entity *this)
{
    this->unk14 = 1;
    this->z.HALF_U.HI = 0xFFFC;
    this->unk5E_0 = 3;
    sub_08008DD8(this);
    sub_08003870(this, 1);
    sub_080260E4(this);
}


void sub_080260E4(struct Entity *this)
{
    struct Entity *a = this->unk58;
    struct Entity *b;
    s16 dx = (a->x.HALF.HI - (b = (struct Entity *)this->unk74.w)->x.HALF.HI) / 3;
    s16 dy = (a->y.HALF.HI - b->y.HALF.HI) / 3;

    switch (this->form) {
    case 2:
        this->x.HALF.HI = dx + b->x.HALF.HI;
        this->y.HALF.HI = dy + b->y.HALF.HI;
        break;
    case 3:
        this->x.HALF.HI = dx * 2 + b->x.HALF.HI;
        this->y.HALF.HI = dy * 2 + b->y.HALF.HI;
        break;
    }
}


extern const s8 gUnknown_0813C624[];

asm(".include \"asm/non_matching/file_select/sub_0802614C.inc\"");


asm(".include \"asm/non_matching/file_select/sub_080261A0.inc\"");


asm(".include \"asm/non_matching/file_select/sub_08026204.inc\"");


void sub_08026244(struct Entity *this)
{
    struct Entity *p = this->unk54;

    this->x.HALF_U.HI += p->x.HALF_U.HI - this->unk78.h;
    this->x.HALF_U.HI += p->y.HALF_U.HI - this->unk78.s2.unk7A;
    this->unk78.h = p->x.HALF_U.HI;
    this->unk78.s2.unk7A = this->unk54->y.HALF_U.HI;
}

asm(".include \"asm/non_matching/file_select/sub_08026280.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080262A4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080262CC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026314.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026390.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080263EC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080264E0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080264F8.inc\"");

void sub_0802651C(struct Entity *this)
{
    gUnknown_0813C708[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08026534.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802657C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026600.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026658.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026694.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080266B4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080266DC.inc\"");

void sub_08026754(struct Entity *this)
{
    gUnknown_0813CBE0[this->unk14](this);
}


extern const u8 gUnknown_0813CBF0[];

void sub_0802676C(struct Entity *this)
{
    this->unk14++;
    this->unk3C = 0;
    this->unk48 = gUnknown_0813CBF0;
    this->unk7C.h = (this->x.HALF.HI - gUnknown_03000450.unk18) >> 4 | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6;
    this->unk78.s2.unk7A = sub_0800932C(this->unk7C.h, this->unk50);
}

asm(".include \"asm/non_matching/file_select/sub_080267C4.inc\"");

void sub_080268D8(struct Entity *this)
{
    u8 m = sub_08026A6C(this);
    struct Struct03006A30 *p = gUnknown_03006A30;

    if ((m & 1) && (p->unk36 & 0x90))
        m &= ~1;
    p++;
    if ((m & 2) && (p->unk36 & 0x90))
        m &= ~2;
    p++;
    if ((m & 4) && (p->unk36 & 0x90))
        m &= ~4;
    p++;
    if ((m & 8) && (p->unk36 & 0x90))
        m &= ~8;
    if (m == 0)
        this->unk14 = 3;
}


void sub_08026958(struct Entity *this)
{
    u16 t = sub_0800932C(this->unk7C.h, this->unk50);

    if ((u16)(t - 328) > 1 && t != this->unk78.s2.unk7A) {
        this->unk14 = 2;
        this->unk78.h = sub_08008F58(this->unk7C.h, this->unk50);
        this->unk7C.s4.unk7E = sub_080093C8(this->unk7C.h, this->unk50);
    } else {
        this->unk14 = 1;
        gUnknown_0201F000[this->unk52] &= ~gUnknown_08137B10[this->form];
        sub_08014658(328, this->unk7C.h, this->unk50);
        sub_08003E10(this, 18);
    }
}


u16 sub_08008F58(u16, u16);
u8 sub_080093C8(u16, u16);

u8 sub_080269F8(struct Entity *this)
{
    u8 r = sub_08000580(this);
    u16 t;

    if (r != 0) {
        this->unk78.h = 0xFFFF;
        return r;
    }
    t = sub_0800932C(this->unk7C.h, this->unk50);
    if (t != 328 && t != 330 && t != this->unk78.s2.unk7A) {
        this->unk78.h = sub_08008F58(this->unk7C.h, this->unk50);
        this->unk7C.s4.unk7E = sub_080093C8(this->unk7C.h, this->unk50);
        return 16;
    }
    return 0;
}


u32 sub_08026A6C(struct Entity *this)
{
    u8 r = sub_08000580(this);

    if (r != 0)
        return r;
    if (this->unk78.h != 0xFFFF && sub_08008F58(this->unk7C.h, this->unk50) == this->unk78.h)
        return 16;
    return 0;
}


void sub_08026AB4(struct Entity *this)
{
    gUnknown_0813CBF8[this->unk14](this);
}


void sub_08026ACC(struct Entity *this)
{
    u16 *rec;
    u16 n;

    this->unk14 = 1;
    this->unk16 = this->x.HALF.HI;
    this->x.HALF.HI = this->x.HALF.HI * 60;
    this->unk70.w = sub_08012F84_u32(this->unk52, this->y.HALF.HI);
    rec = (u16 *)this->unk70.w;
    n = 0;
    while (rec[0] != 0xFFFF) {
        if ((u16)((rec[0] >> 13) - 2) <= 1)
            sub_08013754(((rec[2] & 0xFC0) >> 6) | (rec[3] & 0xFC0), (rec[2] & 63) + 1, (rec[3] & 63) + 1);
        n++;
        rec += 4;
    }
    if (this->unk17 == 0 || n < this->unk17)
        this->unk17 = n;
    if (this->form != 0xFF)
        this->unk68.w = sub_08013D20(this->form);
    else
        this->unk14++;
}


void sub_08026B80(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & this->unk68.w) == this->unk68.w) {
        play_sound(0x80020000);
        play_sound(0x800D01A7);
        if (this->unk16 != 0) {
            play_sound(0x1A1);
            gUnknown_03006C80.unk26 = 0x1A1;
        }
        this->unk14 = 2;
    }
}


void sub_08026BD4(struct Entity *this)
{
    if (sub_08000A40(BITU16_AT(this, 0x64)) < this->unk17)
        sub_08026CC0(this, 0);
    else
        this->unk14 = 3;
}


void sub_08026C00(struct Entity *this)
{
    if (sub_08000A40(BITU16_AT(this, 0x64)) < this->unk17)
        sub_08026CC0(this, 90);
    if (this->x.HALF.HI != 0 && --this->x.HALF_U.HI == 0)
        this->unk14 = 4;
}


void sub_08026C3C(struct Entity *this)
{
    if (((u16 *)&this->unk60)[1] == 0)
    {
        this->unk14 = 5;
        this->unk17 = 60;
    }
}

asm(".include \"asm/non_matching/file_select/sub_08026C50.inc\"");

u8 sub_08000A70(u16);

void sub_08026CC0(struct Entity *this, u8 k)
{
    u8 i = sub_08000A70(*(u16 *)&this->unk64);
    struct Entity *e = sub_080123E8();

    if (e != NULL && sub_0800A148(e, (const u8 *)(this->unk70.w + i * 8), this->unk52)) {
        e->unk70.b = e->subtype;
        e->unk70.s.unk71 = e->form;
        e->unk70.s.unk72 = e->parameter;
        e->unk60 = (u32)this;
        e->unk68.b = i + 1;
        e->unk52 = this->unk52;
        e->type = 6;
        e->subtype = 10;
        e->unk18 = k;
        (*(u16 *)((u8 *)this + 98))++;
        *(u16 *)&this->unk64 |= gUnknown_08137B10[i];
    }
}


void sub_08026D60(struct Entity *this)
{
    if (*(u16 *)this->unk6C != 0 && gUnknown_02016328 == 0)
        DeleteThisEntity(this);
    else
        gUnknown_0813CC10[this->unk14](this);
}


void sub_08026D98(struct Entity *this)
{
    this->unk14++;
    if (this->unk18 == 0)
        sub_08026E24(this);
}


void sub_08026DB4(struct Entity *this)
{
    if (--this->unk18 == 0)
        sub_08026E24(this);
}


void sub_08026DD0(struct Entity *this)
{
    u8 dead;

    GetNextFrame(this);
    if (this->unk29 == 1) {
        sub_08026EA0(this);
    } else if ((dead = this->unk29 & 0x80) != 0) {
        DeleteThisEntity(this);
    } else if (this->unk29 & 0x40) {
        this->unk29 = dead;
        if (this->unk18 == 0)
            sub_08003DFC(116);
        else
            sub_08003DFC(157);
    }
}


extern const u8 gUnknown_0813CC1C[];

void sub_08026E24(struct Entity *this)
{
    this->unk14 = 2;
    if (this->unk70.b != 18 && (this->x.HALF.HI != 0 || this->y.HALF.HI != 0))
        this->unk1C_0 = 1;
    if (sub_08000AAC(gUnknown_0813CC1C, this->unk70.b)) {
        this->unk18 = 1;
        this->unk1E_0 = 1;
        this->unk20 = 244;
        this->unk1C_6 = 2;
        this->unk1B = 145;
    }
    sub_08003870(this, 0);
}


void sub_08026EA0(struct Entity *this)
{
    struct Entity *e = sub_080123E8();

    if (e != NULL)
    {
        e->type = 3;
        e->subtype = this->unk70.b;
        e->form = this->unk70.s.unk71;
        e->parameter = this->unk70.s.unk72;
        e->unk17 = this->unk17;
        sub_08044018(this, e);
        sub_08012728(4, e);
        this->unk29 = 0;
    }
}


void sub_08026EEC(struct Entity *this)
{
    gUnknown_0813CCD4[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08026F04.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08026F80.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027034.inc\"");

extern void (*const gUnknown_0813CD38[])(struct Entity *);
void sub_080275F8(struct Entity *);

void sub_0802705C(struct Entity *this)
{
    if (this->unk74.b.unk74 != 0 && (gUnknown_08137B10[this->form & 31] & gUnknown_0201F000[this->unk52]) == 0)
        this->unk74.b.unk74 = 0;
    if (this->unk14 != 4)
        sub_080275F8(this);
    gUnknown_0813CD38[this->unk14](this);
    this->unk60 = 0;
}

asm(".include \"asm/non_matching/file_select/sub_080270C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802715C.inc\"");

void sub_0802721C(struct Entity *this)
{
    if (--this->unk17 != 0)
        this->unk1C_0 ^= 1;
    else
    {
        this->unk17 = 45;
        this->unk14++;
        this->x.HALF_U.HI = this->unk78.h;
        this->y.HALF_U.HI = this->unk78.s2.unk7A;
    }
}


void sub_0802725C(struct Entity *this)
{
    if (--this->unk17 != 0)
        this->unk1C_0 ^= 1;
    else
    {
        this->unk14 = 1;
        this->unk74.b.unk74 = 0;
        this->unk1C_0 = 1;
    }
}


void sub_08027298(struct Entity *this)
{
    if (gUnknown_08137B10[this->form & 31] & gUnknown_0201F000[this->unk52])
    {
        this->unk14--;
        this->unk17 = 45;
    }
}

asm(".include \"asm/non_matching/file_select/sub_080272D0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080275F8.inc\"");

// Sets bit in unk2C when the tile at (dx, dy) from the entity isn't 66, 32 or 19-30
#define WALL_AT(dx, dy, bit)                                               \
    {                                                                      \
        u16 t = sub_0800934C(this, dx, dy);                                \
        if (t != 66 && t != 32 && (u16)(t - 19) > 11)                      \
            this->unk2C |= bit;                                            \
    }

void sub_080276CC(struct Entity *this)
{
    WALL_AT(-21, -25, 2)
    WALL_AT(-5, -25, 2)
    WALL_AT(4, -25, 4)
    WALL_AT(20, -25, 4)
}


void sub_08027780(struct Entity *this)
{
    WALL_AT(-21, 24, 32)
    WALL_AT(-5, 24, 32)
    WALL_AT(4, 24, 64)
    WALL_AT(20, 24, 64)
}


void sub_0802782C(struct Entity *this)
{
    WALL_AT(24, -21, 0x2000)
    WALL_AT(24, -5, 0x2000)
    WALL_AT(24, 4, 0x4000)
    WALL_AT(24, 20, 0x4000)
}

asm(".include \"asm/non_matching/file_select/sub_080278E8.inc\"");

void sub_080279AC(struct Entity *this)
{
    gUnknown_0813CDFC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_080279C4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027A64.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027AC0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027B20.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027BCC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027C14.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027C48.inc\"");

void sub_08027C98(struct Entity *this)
{
    gUnknown_0813CE30[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08027CB0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027D40.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08027DF0.inc\"");

extern void (*const gUnknown_0813CE80[])(struct Entity *);

void sub_08027F44(struct Entity *this)
{
    if (this->unk70.w != 0) {
        if (--this->unk70.w == 0) {
            DeleteThisEntity(this);
            return;
        }
        if (this->unk70.w <= 15)
            this->unk1C_0 = (gUnknown_03000E20.unk0 & 2) >> 1;
    }
    gUnknown_0813CE80[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08027F98.inc\"");

void sub_08028050(struct Entity *this)
{
    if ((gUnknown_0201F000[this->unk52] & this->unk60) == this->unk60)
    {
        this->unk60 = 0;
        this->unk1C_0 = 1;
        this->unk14++;
        sub_0804C9C8(this);
    }
}


void sub_0802808C(struct Entity *this)
{
    if (this->form <= 8)
        sub_08000694(this);
    else
        sub_0800066C(this);
    gUnknown_0813CE9C[this->unk15](this);
    this->unk60 = 0;
}


void sub_080280C4(struct Entity *this)
{
    u16 v;

    sub_08028200(this);
    v = BITU16_AT(this, 0x74);
    if (v >= this->y.HALF.HI)
    {
        this->y.HALF_U.HI = v;
        sub_08028170(this);
    }
}

asm(".include \"asm/non_matching/file_select/sub_080280E8.inc\"");

void sub_0802810C(struct Entity *this)
{
    u16 v;

    sub_08028200(this);
    v = BITU16_AT(this, 0x74);
    if (v <= this->y.HALF.HI)
    {
        this->y.HALF_U.HI = v;
        sub_08028170(this);
    }
}

asm(".include \"asm/non_matching/file_select/sub_08028130.inc\"");

void sub_08028154(struct Entity *this)
{
    if (--this->unk68.w == (u32)-1)
        sub_08028170(this);
}
asm(".include \"asm/non_matching/file_select/sub_08028170.inc\"");

asm(".include \"asm/non_matching/file_select/sub_08028200.inc\"");

void sub_08028508(struct Entity *this)
{
    gUnknown_0813CFA0[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08028520.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080285A4.inc\"");

void sub_080285F8(struct Entity *this)
{
    gUnknown_0813CFE0[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08028610.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080286A0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080286C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08028728.inc\"");

void sub_08028848(struct Entity *this)
{
    gUnknown_0813CFEC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08028860.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080288FC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08028920.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08028960.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080289C8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08028A08.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08028A4C.inc\"");

void sub_08028A88(struct Entity *this)
{
    gUnknown_0813D0C8[this->unk14](this);
}


void sub_08028AA0(struct Entity *this)
{
    this->unk14++;
    this->unk45 = 100;
    this->unk3C = 137;
    this->unk40 = 56;
    this->unk3F = 62;
    this->unk48 = gUnknown_0813D120[this->form];
    this->unk5C = 0x21AA;
}

asm(".include \"asm/non_matching/file_select/sub_08028AE0.inc\"");

void sub_08028BA8(struct Entity *this)
{
    if (++this->unk17 < this->unk18)
    {
        if (this->unk17 & 1)
            sub_08029720(this);
    }
    else
    {
        sub_080291F8(this);
        sub_080161F8(8, 0);
        DeleteThisEntity(this);
    }
}

asm(".include \"asm/non_matching/file_select/sub_08028BE8.inc\"");

extern const u8 gUnknown_0813D0D8[];
void sub_08028BE8(struct Entity *);
void sub_08028CD0(struct Entity *);
asm(".include \"asm/non_matching/file_select/sub_08028C54.inc\"");

asm(".include \"asm/non_matching/file_select/sub_08028CD0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080291F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029720.inc\"");

void sub_080297F8(struct Entity *this)
{
    gUnknown_0813D258[this->parameter](this);
}


void sub_08029810(struct Entity *this)
{
    gUnknown_0813D260[this->unk14](this);
}


void sub_08029828(struct Entity *this)
{
    gUnknown_0813D268[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_08029840.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802986C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802993C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029954.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080299F4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029A70.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029AE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029C88.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029E48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029EE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08029FA0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A014.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A028.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A0A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A134.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A168.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A190.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A224.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802A28C.inc\"");

void sub_0802A304(struct Entity *this)
{
    if (this->unk18 != 0 && --this->unk18 == 0)
        sub_08003870(this, this->unk2A);
    gUnknown_0813D474[this->unk14](this);
}


extern const u8 gUnknown_0813D4CC[];
extern const u16 gUnknown_0813D480[];

void sub_0802A340(struct Entity *this)
{
    if ((this->parameter & 0x7F) == 3)
        this->parameter = (this->parameter & 0x80) | (gUnknown_03006C80.unk0 - 2);
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk5E_0 = 0;
    this->unk48 = gUnknown_0813D4CC;
    sub_08008DD8(this);
    sub_08003870(this, 0);
    this->unk7C.h = this->parameter >> 7;
    this->parameter &= 3;
    if (gUnknown_03006C80.unk2 != 0)
        sub_0802C070(this, gUnknown_0813D480[this->parameter + 12]);
    else
        sub_0802C070(this, gUnknown_0813D480[gUnknown_03006C80.unk1 * 3 + this->parameter]);
}


void sub_0802A3EC(struct Entity *this)
{
    u8 r = sub_0802A4EC(this);

    if (r >= this->parameter + 2) {
        gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->form];
        this->unk14 = 2;
        this->unk18 = 0;
        this->z.HALF.HI = 0;
        this->unk2A = 4;
        sub_08003870(this, 4);
        sub_08003DFC(113);
    } else {
        if (r > this->unk2A) {
            if (this->parameter + 1 == r) {
                this->unk18 = 4;
                sub_08003870(this, r + 1);
            } else {
                sub_08003870(this, r);
            }
            sub_08003DFC(18);
        } else if (r < this->unk2A) {
            sub_08003870(this, r);
        }
        this->unk2A = r;
    }
}


u8 sub_0802A4EC(struct Entity *);

void sub_0802A490(struct Entity *this)
{
    u8 r;

    if (this->unk7C.h != 0) {
        r = sub_0802A4EC(this);
        if (r < this->parameter + 2) {
            this->unk14 = 1;
            this->unk2A = r;
            gUnknown_0201F000[this->unk52] ^= gUnknown_08137B10[this->form];
            sub_08003870(this, this->unk2A);
        }
    }
}

asm(".include \"asm/non_matching/file_select/sub_0802A4EC.inc\"");

void sub_0802A6A4(struct Entity *this)
{
    gUnknown_0813D4D4[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802A6BC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802AB7C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802ABDC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802AC68.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802ACA4.inc\"");

void sub_0802AE40(struct Entity *this)
{
    gUnknown_084276EC[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802AE58.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802AED4.inc\"");

void sub_0802B018(struct Entity *this)
{
    gUnknown_0813D5C8[this->unk14](this);
}


void sub_0802B030(struct Entity *this)
{
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk5E_0 = 0;
    this->x.HALF.HI = (this->x.HALF.HI & 0x3F0) + 8;
    this->y.HALF.HI = (this->y.HALF.HI & 0x3F0) + 8;
    this->unk7C.h = (this->x.HALF.HI - gUnknown_03000450.unk18) >> 4 | ((this->y.HALF.HI - gUnknown_03000450.unk1A) >> 4) << 6;
    sub_08008F48(0x4000, this->unk7C.h, this->unk50);
    sub_08003870(this, this->form);
}


void sub_0802B0A8(struct Entity *this)
{
    if (sub_0800932C(this->unk7C.h, this->unk50) == 0x4008) {
        sub_08008F48(0x4000, this->unk7C.h, this->unk50);
        this->unk14 = 2;
        this->unk78.b = 0;
        this->unk78.s.unk7A = 0;
        this->unk7C.s.unk7E = 60;
        sub_08003DFC(152);
    }
}


void sub_0802B148(struct Entity *);

void sub_0802B0F8(struct Entity *this)
{
    if (this->unk7C.s.unk7E != 0) {
        if ((--*(u16 *)((u8 *)this + 0x7E) & 7) == 0) /* matching: the bitfield form adds a 0xFFFF mask */
            sub_0802B148(this);
        GetNextFrame(this);
    } else if (this->unk78.b != 0) {
        this->unk78.b--;
        this->unk7C.s.unk7E = 32;
    } else {
        this->unk14 = 1;
        sub_08003870(this, this->form);
    }
}

asm(".include \"asm/non_matching/file_select/sub_0802B148.inc\"");

void sub_0802B200(struct Entity *this)
{
    gUnknown_0842770C[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802B218.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B270.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B324.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B34C.inc\"");

void sub_0802B394(struct Entity *this)
{
    gUnknown_08427744[this->unk14](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802B3AC.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B474.inc\"");

void sub_0802B578(struct Entity *this)
{
    gUnknown_08427754[this->unk15](this);
}

asm(".include \"asm/non_matching/file_select/sub_0802B590.inc\"");

void sub_0802B5B4(void)
{
}

asm(".include \"asm/non_matching/file_select/sub_0802B5B8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B5D8.inc\"");

void sub_0802B608(void)
{
    sub_0802B5D8();
}

asm(".include \"asm/non_matching/file_select/sub_0802B614.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B698.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B6BC.inc\"");


void sub_0802B738(void)
{
    gUnknown_02016328 = 1;
    sub_0802BF30();
}


void sub_0802B74C(void)
{
    if (gUnknown_03000E20.unk12 == 0)
        gUnknown_0813D678[gUnknown_0202A770.unk0]();
}
asm(".include \"asm/non_matching/file_select/sub_0802B778.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0802B820.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B8D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B964.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802B9D0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BA60.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BA8C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BAB8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BB10.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BB24.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BC1C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BC48.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BC74.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BCE4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BD58.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802BE4C.inc\"");

void sub_0802BF30(void)
{
    u8 n = gUnknown_0202A770.unk66;

    gUnknown_0202A770.unk0 = 0;
    gUnknown_0202A770.unk8 = gUnknown_0202A770.unk5C + (sub_0800099C() & (n - 1)) - (n >> 1);
}


extern u8 gUnknown_02016C50[];

void sub_0802BF60(void)
{
    u8 i;

    zero_memory(gUnknown_0202A3F0, 256);
    zero_memory(gUnknown_02016C50, 256);
    for (i = 0; i < 8; i++) {
        gUnknown_0202A3F0[i].unk0 |= 0xFF;
        gUnknown_0202A3F0[i].unk1 |= 0xFF;
    }
    for (i = 43; i < 64; i++) {
        gUnknown_0202A3F0[i].unk0 |= 0xFF;
        gUnknown_0202A3F0[i].unk1 |= 0xFF;
    }
}


void sub_0802BFC4(void)
{
    u8 i;
    u32 **pp;
    u32 *r;

    for (i = 8; i <= 42; i++) {
        pp = &((u32 **)gUnknown_02016C50)[i];
        if (*pp != NULL && sub_0800C984()) {
            r = *pp;
            sub_080009F4((void *)(0x06010000 + (i << 9)), (r[0] & 0xFFFFFF) + (u32)gUnknown_03000030, r[1]);
            *pp = NULL;
            if ((s32)r[0] >= 0)
                gUnknown_0202A3F0[gUnknown_0202A3F0[i].unk0 & 63].unk0 &= 0xBF;
            else
                ((u32 **)gUnknown_02016C50)[(u8)(i + ((r[1] + 511) >> 9))] = r + 2;
            return;
        }
    }
}


void sub_0802C1C0(struct Struct0202E110 *, u16);
asm(".include \"asm/non_matching/file_select/sub_0802C070.inc\"");


void sub_0802C0EC(struct Entity *this)
{
    struct Struct0202E110 *p;
    u8 id;

    if (this->unk53 != 0)
    {
        id = this->unk53;
        p = &gUnknown_0202A3F0[id];
        if ((p->unk0 & 63) == id)
        {
            do
            {
                if (p->unk1 != 0)
                    p->unk1--;
                p++;
            } while ((p->unk0 & 63) == id);
        }
    }
}

asm(".include \"asm/non_matching/file_select/sub_0802C12C.inc\"");
// Longest run of 4-byte records whose byte 1 is 0 (35 records)
u8 sub_0802C148(void)
{
    u8 *p = gUnknown_0202A410;
    u8 best = 0;
    u8 n;

    do {
        if (p[1] == 0) {
            n = 0;
            do {
                n++;
                p += 4;
            } while (p[1] == 0);
            if (best < n)
                best = n;
        }
        p += 4;
    } while (p < gUnknown_0202A410 + 140);
    return best;
}


asm(".include \"asm/non_matching/file_select/sub_0802C180.inc\"");


asm(".include \"asm/non_matching/file_select/sub_0802C1C0.inc\"");

u8 sub_0802C23C(u16 i)
{
    const struct U32Pair *p;
    u8 n;

    n = 0;
    p = gUnknown_0842AA54[i];
    p--;
    do
    {
        p++;
        n += (p->unk4 + 511) >> 9;
    } while (p->unk0 & 0x80000000);
    return n;
}


void sub_0802C278(void)
{
    struct Struct0202E110 *p;

    p = gUnknown_0202E110;
    do
    {
        p->unk0 |= 0xFF;
        p->unk1 |= 0xFF;
        p->unk2 = 0;
        p++;
    } while (p < gUnknown_0202E110 + 16);
    p = gUnknown_0202E110 + 11;
    do
    {
        p->unk0 = 0;
        p->unk1 = 0;
        p++;
    } while (p < gUnknown_0202E110 + 15);
}


void sub_0802C2B8(u8 *p, u8 a, u8 n)
{
    do
    {
        p[0]++;
        p[1] = a;
        p[2] = n;
        p += 4;
    } while (--n != 0);
}

asm(".include \"asm/non_matching/file_select/sub_0802C2DC.inc\"");

void sub_0802C39C(u8 id)
{
    struct Struct0202E110 *p = gUnknown_0202E110;

    do
    {
        if (p->unk1 == id && p->unk0 != 0)
            p->unk0--;
        p++;
    } while (p < gUnknown_0202E110 + 16);
}


u32 sub_0802C3C4(u8 a)
{
    return *(u32 *)0x03000030 + *gUnknown_08427768[a];
}


u32 sub_0802C3E0(u8 a)
{
    return gUnknown_0813D72C[a];
}

asm(".include \"asm/non_matching/file_select/sub_0802C3F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802C4F8.inc\"");

s32 sub_0802C528(s32 a, s32 b, s32 max)
{
    a += b;
    if (a < 0)
        return 0;
    if (a > max)
        return max;
    return a;
}

asm(".include \"asm/non_matching/file_select/sub_0802C53C.inc\"");

void sub_0802C6AC(struct Entity *this)
{
    struct Entity *e = sub_0804C8A8(75, 0, 0);

    if (e != NULL)
        e->unk4C = this;
    gUnknown_03006C80.unk5C[this->form]++;
    gUnknown_03000420[2] = 1;
    play_sound(9);
}

asm(".include \"asm/non_matching/file_select/sub_0802C6E8.inc\"");
struct View0201ED90 { u8 pad[8]; u32 unk8, unkC, unk10; };

void sub_0802C710(struct Entity *this)
{
    gUnknown_03006C80.unk68[this->form].v++;
    play_sound(143);
    switch (gUnknown_03006C80.unk68[this->form].v) {
    case 1:
        sub_0800D6A4(0x301);
        ((struct View0201ED90 *)&gUnknown_0201ED90)->unk8 = this->form + 1;
        ((struct View0201ED90 *)&gUnknown_0201ED90)->unk10 = 500;
        break;
    case 2:
    case 3:
        sub_0800D6A4(0x302);
        ((struct View0201ED90 *)&gUnknown_0201ED90)->unk8 = this->form + 1;
        ((struct View0201ED90 *)&gUnknown_0201ED90)->unkC = (u16)(4 - gUnknown_03006C80.unk68[this->form].v);
        break;
    case 4:
        ((struct { u8 pad[36]; u16 a[4]; } *)gUnknown_03000420)->a[this->form] = 15;
        break;
    }
}


asm(".include \"asm/non_matching/file_select/sub_0802C7A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802C800.inc\"");

void sub_0802C89C(void)
{
    u8 *p = gUnknown_03000420;

    *(u32 *)&p[16] = gUnknown_03006C80.unk8;
    p[11] = gUnknown_03006C80.unk4 + 1;
    p[14] = gUnknown_03006730->unkF & 2;
    p[8] = gUnknown_03006730->unk28->unk45;
    p[9] = gUnknown_03006C80.unk64[gUnknown_03006730->unk28->form].v;
    p[2] = 1;
}

asm(".include \"asm/non_matching/file_select/sub_0802C8E4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802C8F8.inc\"");

void sub_0802C934(void)
{
    gUnknown_03000420[2] = 1;
}


void sub_0802C940(void)
{
    if (gUnknown_03000420[2] != 0)
    {
        gUnknown_03000420[2] = 0;
        gUnknown_030004A0.bgConfig[0].unk6 = 1;
        gUnknown_030004A0.bgConfig[0].mapBuf = gBG0Buffer + (gUnknown_03000420[3] << 11);
        gUnknown_03000420[3] ^= 1;
    }
}


void sub_0802C974(u8 a, u8 b)
{
    if (gUnknown_03000420[0] != 0)
    {
        if (a <= 3)
        {
            sub_0802D514();
            sub_0802D428();
            sub_0802C934();
        }
        else if (a + b > 15)
        {
            sub_0802D280();
            sub_0802D354();
            sub_0802C934();
        }
    }
}


void sub_0802D514(void);
void sub_0802D280(void);

void sub_0802C9B8(void)
{
    u8 *buf;

    load_gfx_group(1);
    buf = sub_0800BD14(256);
    CpuFastSet(gUnknown_03000030 + ((gUnknown_03006C80.unk7 << 7) + 0x435A0), buf, 32);
    CpuFastSet(gUnknown_03000030 + (((gUnknown_03006C80.unk4 + 1) / 10 << 6) + 0x43320), buf + 128, 16);
    CpuFastSet(gUnknown_03000030 + (((gUnknown_03006C80.unk4 + 1) % 10 << 6) + 0x43320), buf + 192, 16);
    sub_080009EC((void *)0x0600CB00, buf, 256);
    sub_0802D514();
    sub_0802D280();
    CpuFastSet(gBG0Buffer, gBG0Buffer + 0x800, 512);
}

asm(".include \"asm/non_matching/file_select/sub_0802CA70.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802CAA8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802CC20.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802CD3C.inc\"");

void sub_0802CE98(void)
{
    if (!(gUnknown_03000948.unk0 & 63) && gUnknown_03000420[8] <= gUnknown_03000420[9] * 2)
        play_sound(37);
}


// 1 if some player's unk45 is set, at most twice their unk64 entry, and the timer passed unk8
u8 sub_0802CEC4(void)
{
    u8 found = 0;
    u8 i;

    for (i = 0; i < gUnknown_03006C80.unk0; i++) {
        if (gUnknown_03006A30[i].unk28->unk45 != 0
         && gUnknown_03006A30[i].unk28->unk45 <= gUnknown_03006C80.unk64[i].v * 2
         && sub_08004710() > gUnknown_03006C80.unk8)
            found = 1;
    }
    return found;
}


u8 sub_0802CEC4(void);
u16 sub_08004710(void);

void sub_0802CF20(void)
{
    u8 r = sub_0802CEC4();

    if (r != 0) {
        if (gUnknown_03006C80.unk51 == 0) {
            gUnknown_03006C80.unk51 = 1;
            sub_0800D6A4(516);
            ((struct { u8 pad[16]; u32 v; } *)&gUnknown_0201ED90)->v = sub_08004710();
        }
    } else {
        gUnknown_03006C80.unk51 = r;
    }
    sub_0803A20C();
}



// Reloads the 0x180-byte tile set for the player's current unk3E_2 form when it changed
void sub_0802CF70(void)
{
    if (gUnknown_03000420[7] != gUnknown_03006730->unk3E_2) {
        gUnknown_03000420[7] = gUnknown_03006730->unk3E_2;
        sub_080009F4((void *)0x0600C200, (u32)(gUnknown_03000030 + (u32)gUnknown_084277B0[gUnknown_03000420[7]]), 384);
    }
}


asm(".include \"asm/non_matching/file_select/sub_0802CFBC.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0802D104.inc\"");


asm(".include \"asm/non_matching/file_select/sub_0802D190.inc\"");


void sub_0802D1E8(void)
{
    if (*(u32 *)gUnknown_03000420 & 0x00FFFF00)
    {
        sub_0802D280();
        sub_0802D354();
        sub_0802D428();
        if (gUnknown_03000420[5] != 0)
        {
            sub_0802D67C();
            sub_0802D744();
        }
        gUnknown_03000420[1] = gUnknown_03000420[2] != 0;
    }
}


// Writes n as `digits` decimal digits ending at p, top half tile 32+d, bottom half 64+d one row down
asm(".include \"asm/non_matching/file_select/sub_0802D228.inc\"");

asm(".include \"asm/non_matching/file_select/sub_0802D280.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D354.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D428.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D514.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D620.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D67C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D6F0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D744.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D7BC.inc\"");

void sub_0802D7E8(void)
{
    u8 i;

    if (gUnknown_03000420[12] == 7)
    {
        if (gUnknown_03000420[14] == 2)
            i = 4;
        else
            i = 7;
    }
    else
        i = gUnknown_03000420[12];
    gUnknown_02030A70.unk5_4 = gUnknown_0813D72C[i];
}


void sub_0802D820(void)
{
    if (gUnknown_03000420[12] != 0)
        sub_080009F4((void *)0x06015D00, *(u32 *)0x03000030 + *gUnknown_08427768[gUnknown_03000420[12]], 128);
}

asm(".include \"asm/non_matching/file_select/sub_0802D858.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D8C0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802D8E4.inc\"");

void sub_0802D954(void)
{
    zero_memory(gUnknown_0201EF18, 8);
    gUnknown_03000E20.unk11 = 0;
}


void sub_0802D970(void)
{
    gUnknown_0201EF18[5] = 1;
}

asm(".include \"asm/non_matching/file_select/sub_0802D97C.inc\"");

void sub_0802D988(void)
{
    gUnknown_084277D4[gUnknown_0201EF18[0]]();
}

asm(".include \"asm/non_matching/file_select/sub_0802D9A8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DA30.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DAE0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DB24.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DB8C.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DBE8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_0802DC2C.inc\"");

void sub_0802DC60(void)
{
    gUnknown_084277E8[gUnknown_03005050]();
}

