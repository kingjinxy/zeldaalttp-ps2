#include "gba/gba.h"
#include "global.h"
#include "entity.h"

#include "sounds.h"

// Room map buffer (gUnknown_0201F020 and gUnknown_0200B320): tiles, attributes, block tables
struct MapBuf { u32 unk0; u16 tiles[0x1000]; u8 attrs[0x1000]; u16 unk3004[0x1000]; u16 unk5004[0x1000]; u16 blocks[0x800][4]; };
extern u8 gUnknown_02038000[];

#ifdef NONMATCHING
// Declarations the NONMATCHING functions below share
extern u8 gUnknown_0200B314;
extern u8 gUnknown_02000430[];
extern const u8 gUnknown_0813AAFC[];
extern const u8 gUnknown_0813AB00[];
extern const s8 gUnknown_0813D0D4[];
extern const u8 gUnknown_084296C0[];
extern const struct U32x3 gUnknown_084296F0[];
#endif

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
#ifdef NONMATCHING
// Creates player n's entity at tile (tx, ty)
void sub_08012824(u8 n, u8 tx, u8 ty)
{
    struct Entity *e = sub_080123E8();

    if (e != NULL) {
        e->type = 1;
        e->subtype = 0;
        e->form = n;
        e->unk1F_6 = 2;
        e->unk20 = n << 5;
        e->unk3C = n | 0x80;
        e->unk46 = 2;
        e->unk1E_0 = n + 7;
        e->unk1E_4 = n + 7;
        e->unk1D_6 = 2;
        e->x.HALF.HI = tx * 16 + 8;
        e->y.HALF.HI = ty * 16 + 8;
        e->unk2A = 4;
        e->unk45 = gUnknown_03006C80.unk60[n].v;
        sub_08012728(1, e);
        gUnknown_03006A30[n].unk28 = e;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08012824.inc\"");
#endif

#ifdef NONMATCHING
extern const u8 gUnknown_0842B8E4[];
extern u8 gUnknown_03006D04[];
void sub_08012824(u8, u8, u8);

// Picks the players' start tiles (fixed, from the room's list, or its default, shuffled) and creates them
void sub_080128EC(u8 *room)
{
    u8 pos[8];
    const u8 *src;
    u32 i, j;
    u8 t;
    u8 *p;
    u8 n;

    if (gUnknown_03006C80.unk2 != 0 && (gUnknown_03006C80.unk4F & 32)) {
        src = gUnknown_0842B8E4 + (gUnknown_03006C80.unk4F & 15) * 8;
        for (i = 0; i <= 7; i++)
            pos[i] = *src++;
        gUnknown_0201F000[0] |= 1;
    } else {
        src = *(const u8 **)(*(u8 **)(room + 20) + 24);
        if (src != NULL) {
            n = *src++;
            src += (sub_0800099C() % n) * 8;
        } else {
            src = room + 12;
        }
        for (i = 0; i <= 7; i++)
            pos[i] = *src++;
        if (gUnknown_03006C80.unk2 == 0) {
            p = &pos[6];
            for (i = 3; i != 0; i--) {
                j = sub_0800099C() % i;
                t = p[0];
                p[0] = pos[j * 2];
                pos[j * 2] = t;
                t = p[1];
                p[1] = pos[j * 2 + 1];
                pos[j * 2 + 1] = t;
                p -= 2;
            }
        }
    }
    p = pos;
    for (i = 0; i < gUnknown_03006C80.unk0; i++) {
        sub_08012824(i, p[0], p[1]);
        gUnknown_03006A30[i].unk28->unk45 = gUnknown_03006C80.unk60[i].v;
        p += 2;
    }
    CpuSet(pos, gUnknown_03006D04, 4);
    gUnknown_03000450.unk0 = gUnknown_03006A30[gLCDRegisterBuffer].unk28;
}
#else
asm(".include \"asm/non_matching/file_select/sub_080128EC.inc\"");
#endif

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

#ifdef NONMATCHING
void sub_08012A94(u16 a, u16 b)
{
    if (gUnknown_03006C80.unk1 == 3) {
        if ((u16)(a - 189) <= 1)
            sub_08008F78((sub_0800099C() & 0xFF) > 126 ? 177 : 187, b, 0x4000);
        else if (a == 203 || a == 190)
            sub_08008F78((sub_0800099C() & 0xFF) > 126 ? 191 : 201, b, 0x8000);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08012A94.inc\"");
#endif

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

#ifdef NONMATCHING
void sub_08012B64(u8 k)
{
    u8 *p;
    u8 i;
    u32 n = 0;
    u8 key = k << 5;

    for (i = 0, p = (u8 *)gUnknown_02016350; i < 32; i++, p += 4)
        if ((p[2] & 0xE0) == key && (p[2] & 31) == 7)
            n++;
    n = sub_0800099C() % n;
    for (i = 0, p = (u8 *)gUnknown_02016350; i < 32; i++, p += 4) {
        if ((p[2] & 0xE0) == key && (p[2] & 31) == 7) {
            if (n == 0) {
                p[2] &= 0xE0;
                p[3] = 16;
            } else {
                p[2] = (p[2] & 0xE0) | 1;
            }
            n--;
        }
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08012B64.inc\"");
#endif
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
#ifdef NONMATCHING
void sub_0801303C(const u8 *src, const u8 *offs, u8 k)
{
    u8 *rec = (u8 *)gUnknown_02016350;
    u8 i = 0;
    u8 x, y;

    while (*src != 0xFF) {
        if (*(u16 *)rec == 0xFFFF) {
            x = src[0];
            y = src[1];
            if (k != 0) {
                x += offs[4 + (k - 1) * 2];
                y += offs[4 + (k - 1) * 2 + 1];
            }
            *(u16 *)rec = x | (y << 6);
            rec[2] = (src[2] & 31) | (k << 5);
            rec[3] = src[3];
            src += 4;
        }
        i++;
        rec += 4;
        if (i > 31)
            break;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801303C.inc\"");
#endif

asm(".include \"asm/non_matching/file_select/sub_080130D4.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08013120.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080131C8.inc\"");

#ifdef NONMATCHING
struct Room08013120 { u16 unk0; u16 unk2; u32 *unk4; };
struct Room08013120 *sub_08013120(const u8 *, u32);
void sub_08015FE4(u16, u8, u8);

void sub_080131FC(const u8 *a, u32 b)
{
    u8 i = 0;
    u32 n;
    struct Room08013120 *r;
    const u8 *px, *py;

    while (i < a[2]) {
        r = sub_08013120(a, b);
        n = i + 1;
        gUnknown_02016330[n] = r->unk4;
        px = &a[4 + i * 2];
        py = &a[4 + i * 2 + 1];
        sub_08015FE4(r->unk0, *px, *py);
        i = n;
        if (sub_08012F84(i, 0))
            sub_08013C8C((u16 *)sub_08012F84(i, 0), *px, *py, n);
        if (sub_08012F84(i, 1))
            sub_08013C8C((u16 *)sub_08012F84(i, 1), *px, *py, n);
        if (sub_08012F84(i, 3))
            sub_0801303C((const u8 *)sub_08012F84(i, 3), a, i);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_080131FC.inc\"");
#endif

struct Area080132B0 { u8 *unk0; u32 unk4; };

#ifdef NONMATCHING
extern u8 *const gUnknown_0842B8A8[];
extern const u16 gUnknown_0842B8C0[];
extern struct Area080132B0 *const gUnknown_0842AD08[];
u8 sub_080131C8(void);
u32 sub_080130D4(struct Area080132B0 *);

// Picks the next room: fixed for special modes, otherwise the next in the shuffled order that fits
struct Area080132B0 *sub_080132B0(void)
{
    u8 f, k, sel;
    struct Area080132B0 *r;

    if (gUnknown_03006C80.unk2 != 0) {
        f = gUnknown_03006C80.unk4F;
        if (f & 16) {
            if (gUnknown_03006C80.unk0 > 1)
                k = (gUnknown_03006C80.unk0 - 2) << 3;
            else
                k = 0;
            return (struct Area080132B0 *)(gUnknown_0842B8A8[5] + (k + (f & 15)) * 8 + 8);
        }
        if (!(f & 32) && (f & 64))
            return (struct Area080132B0 *)(gUnknown_0842B8A8[4] + (gUnknown_03006C80.unk0 * 2 - 5 + gUnknown_03006C80.unk4) * 8);
        return (struct Area080132B0 *)gUnknown_0842B8A8[5];
    }
    if (gUnknown_03006C80.unk5 != 0)
        return gUnknown_0842AD08[gUnknown_03006C80.unk1];
    sel = sub_080131C8();
    do {
        do
            gUnknown_03006C80.unk49 = (gUnknown_03006C80.unk49 + 1) & 63;
        while (gUnknown_0202A720[gUnknown_03006C80.unk49] >= gUnknown_0842B8C0[gUnknown_03006C80.unk1]);
        gUnknown_03006C80.unk48 = gUnknown_0202A720[gUnknown_03006C80.unk49];
        r = (struct Area080132B0 *)(gUnknown_0842B8A8[gUnknown_03006C80.unk1] + gUnknown_03006C80.unk48 * 8);
    } while ((r->unk4 >> 30) != sel || !sub_080130D4(r));
    return r;
}
#else
asm(".include \"asm/non_matching/file_select/sub_080132B0.inc\"");
#endif

struct Area080132B0 *sub_080132B0(void);
void sub_080128EC(u8 *);
void sub_08015DD8(u16);
void sub_08015F74(u16);
void sub_080131FC(const u8 *, u32);
void sub_0801303C(const u8 *, const u8 *, u8);

void sub_080133D0(void)
{
    struct Area080132B0 *s = sub_080132B0();
    u8 *a = s->unk0;
    u32 b = s->unk4;

    gUnknown_03006C80.unk2 = a[1] == 4;
    gUnknown_02016330[0] = *(u32 **)(a + 20);
    gUnknown_03006C80.unk4C = a[3];
    sub_080128EC(a);
    sub_08015DD8(a[1]);
    sub_08015F74(a[0]);
    gUnknown_0201EFF8[0][1] = 0;
    gUnknown_0201EFF8[0][0] = 0;
    gUnknown_0201EFF8[1][0] = a[4] * 16;
    gUnknown_0201EFF8[1][1] = a[5] * 16;
    if (sub_08012F84(0, 0))
        sub_08013C8C((u16 *)sub_08012F84(0, 0), 0, 0, 0);
    if (sub_08012F84(0, 1))
        sub_08013C8C((u16 *)sub_08012F84(0, 1), 0, 0, 0);
    if (sub_08012F84(0, 3))
        sub_0801303C((const u8 *)sub_08012F84(0, 3), a, 0);
    sub_080131FC(a, b);
}

#ifdef NONMATCHING
// Shuffles n halfwords in place: interleaves the two halves into gUnknown_02038000, splits that into four
// runs (A, B, C forward/backward, D backward from the end) and merges them back in one of four random orders
void sub_08013490(u16 *list, u16 n)
{
    u16 *tmp = (u16 *)gUnknown_02038000;
    u16 *s1, *s2, *d;
    u16 c1, c2;
    u16 *pa, *pb, *pc, *pd;
    u16 na, nb, nc, nd, q, rem;

    if (n == 0)
        return;
    c1 = (n >> 1) + (n & 1);
    c2 = n >> 1;
    s1 = list;
    s2 = list + c1;
    d = tmp;
    do {
        *d++ = *s1++;
        c1--;
        if (c2) {
            *d++ = *s2++;
            c2--;
        }
    } while (c1);

    q = n >> 2;
    na = nb = nc = nd = q;
    rem = n & 3;
    if (rem >= 1) na++;
    if (rem >= 2) nb++;
    if (rem >= 3) nc++;
    pa = tmp;
    pc = tmp + na + nb;
    pb = pc - 1;
    pd = tmp + n - 1;
    d = list;
#define TAKE_A  { *d++ = *pa++; na--; }
#define TAKE_B  if (nb) { *d++ = *pb--; nb--; }
#define TAKE_C  if (nc) { *d++ = *pc++; nc--; }
#define TAKE_D  if (nd) { *d++ = *pd--; nd--; }
    switch (sub_0800099C() & 3) {
    case 0:
        do { TAKE_A TAKE_B TAKE_C TAKE_D } while (na);
        break;
    case 1:
        do { TAKE_D TAKE_C TAKE_B TAKE_A } while (na);
        break;
    case 2:
        do { TAKE_C TAKE_A TAKE_D TAKE_B } while (na);
        break;
    case 3:
        do { TAKE_B TAKE_D TAKE_A TAKE_C } while (na);
        break;
    }
#undef TAKE_A
#undef TAKE_B
#undef TAKE_C
#undef TAKE_D
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013490.inc\"");
#endif
#ifdef NONMATCHING
u16 *sub_080136D4(u16 tile, u16 w, u16 h)
{
    u16 n = w * h;
    u16 *buf = sub_0800BD14((n + 1) * 2);
    u16 *p;
    u16 i, j;

    if (buf == NULL)
        return NULL;
    buf[0] = n;
    p = buf + 1;
    for (j = 0; j < h; j++) {
        for (i = 0; i < w; i++)
            *p++ = tile++;
        tile += 64 - w;
    }
    sub_08013490(buf + 1, n);
    return buf;
}
#else
asm(".include \"asm/non_matching/file_select/sub_080136D4.inc\"");
#endif
#ifdef NONMATCHING
struct Struct0202A580 *sub_08013754(u16 a, u16 w, u16 h)
{
    u16 i;
    u16 *buf;

    for (i = 0; i < 8; i++)
        if (gUnknown_0202A580[i].unk4 == a && gUnknown_0202A580[i].unk6 == w && gUnknown_0202A580[i].unk7 == h)
            return &gUnknown_0202A580[i];
    buf = sub_080136D4(a, w, h);
    if (buf == NULL)
        return NULL;
    for (i = 0; i < 8; i++) {
        if (gUnknown_0202A580[i].unk0 == 0) {
            gUnknown_0202A580[i].unk0 = (u32)buf;
            gUnknown_0202A580[i].unk4 = a;
            gUnknown_0202A580[i].unk6 = w;
            gUnknown_0202A580[i].unk7 = h;
            gUnknown_0202A580[i].unk8 = 0;
            return &gUnknown_0202A580[i];
        }
    }
    sub_0800BE50((u8 *)buf);
    return NULL;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013754.inc\"");
#endif


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

#ifdef NONMATCHING
u16 sub_08008E5C(u16);

// Puts object record p (room b) into the first free 4-byte slot of [r, end): tile position, flags, id
u32 sub_08013948(u16 *p, u8 b, u32 *r, u32 *end)
{
    u8 hi = p[1] >> 8;
    u8 lo = p[1];
    u16 f;
    u16 v;

    for (; r < end; r++) {
        if (*(u16 *)r == 0) {
            *(u16 *)r = (u16)((p[2] & 0x3FF) + gUnknown_0201EFF8[b][0]) >> 4
                      | ((u16)((p[3] & 0x3FF) + gUnknown_0201EFF8[b][1]) >> 4) << 6;
            f = p[2] & 0xC00;
            if (f) {
                *(u16 *)r |= f << 4;
            } else {
                v = *(u16 *)r;
                *(u16 *)r = v | (sub_08008E5C(v) ? 0x8000 : 0x4000);
            }
            if (b)
                *(u16 *)r |= 0x1000;
            ((u8 *)r)[2] = hi;
            ((u8 *)r)[3] = lo;
            return 1;
        }
    }
    return 0;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013948.inc\"");
#endif
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
#ifdef NONMATCHING
struct TileRec { u16 h; u8 a; u8 b; };  // h: tile position (bits 0-11), layer (14-15), room (12), done (13)
void sub_08013C04(const u16 *);
void sub_0801478C(u16, u16);
void sub_08013C50(u32 *, u32 *);

// Applies pending tile changes whose flags (gUnknown_0201F000[room]) are all set, and spawns pending objects
void sub_08013A60(void)
{
    struct TileRec *r;
    u32 m;
    u16 h;
    u32 changed;

    changed = 0;
    for (r = (struct TileRec *)gUnknown_0201EF30; r < (struct TileRec *)gUnknown_0201EF30 + 48; r++) {
        if (r->h == 0)
            break;
        if (!(r->h & 0x2000)) {
            m = sub_08013D20(r->a);
            if (r->a == 0xFF || (gUnknown_0201F000[(r->h & 0x1000) >> 12] & m) == m) {
                r->a = 0xFF;
                sub_080144F0(310, r->h & 0xFFF, r->h & 0xC000);
                sub_08013C04(&r->h);
                r->h |= 0x2000;
            }
        }
        if (r->b != 0xFF) {
            m = sub_08013D20(r->b);
            h = r->h;
            if ((gUnknown_0201F000[(h & 0x1000) >> 12] & m) == m) {
                r->b = 0xFF;
                sub_0801478C(h & 0xFFF, h & 0xC000);
                sub_08013C04(&r->h);
            }
            if (*(u16 *)&r->a == 0xFFFF)
                r->h = 0;
            changed = 1;
        }
    }
    if (changed)
        sub_08013C50(gUnknown_0201EF30, gUnknown_0201EF30 + 48);

    changed = 0;
    for (r = (struct TileRec *)gUnknown_02003110; r < (struct TileRec *)gUnknown_02003110 + 48; r++) {
        struct Entity *e;

        if (r->h == 0)
            break;
        m = sub_08013D20(r->a);
        if ((gUnknown_0201F000[(r->h & 0x1000) >> 12] & m) == m) {
            e = sub_0804C8A8(8, r->a, r->b | 0x80);
            if (e != NULL) {
                e->x.HALF.HI = ((r->h & 63) << 4) | 8;
                e->y.HALF.HI = ((r->h & 0xFC0) >> 2) | 8;
                e->unk52 = (r->h & 0x1000) >> 12;
            }
            r->h = 0;
            changed = 1;
        }
    }
    if (changed)
        sub_08013C50(gUnknown_02003110, gUnknown_02003110 + 48);
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013A60.inc\"");
#endif

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
#ifdef NONMATCHING
extern u8 gUnknown_0202A760[];

void sub_08013C8C(u16 *p, u16 b, u16 c, u8 room)
{
    struct Entity *e;

    while (*p != 0xFFFF) {
        if (sub_080138F0(p, room) && (e = sub_080123E8()) != NULL && sub_0800A148(e, (const u8 *)p, room)) {
            e->unk52 = room;
            if (e->type == 6) {
                if (e->subtype == 33) {
                    e->unk20 = sub_08013D54(e->form);
                    gUnknown_0202A760[e->unk17 & 3] = e->form;
                } else if (e->subtype == 45) {
                    gUnknown_0202A760[e->unk17 & 3] = e->parameter;
                }
            }
        }
        p += 4;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013C8C.inc\"");
#endif


asm(".include \"asm/non_matching/file_select/sub_08013D20.inc\"");


#ifdef NONMATCHING
u32 sub_08013D54(u8 id)
{
    u8 i;
    u8 r;

    if (gUnknown_0200B314 == 8)
        return 0;
    for (i = 0; i < gUnknown_0200B314; i++)
        if (gUnknown_02000430[i] == id)
            break;
    if (i == gUnknown_0200B314) {
        sub_080009F4((void *)(0x06015800 + gUnknown_0200B314 * 128), sub_0802C3C4(id), 128);
        gUnknown_02000430[gUnknown_0200B314] = id;
        r = gUnknown_0200B314 * 4 + 0xC0;
        gUnknown_0200B314++;
    } else {
        r = i * 4 + 0xC0;
    }
    return r;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08013D54.inc\"");
#endif


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



#ifdef NONMATCHING
extern const u16 gUnknown_08429A4C[][8];
void sub_080141E8(void)
{
    u8 i, j;
    s32 v;
    const u16 *t;

    for (i = 0; i < gUnknown_03006C80.unk0; i++) {
        v = sub_080141AC(i);
        t = gUnknown_08429A4C[gUnknown_03006C80.unk1];
        j = 0;
        while (*t <= v) {
            j++;
            t++;
            if (j > 6)
                break;
        }
        gUnknown_03006C80.unk54[i] = j > 7 ? 7 : j;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_080141E8.inc\"");
#endif

#ifdef NONMATCHING
extern const u8 *const gUnknown_08429D70[];

void sub_0801424C(void)
{
    u8 k = gUnknown_03006C80.unk6 - 1;
    u8 i;
    u16 min;
    u32 lvl;

    for (i = 0; i < gUnknown_03006C80.unk0 && gUnknown_03006C80.unk28[i].unk5 == 63; i++)
        ;
    if (i == gUnknown_03006C80.unk0)
        k++;
    min = 0xFFFF;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
        if (gUnknown_03006C80.unk28[i].unk6 < min)
            min = gUnknown_03006C80.unk28[i].unk6;
    lvl = min;
    if (min != 0) {
        if (min <= 5)
            lvl = 1;
        else if (min <= 10)
            lvl = 2;
        else
            lvl = 3;
    }
    gUnknown_03006C80.filler4D = gUnknown_08429D70[gUnknown_03006C80.unk1][k * 4 + lvl];
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801424C.inc\"");
#endif
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
#ifdef NONMATCHING
extern u8 gUnknown_02016D90[];
extern u8 gUnknown_020031D0[];
extern const u8 gUnknown_0814AB24[];

void sub_0801478C(u16 pos, u16 v)
{
    struct MapBuf *m = (struct MapBuf *)sub_08015DC0(v);
    u16 t;
    u32 off;
    u16 *dst;
    u16 *src;

    t = m->tiles[pos] = m->unk3004[pos];
    m->attrs[pos] = gUnknown_0814AB24[m->unk5004[t]];
    off = (pos & 63) * 2 + (pos & 0xFC0) * 4;
    if (v >> 14 == 2)
        dst = (u16 *)gUnknown_020031D0 + off;
    else
        dst = (u16 *)gUnknown_02016D90 + off;
    src = m->blocks[t];
    dst[0] = src[0];
    dst[1] = src[1];
    dst[128] = src[2];
    dst[129] = src[3];
    gUnknown_02000028[gUnknown_03000204] = 1;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801478C.inc\"");
#endif


struct GfxRec0801484C { u32 src; u8 *dst; s32 ctrl; };
#ifdef NONMATCHING
void LZ77UnCompVram(const void *, void *);
void LZ77UnCompWram(const void *, void *);

void sub_0801484C(const struct GfxRec0801484C *p, u8 keep)
{
    u8 *dst;
    u32 src;
    const u8 *s;

    if (!keep) {
        zero_memory(gUnknown_0200B320.unk4, 0x2000);
        zero_memory((u8 *)gUnknown_0200B320.unk4 + 0x2000, 0x1000);
    }
    do {
        dst = p->dst;
        src = p->src;
        while (!(REG_DISPSTAT & 1))
            ;
        if (dst != NULL) {
            s = (const u8 *)gUnknown_03000BA4 + (src & 0x7FFFFFFF);
            if (p->ctrl < 0) {
                if ((u32)dst >> 24 == 6)
                    LZ77UnCompVram(s, dst);
                else
                    LZ77UnCompWram(s, dst);
            } else {
                CpuSet(s, dst, ((u32)p->ctrl << 10) >> 11);
            }
        } else {
            load_palette_from_gfx_group(src & 0x7FFFFFFF);
        }
        p++;
    } while ((p - 1)->src & 0x80000000);
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801484C.inc\"");
#endif


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
#ifdef NONMATCHING
extern const s16 gUnknown_08138194[];
u16 sub_080094BC(u16);

// Checks the tile in front of entity e (facing unk2A); queues a record for tiles 38-40 or 60
u32 sub_080156BC(struct Entity *e, u8 *other)
{
    const s16 *off;
    u16 pos;
    u16 t;
    u32 *rec;

    sub_08015DC0(e->unk50);
    off = &gUnknown_08138194[e->unk2A & 6];
    pos = ((e->x.HALF.HI + off[0] - gUnknown_03000450.unk18) >> 4) | (((e->y.HALF.HI + off[1] - gUnknown_03000450.unk1A) >> 4) << 6);
    t = sub_080094BC(sub_0800932C(pos, e->unk50));
    if (t < 38)
        return 0;
    if (t <= 40) {
        if (other[5] == 1 && gUnknown_02000004 <= 15) {
            rec = (u32 *)gUnknown_0202A500 + gUnknown_02000004 * 2;
            *rec++ = ((e->unk2A & 6) << 16) | (e->unk50 & 0xC000) | 0x2000000 | (pos & 0xFFF);
            *rec = (u32)e;
            gUnknown_02000004++;
        }
        return 0;
    }
    if (t == 60 && !(other[53] & 0x80) && e->unk29 != 0) {
        if (gUnknown_02000004 <= 15) {
            rec = (u32 *)gUnknown_0202A500 + gUnknown_02000004 * 2;
            *rec++ = ((other[53] & 6) << 16) | (e->unk50 & 0xC000) | 0x1000000 | (pos & 0xFFF);
            *rec = (u32)e;
            gUnknown_02000004++;
        }
        return 1;
    }
    return 0;
}
#else
asm(".include \"asm/non_matching/file_select/sub_080156BC.inc\"");
#endif

asm(".include \"asm/non_matching/file_select/sub_080157F8.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08015888.inc\"");
asm(".include \"asm/non_matching/file_select/sub_08015964.inc\"");
#ifdef NONMATCHING

#define COPY_BLOCK                       \
    b = m->blocks[*src];                 \
    d[0] = b[0];                         \
    d[1] = b[1];                         \
    d2[0] = b[2];                        \
    d2[1] = b[3];                        \
    d2 += 2;                             \
    d += 2;                              \
    src++;

// Draws the 64x64-tile map in m into d: each tile is a 2x2 block of 8x8 tiles
void sub_080159F4(void *dst, void *map)
{
    u16 *d = dst;
    struct MapBuf *m = map;
    u16 *src = m->tiles;
    u16 *d2;
    u16 *b;
    u16 i, j;

    for (i = 0; i < 64; i++) {
        d2 = d + 128;
        for (j = 0; j < 16; j++) {
            COPY_BLOCK
            COPY_BLOCK
            COPY_BLOCK
            COPY_BLOCK
        }
        d += 128;
    }
}
#undef COPY_BLOCK
#else
asm(".include \"asm/non_matching/file_select/sub_080159F4.inc\"");
#endif
#ifdef NONMATCHING
extern const u16 gUnknown_0813821E[];
extern const u16 gUnknown_081381BC[];
extern const u8 gUnknown_081380F8[];

// Spawns the tile objects of the room: for each tile, a record {tile, type, subtype, form | parameter << 8}
// in the top-layer list (0x8000), else the bottom-layer list (0x4000), creates that entity on the tile
// Returns 1 if a record matched the tile (whether or not an entity slot was free)
static u32 SpawnTileObject(const u16 *rec, u16 pos, u16 layer)
{
    struct Entity *e;

    for (; rec[0] != 0xFFFF; rec += 4) {
        if (rec[0] == sub_0800932C(pos, layer)) {
            e = sub_080123E8();
            if (e != NULL) {
                e->type = rec[1];
                e->subtype = rec[2];
                e->form = rec[3];
                e->parameter = rec[3] >> 8;
                e->x.HALF.HI = (pos & 63) * 16 + 8;
                e->y.HALF.HI = ((pos & 0xFC0) >> 2) + 8;
                e->unk50 = layer | gUnknown_03000450.unk12;
                sub_08012728(gUnknown_081380F8[e->type], e);
            }
            return 1;
        }
    }
    return 0;
}

void sub_08015AC4(void)
{
    u16 w = gUnknown_03000450.unk28 >> 4;
    u16 h = gUnknown_03000450.unk2A >> 4;
    u16 pos = 0;
    u16 x, y;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++, pos++) {
            if (SpawnTileObject(gUnknown_0813821E, pos, 0x8000) == 0)
                SpawnTileObject(gUnknown_081381BC, pos, 0x4000);
        }
        pos += 64 - w;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08015AC4.inc\"");
#endif


#ifdef NONMATCHING
void sub_08015C64(void)
{
    u32 done = 0;
    struct Struct02002440 *p = gUnknown_02002440;
    u16 n = 8;
    u32 *q;

    do {
        if (p->unk0 == NULL)
            return;
        if (--p->unk6 == 0) {
            if (done) {
                p->unk6 = 1;
            } else {
                if (gUnknown_03000520.unk0 == 0)
                    sub_08015D04((const struct GfxLoad *)*(u32 *)p->unk0);
                p->unk6 = sub_08015CD0((s32 *)p->unk0 + 1);
                q = (u32 *)p->unk0;
                p->unk0 = (const u16 *)(q + 2);
                if (q[2] == 0)
                    p->unk0 = (const u16 *)((u8 *)(q + 2) - (q + 2)[1] * 8);
                done = 1;
            }
        }
        p++;
    } while (--n != 0);
}
#else
asm(".include \"asm/non_matching/file_select/sub_08015C64.inc\"");
#endif


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
#ifdef NONMATCHING
extern const struct GfxRec0801484C *const gUnknown_08146078[];
extern const u16 *const gUnknown_08146060[];
void sub_08015D50(const u16 *);

// Sets up area n: camera on the followed entity, clears the scanline table and both maps' block tables,
// loads the area gfx, and builds each map's inverse block table
void sub_08015DD8(u16 n)
{
    struct Entity *e;
    u16 x, y;
    u16 f;
    s16 i;
    u16 *m;

    gUnknown_03000450.unk1C = 0;
    gUnknown_03000450.unk1E = 0;
    e = gUnknown_03000450.unk0;
    x = e->x.HALF.HI;
    y = e->y.HALF.HI;
    gUnknown_03000450.unk14 = 0;
    gUnknown_03000450.unk12 = 14;
    e->unk50 = 14;
    gUnknown_03000450.unk28 = 1008;
    gUnknown_03000450.unk2A = 1008;
    gUnknown_03000450.unk18 = 0;
    gUnknown_03000450.unk1A = 0;
    gUnknown_03000450.unk24 = x;
    gUnknown_03000450.unk26 = y;
    if ((s16)x <= 119)
        gUnknown_03000450.unk20 = 0;
    else if ((s16)x <= 888)
        gUnknown_03000450.unk20 = x - 120;
    else
        gUnknown_03000450.unk20 = 1008 - 240;
    if ((s16)y <= 79) {
        gUnknown_03000450.unk22 = 0;
    } else {
        s32 t = gUnknown_03000450.unk2A - 80;
        if (t >= (s16)y)
            t = (s16)y;
        gUnknown_03000450.unk22 = t - 80;
    }
    zero_memory(gUnknown_02038000, 0x800);
    f = 0xFFFF;
    CpuSet(&f, ((struct MapBuf *)&gUnknown_0201F020_fs)->unk5004, 0x01000800);
    ((struct MapBuf *)&gUnknown_0201F020_fs)->unk5004[0] = 0;
    f = 0xFFFF;
    CpuSet(&f, ((struct MapBuf *)&gUnknown_0200B320)->unk5004, 0x01000800);
    ((struct MapBuf *)&gUnknown_0200B320)->unk5004[0] = 0;
    sub_0801484C(gUnknown_08146078[n], 1);
    load_gfx_group(30);
    sub_0801620C();
    if (gUnknown_08146060[n] != NULL)
        sub_08015D50(gUnknown_08146060[n]);
    m = ((struct MapBuf *)&gUnknown_0201F020_fs)->unk5004;
    for (i = 0; i <= 0x7FF; i++)
        if (m[i] <= 0x7FF)
            m[0x800 + m[i]] = i;
    m = ((struct MapBuf *)&gUnknown_0200B320)->unk5004;
    for (i = 0; i <= 0x7FF; i++)
        if (m[i] <= 0x7FF)
            m[0x800 + m[i]] = i;
    ((u16 *)((struct MapBuf *)&gUnknown_0200B320)->unk0)[1] = ((u16 *)((struct MapBuf *)&gUnknown_0201F020_fs)->unk0)[1]
        = gUnknown_03000450.unk20 + gUnknown_03000450.unk1C - gUnknown_03000450.unk18;
    ((u16 *)((struct MapBuf *)&gUnknown_0200B320)->unk0)[2] = ((u16 *)((struct MapBuf *)&gUnknown_0201F020_fs)->unk0)[2]
        = gUnknown_03000450.unk22 + gUnknown_03000450.unk1E - gUnknown_03000450.unk1A;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08015DD8.inc\"");
#endif


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

extern u8 gUnknown_02016470[];
extern u8 gUnknown_02016D90[];
extern u8 gUnknown_020031D0[];
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

#ifdef NONMATCHING
extern const u8 gUnknown_0814AB24[];

// Rebuilds both maps' tile attributes, then marks the room's edge row and column solid (0xFF)
void sub_080160F8(void)
{
    struct MapBuf *m1 = (struct MapBuf *)&gUnknown_0201F020_fs;
    struct MapBuf *m2 = (struct MapBuf *)&gUnknown_0200B320;
    u16 *t1 = m1->tiles, *t2 = m2->tiles;
    u8 *a1 = m1->attrs, *a2 = m2->attrs;
    u8 *p1, *p2, *p3, *p4;
    u16 i;

    for (i = 0; i < 0x1000; i++) {
        *a1++ = gUnknown_0814AB24[m1->unk5004[*t1++]];
        *a2++ = gUnknown_0814AB24[m2->unk5004[*t2++ & 0x7FFF]];
    }
    p1 = m1->attrs + (gUnknown_03000450.unk28 >> 4);
    p3 = m2->attrs + (gUnknown_03000450.unk28 >> 4);
    p2 = m1->attrs + 63;
    p4 = m2->attrs + 63;
    for (i = 0; i < 64; i++) {
        *p1 = 0xFF;
        *p2 = 0xFF;
        *p3 = 0xFF;
        *p4 = 0xFF;
        p1 += 64;
        p2 += 64;
        p3 += 64;
        p4 += 64;
    }
    p1 = m1->attrs + ((gUnknown_03000450.unk2A & 0xFFF0) << 2);
    p3 = m2->attrs + ((gUnknown_03000450.unk2A & 0xFFF0) << 2);
    p2 = m1->attrs + 0xFC0;
    p4 = m2->attrs + 0xFC0;
    for (i = 0; i < 64; i++) {
        *p1++ = 0xFF;
        *p2++ = 0xFF;
        *p3++ = 0xFF;
        *p4++ = 0xFF;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_080160F8.inc\"");
#endif

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



#ifdef NONMATCHING
void sub_0801DD28(struct Entity *this)
{
    u8 t;

    sub_0801DEC0(this, 0);
    t = --this->unk17;
    if (t == 0) {
        this->unk14 = 2;
        this->unk17 = gUnknown_0813AAFC[sub_0800099C() & 3];
        if (this->unk64 != 0)
            this->direction = (sub_08009EA4(this, this->unk64) + 4) & 24;
        else
            this->direction = sub_0800099C() & 24;
    } else if (this->unk64 == 0) {
        this->unk64 = sub_08009E6C(this, gUnknown_0813AB00[t >> 4]);
        this->direction = (sub_0803CECC(this, (struct Entity *)this->unk64) + 4) & 24;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801DD28.inc\"");
#endif

#ifdef NONMATCHING
void sub_0801DDA0(struct Entity *this)
{
    u32 r;

    sub_0801DEC0(this, 16);
    if (this->unk70.s.unk71 != 0)
        this->unk70.s.unk71--;
    if (sub_0800963C(this) == 0)
        this->unk17 = 1;
    this->unk17--;
    if (this->unk70.s.unk71 == 0 && ((r = sub_0800997C(this, 16)) & 0x80)) {
        this->unk14 = 3;
        this->unk17 = 16;
        this->unk18 = 1;
        this->direction = (u8)r & 24;
    } else if (this->unk17 == 0) {
        sub_0801DF24(this);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801DDA0.inc\"");
#endif

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



void sub_0801E4AC(struct Entity *this)
{
    switch (this->unk41 & 0x7F) {
    case 0:
        if (this->unk14 == 3)
            this->unk17 = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 22:
    case 24:
    case 25:
    case 26:
        if (this->unk14 <= 5) {
            this->unk14 = 6;
            this->unk10 = 0x18000;
            this->speed = 192;
            this->direction = this->unk3E;
            this->unk42 = 0;
            this->unk3F = 47;
            sub_08003870(this, 9);
        }
        break;
    }
    sub_080098A0(this, gUnknown_0813AD7C);
}


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

#ifdef NONMATCHING
extern const u8 gUnknown_0813ADB4[];
u32 sub_0800997C(struct Entity *, u32);
struct Entity *sub_08009E0C(void);

void sub_0801E5D8(struct Entity *this)
{
    u32 d;

    if (sub_0800997C(this, 12) & 0x80) {
        this->unk14 = 2;
        this->unk17 = 30;
        this->unk58 = sub_08009E0C();
        this->direction = sub_0803CECC(this, this->unk58);
        sub_08003870(this, 8);
    } else {
        if (--this->unk17 == 0) {
            this->unk17 = gUnknown_0813ADB4[sub_0800099C() & 3];
            if (sub_0800099C() & 31)
                d = sub_0800099C();
            else
                d = sub_0803CECC(this, sub_08044594()) + 4;
            this->direction = d & 24;
            if (this->direction >> 3 != this->unk2A) {
                this->unk2A = this->direction >> 3;
                sub_08003870(this, this->unk2A);
            }
        }
        if (sub_0800963C(this) == 0)
            this->unk17 = 1;
    }
    GetNextFrame(this);
}
#else
asm(".include \"asm/non_matching/file_select/sub_0801E5D8.inc\"");
#endif

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




extern const s8 gUnknown_0813ADB8[];

void sub_0801E7A0(struct Entity *this)
{
    u32 t = this->unk17 - 1;

    this->unk17 = t;

    if ((u8)t != 0) {
        if ((u8)t <= 59 && (t & 1))
            this->x.HALF.HI += gUnknown_0813ADB8[((u8)t >> 1) & 3];
    } else {
        this->unk14 = 5;
        this->unk10 = 0x10000;
        this->speed = 128;
        this->unk3F = 46;
        sub_08003870(this, this->unk2A);
        sub_08003DFC(49);
    }
}


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
#ifdef NONMATCHING
extern void (*const gUnknown_0813C5A0[])(struct Entity *);

void sub_08025ACC(struct Entity *this)
{
    struct Entity *p;

    if (this->unk54->unk45 != 0) {
        gUnknown_0813C5A0[this->form](this);
        p = this->unk54;
        this->unk1F_6 = p->unk1F_6;
        this->unk1D_6 = p->unk1D_6;
        this->unk50 = p->unk50;
        if (this->form != 0) {
            if (this->unk58->unk14 != 7 && (u16)(gUnknown_03000E20.unk0 % 3) + 1 == this->form)
                this->unk1C_0 = 1;
            else
                this->unk1C_0 = 0;
        }
    } else {
        DeleteThisEntity(this);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08025ACC.inc\"");
#endif

void sub_08025B6C(struct Entity *this)
{
    gUnknown_0813C5B0[this->unk14](this);
}


extern const u8 gUnknown_0813C65C[];

void sub_08025B84(struct Entity *this)
{
    struct Entity *a, *b, *c;

    a = sub_080123E8();
    if (a == NULL)
        return;
    b = sub_08012410(a);
    if (b == NULL)
        return;
    c = sub_08012410(b);
    if (c == NULL)
        return;
    a->type = 4;
    b->type = 4;
    c->type = 4;
    a->subtype = 6;
    b->subtype = 6;
    c->subtype = 6;
    a->form = 1;
    b->form = 2;
    c->form = 3;
    a->unk54 = this->unk54;
    b->unk54 = this->unk54;
    c->unk54 = this->unk54;
    a->unk58 = this;
    b->unk58 = this;
    c->unk58 = this;
    b->unk74.w = (u32)a;
    c->unk74.w = (u32)a;
    sub_0803D3D0(this, a);
    sub_0803D3D0(this, b);
    sub_0803D3D0(this, c);
    sub_08012728(5, a);
    sub_08012728(5, b);
    sub_08012728(5, c);
    this->unk14 = 1;
    this->unk1C_0 = 1;
    this->unk2E = 8;
    this->unk48 = gUnknown_0813C65C;
    this->z.HALF.HI = -4;
    this->unk3C |= 0x80;
    ((u8 *)this)[94] |= 3;
    sub_08008DD8(this);
    sub_08003870(this, 0);
}


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


extern const s8 gUnknown_0813C5D4[];

void sub_08025CEC(struct Entity *this)
{
    struct Entity *p;
    const s8 *t;
    s16 tx, ty;

    sub_08026244(this);
    p = this->unk54;
    t = &gUnknown_0813C5D4[p->unk2A * 2];
    tx = t[0] + p->x.HALF.HI;
    ty = t[1] + p->y.HALF.HI;
    sub_080040C4(this, sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, tx, ty));
    sub_080040C4(this, sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, tx, ty));
    sub_0803CC20(this);
    if (this->unk54->unk2A * 8 == sub_08003F54(this->x.HALF.HI, this->y.HALF.HI, this->unk54->x.HALF.HI, this->unk54->y.HALF.HI)) {
        this->unk14 = 3;
        this->speed = 0x700;
        this->direction = (this->unk54->unk2A * 8 + 8) & 24;
        this->unk54->unk18 |= 2;
        sub_08003DFC(97);
    }
}


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
#ifdef NONMATCHING
extern const s8 gUnknown_0813C5E4[];
extern const s8 gUnknown_0813C604[];

void sub_08025FF0(struct Entity *this)
{
    struct Entity *p = this->unk54;

    if (p->unk14 != 4) {
        this->x.HALF.HI = gUnknown_0813C5E4[p->unk2A * 8 + p->unk29] + p->x.HALF.HI;
        this->y.HALF.HI = gUnknown_0813C5E4[p->unk2A * 8 + p->unk29 + 1] + p->y.HALF.HI;
    } else {
        this->x.HALF.HI = gUnknown_0813C604[(p->unk29 & 15) + p->unk2A * 6] + p->x.HALF.HI;
        this->y.HALF.HI = gUnknown_0813C604[(p->unk29 & 15) + p->unk2A * 6 + 1] + p->y.HALF.HI;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08025FF0.inc\"");
#endif


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

#ifdef NONMATCHING
extern const s8 gUnknown_0813C624[];
void sub_0802614C(struct Entity *this)
{
    s8 r = gUnknown_0813C624[this->direction];
    struct Entity *parent = this->unk54;
    s32 t;

    this->x.HALF.HI = ((gUnknown_0813E4CC[this->direction * 8] * r) >> 8) + parent->x.HALF.HI;
    t = ((r * gUnknown_0813E4CC[this->direction * 8 + 64]) >> 8) + 8;
    this->y.HALF.HI = parent->y.HALF.HI - t;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802614C.inc\"");
#endif


#ifdef NONMATCHING
void sub_080261A0(struct Entity *this, u32 k)
{
    s8 r = (gUnknown_0813C624[this->direction] * (u8)k) / 16;
    struct Entity *parent = this->unk54;

    this->x.HALF.HI = ((gUnknown_0813E4CC[this->direction * 8] * r) >> 8) + parent->x.HALF.HI;
    this->y.HALF.HI = parent->y.HALF.HI - (((r * gUnknown_0813E4CC[this->direction * 8 + 64]) >> 8) + 8);
}
#else
asm(".include \"asm/non_matching/file_select/sub_080261A0.inc\"");
#endif


#ifdef NONMATCHING
void sub_08026204(struct Entity *this)
{
    struct Entity *p = this->unk54;

    this->x.HALF.HI = gUnknown_0813C644[this->direction][0] + p->x.HALF.HI;
    this->y.HALF.HI = gUnknown_0813C644[this->direction][1] + p->y.HALF.HI;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08026204.inc\"");
#endif


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



u8 sub_080269F8(struct Entity *);
void sub_080267C4(struct Entity *this)
{
    u8 m = sub_080269F8(this);
    struct Struct03006A30 *p;

    if (m == 0)
        return;
    p = gUnknown_03006A30;
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
        return;
    gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->form];
    sub_08003E10(this, 18);
    if (this->parameter != 0) {
        this->unk14 = 2;
        sub_08014658(0x149, this->unk7C.h, this->unk50);
    } else {
        sub_08014658(0x14B, this->unk7C.h, this->unk50);
        DeleteThisEntity(this);
    }
    if (this->unk78.h != 0xFFFF) {
        sub_08008F48(this->unk78.h, this->unk7C.h, this->unk50);
        sub_08008F3C(this->unk7C.s4.unk7E, this->unk7C.h, this->unk50);
    }
}


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

#ifdef NONMATCHING
void sub_08026C50(struct Entity *this)
{
    u8 t = --this->unk17;

    if (t == 0) {
        if (this->parameter != 0xFF)
            gUnknown_0201F000[this->unk52] |= gUnknown_08137B10[this->parameter & 31];
        if (!(this->parameter & 0x80))
            play_sound(16);
        if (this->unk16 != 0) {
            gUnknown_03006C80.unk26 = t;
            sub_0803A20C();
        }
        DeleteThisEntity(this);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08026C50.inc\"");
#endif

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


extern const u8 gUnknown_0813CDF4[];
extern const u16 gUnknown_0813CD4C[];

void sub_080270C0(struct Entity *this)
{
    u16 t;
    u32 lo;

    if (this->unk17 != 0) {
        this->unk14 = 4;
    } else {
        this->unk1C_0 = 1;
        this->unk14++;
    }
    this->unk17 = 30;
    this->unk5E_0 = 1;
    this->unk2E = 0;
    this->unk48 = gUnknown_0813CDF4;
    this->speed = (this->parameter + 1) << 6;
    this->unk78.h = this->x.HALF.HI;
    this->unk78.s2.unk7A = this->y.HALF.HI;
    t = gUnknown_0813CD4C[gUnknown_03006C80.unk1 * 2 + 1];
    lo = t & 15;
    ((u8 *)this)[30] = (t << 4) | lo;
    sub_0802C070(this, gUnknown_0813CD4C[gUnknown_03006C80.unk1 * 2]);
    sub_08003870(this, 0);
}

#ifdef NONMATCHING
extern const u8 gUnknown_0813CD5C[];
void sub_080272D0(struct Entity *);

void sub_0802715C(struct Entity *this)
{
    u8 k;

    if ((this->form & 0x80) && this->unk74.b.unk74 == 0
        && (this->x.HALF.HI != this->unk78.h || this->y.HALF.HI != this->unk78.s2.unk7A)
        && (gUnknown_08137B10[this->form & 31] & gUnknown_0201F000[this->unk52])) {
        this->unk14++;
        this->unk17 = 45;
        this->unk74.b.unk74 = 1;
        sub_08003870(this, 1);
        return;
    }
    k = (this->unk60 & 0xF0) >> 4;
    this->direction = gUnknown_0813CD5C[k];
    if (this->direction != 0xFF)
        sub_080272D0(this);
    if (k != this->unk74.b.unk75 && (k & ~this->unk74.b.unk75))
        sub_08003DFC(18);
    this->unk74.b.unk75 = k;
    sub_08003870(this, k + 1);
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802715C.inc\"");
#endif


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
#ifdef NONMATCHING
#define CHECK_PLAYER(n, bit)                                         \
    if (this->unk60 & bit) {                                         \
        struct Entity **pe = &gUnknown_03006A30[n].unk28;            \
        if (sub_08003FB0(*pe))                                       \
            sub_080003E0(this, *pe);                                 \
        else                                                         \
            this->unk60 ^= bit;                                      \
    }

void sub_080275F8(struct Entity *this)
{
    sub_08000694(this);
    CHECK_PLAYER(0, 1)
    CHECK_PLAYER(1, 2)
    CHECK_PLAYER(2, 4)
    CHECK_PLAYER(3, 8)
}
#undef CHECK_PLAYER
#else
asm(".include \"asm/non_matching/file_select/sub_080275F8.inc\"");
#endif

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


void sub_080278E8(struct Entity *this)
{
    WALL_AT(-25, -21, 0x200)
    WALL_AT(-25, -5, 0x200)
    WALL_AT(-25, 4, 0x400)
    WALL_AT(-25, 20, 0x400)
}


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


extern const void *const gUnknown_0813CF70[];
extern const u16 gUnknown_0813CE8C[];

void sub_08027F98(struct Entity *this)
{
    u16 *p;
    u16 t;
    u32 lo;

    this->unk5E_0 = 1;
    this->unk2E = 0;
    this->unk48 = gUnknown_0813CF70[this->form];
    this->speed = 256;
    this->unk14++;
    p = (u16 *)sub_08012F84(this->unk52, this->parameter);
    this->unk78.p = p;
    *(u16 **)&this->unk6C = p;
    this->unk70.w = 0;
    if (*p == 0xFFFE) {
        this->unk70.w = p[1];
        this->unk78.p = p + 2;
        *(u16 **)&this->unk6C = p + 2;
    }
    this->unk60 = this->unk17 ? sub_08013D20(this->unk17) : 0;
    t = gUnknown_0813CE8C[gUnknown_03006C80.unk1 * 2 + 1];
    lo = t & 15;
    ((u8 *)this)[30] = (t << 4) | lo;
    sub_0802C070(this, gUnknown_0813CE8C[gUnknown_03006C80.unk1 * 2]);
    sub_08028170(this);
    sub_08003870(this, this->form);
}


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
#ifdef NONMATCHING
void sub_08028170(struct Entity *this)
{
    u16 *p, *q;
    u16 v;

    if (*this->unk78.p == 0xFFFF)
        this->unk78.p = *(u16 **)&this->unk6C;
    p = this->unk78.p;
    v = *p;
    if (v & 0x8000) {
        this->unk15 = 4;
        this->unk68.w = p[1];
    } else {
        this->direction = v;
        q = p + 1;
        this->unk15 = (u8)v >> 3;
        switch (this->unk15) {
        case 0:
            *(u16 *)&this->unk74 = this->y.HALF.HI - p[1];
            q++;
            break;
        case 1:
            *(u16 *)&this->unk74 = p[1] + this->x.HALF.HI;
            q++;
            break;
        case 2:
            *(u16 *)&this->unk74 = p[1] + this->y.HALF.HI;
            q++;
            break;
        case 3:
            *(u16 *)&this->unk74 = this->x.HALF.HI - p[1];
            q++;
            break;
        }
        p = this->unk78.p;
        if (*q != 0)
            this->speed = *q;
    }
    this->unk78.p = p + 4;
}
#else
asm(".include \"asm/non_matching/file_select/sub_08028170.inc\"");
#endif

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


void sub_08028C54(struct Entity *, u8 *);

void sub_08028C54(struct Entity *, u8 *);

void sub_08028AE0(struct Entity *this)
{
    u8 *t0, *t1, *t2, *t3;

    t0 = (u8 *)this + 124;
    if (*t0)
        (*t0)--;
    t1 = (u8 *)this + 125;
    if (*t1)
        (*t1)--;
    t2 = (u8 *)this + 126;
    if (*t2)
        (*t2)--;
    t3 = (u8 *)this + 127;
    if (*t3)
        (*t3)--;
    if (this->unk18)
        this->unk18--;
    if (this->unk41 & 0x80) {
        switch (this->unk4C->form) {
        case 0:
            if (*t0 == 0)
                sub_08028C54(this, t0);
            break;
        case 1:
            if (*t1 == 0)
                sub_08028C54(this, t1);
            break;
        case 2:
            if (*t2 == 0)
                sub_08028C54(this, t2);
            break;
        case 3:
            if (*t3 == 0)
                sub_08028C54(this, t3);
            break;
        default:
            if (this->unk18 == 0)
                sub_08028C54(this, (u8 *)this + 24);
            break;
        }
    }
}



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

#ifdef NONMATCHING
void sub_08028BE8(struct Entity *this)
{
    struct Entity *e = sub_0804C8A8(15, 15, 0);
    u32 r1, r2;
    s32 x, y;

    if (e != NULL) {
        r1 = sub_0800099C();
        r2 = sub_0800099C();
        x = gUnknown_0813D0D4[this->form] + (r1 % (this->form + 2)) * 16 + (r2 & 7) - 4;
        y = (sub_0800099C() & 31) - 16;
        sub_0803D4A4(this, e, x << 16, y << 16);
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08028BE8.inc\"");
#endif

extern const u8 gUnknown_0813D0D8[];
void sub_08028BE8(struct Entity *);
void sub_08028CD0(struct Entity *);
#ifdef NONMATCHING
void sub_08028C54(struct Entity *this, u8 *out)
{
    u8 v = ((u8 *)this->unk4C)[64];
    u8 d;

    if (v > 35)
        return;
    d = gUnknown_0813D0D8[v];
    if (d == 0)
        return;
    *out = 8;
    this->unk45 = d > this->unk45 ? 0 : this->unk45 - d;
    if (this->unk45 != 0) {
        if (this->unk60 == 0 && this->unk45 <= 49) {
            sub_08028CD0(this);
            this->unk60 = 1;
        }
        sub_08028BE8(this);
    } else {
        this->unk14++;
        this->unk17 = 0;
        this->unk18 = (this->form + 1) * 2;
        this->unk3C &= 0x7F;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_08028C54.inc\"");
#endif

asm(".include \"asm/non_matching/file_select/sub_08028CD0.inc\"");
asm(".include \"asm/non_matching/file_select/sub_080291F8.inc\"");

extern const u8 gUnknown_0813D0FC[];

void sub_08029720(struct Entity *this)
{
    struct Entity *e;

    e = sub_0804C8A8(15, 2, 0);
    if (e != NULL) {
        e->x.HALF.HI = this->x.HALF.HI - gUnknown_0813D0FC[this->unk17 >> 1];
        e->y.HALF.HI = this->y.HALF.HI - 20;
        e->unk50 = this->unk50;
    }
    e = sub_0804C8A8(15, 2, 0);
    if (e != NULL) {
        e->x.HALF.HI = this->x.HALF.HI + gUnknown_0813D0FC[this->unk17 >> 1];
        e->y.HALF.HI = this->y.HALF.HI - 20;
        e->unk50 = this->unk50;
    }
    e = sub_0804C8A8(15, 2, 0);
    if (e != NULL) {
        e->x.HALF.HI = this->x.HALF.HI - gUnknown_0813D0FC[this->unk17 >> 1];
        e->y.HALF.HI = this->y.HALF.HI + 20;
        e->unk50 = this->unk50;
    }
    e = sub_0804C8A8(15, 2, 0);
    if (e != NULL) {
        e->x.HALF.HI = this->x.HALF.HI + gUnknown_0813D0FC[this->unk17 >> 1];
        e->y.HALF.HI = this->y.HALF.HI + 20;
        e->unk50 = this->unk50;
    }
}


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


extern const u8 gUnknown_0813D49E[];

// Counts the players standing on this switch (sub_08000580's mask): starts from the mask's bit count, then
// for each player in the mask, one fewer if busy (unk36 & 0x90), one more if carrying a player (type 1) the
// switch's flags don't cover
#define PLAYER(k)                                                                          \
    if (m & (1 << (k))) {                                                                  \
        gUnknown_03006A30[k].unk3F = gUnknown_0813D49E[this->unk2A];                       \
        if (gUnknown_03006A30[k].unk36 & 0x90) {                                           \
            n--;                                                                           \
        } else {                                                                           \
            struct Entity *c = *(struct Entity **)&gUnknown_03006A30[k].unk28->unk6C;      \
            if (c != NULL && c->unk58->type == 1                                           \
                && !(gUnknown_08137B10[c->unk58->form] & m))                               \
                n++;                                                                       \
        }                                                                                  \
    }

u8 sub_0802A4EC(struct Entity *this)
{
    u8 m = sub_08000580(this);
    u8 n = sub_08000A40(m);

    PLAYER(0)
    PLAYER(1)
    PLAYER(2)
    PLAYER(3)
    return n;
}
#undef PLAYER


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

#ifdef NONMATCHING
extern const u8 gUnknown_0813D5DC[];
extern const s8 gUnknown_0813D5D4[];
extern const u8 gUnknown_0813D5FC[];

void sub_0802B148(struct Entity *this)
{
    u8 t;
    struct Entity *e;

    if (this->unk78.b != 0)
        t = gUnknown_0813D5DC[sub_0800099C() & 15];
    else
        t = gUnknown_0813D5DC[sub_0800099C() & 31];
    if (t == 0xFF) {
        if (this->unk78.s.unk7A <= 2) {
            this->unk78.s.unk7A++;
            this->unk78.b = (this->unk78.b << 1) | 1;
        }
    } else {
        e = sub_0804C8A8(0, t, 1);
        if (e != NULL) {
            sub_0803D4A4(this, e, gUnknown_0813D5D4[this->form * 2] << 16, gUnknown_0813D5D4[this->form * 2 + 1] << 16);
            e->direction = (((this->form ^ 2) * 8 + gUnknown_0813D5FC[sub_0800099C() & 7]) & 31) | 0x80;
        }
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802B148.inc\"");
#endif

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
#ifdef NONMATCHING
void sub_0802B6BC(void)
{
    u8 i;

    zero_memory(&gUnknown_0202A770, 104);
    gUnknown_02016328 = 0;
    gUnknown_0202A770.unk0 = 0;
    if (gUnknown_03006C80.unk1 == 2)
        i = gUnknown_084296C0[(gUnknown_03006C80.unk3 + 3) * 8 + (sub_0800099C() & 7)];
    else
        i = gUnknown_084296C0[(gUnknown_03006C80.unk6 - 1) * 8 + (sub_0800099C() & 7)];
    gUnknown_0202A770.unk58 = &gUnknown_084296F0[i];
    *(struct U32x3 *)&gUnknown_0202A770.unk5C = *gUnknown_0202A770.unk58;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802B6BC.inc\"");
#endif


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
#ifdef NONMATCHING
extern u8 gUnknown_0201EFF0;
u32 sub_0802B820(u8);

void sub_0802B778(void)
{
    if (gUnknown_02016328 != 0) {
        if (--gUnknown_0202A770.unk8 == 0) {
            if (sub_0802C148() > 7 && gUnknown_0201EFF0 <= 4) {
                ((u32 *)&gUnknown_0202A770)[4] = (u32)gUnknown_03006A30[(sub_0800099C() % gUnknown_03006C80.unk0) & 3].unk28;
                if (sub_0802B820(1) || sub_0802B820(0)) {
                    gUnknown_0202A770.unk0++;
                    return;
                }
            }
            sub_0802BF30();
        } else if (gUnknown_0202A770.unk8 == 1) {
            gUnknown_0201EFF0 = 0;
            gUnknown_03000208[0] |= 4;
        }
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802B778.inc\"");
#endif

#ifdef NONMATCHING
extern const u8 gUnknown_08429480[][16];

u32 sub_0802B820(u8 room)
{
    struct Entity *e = (struct Entity *)((u32 *)&gUnknown_0202A770)[4];
    u8 *p = (u8 *)sub_08012F84(room, 4);
    u16 bx, by, x0, y0, dx, dy;
    u8 k;

    if (p == NULL)
        return 0;
    if (*p == 0xFF)
        return 0;
    bx = gUnknown_0201EFF8[room][0];
    by = gUnknown_0201EFF8[room][1];
    do {
        x0 = bx + p[0] * 16;
        y0 = by + p[1] * 16;
        dx = e->x.HALF.HI - x0;
        dy = e->y.HALF.HI - y0;
        if (dx < p[2] * 16 && dy < p[3] * 16) {
            if (gUnknown_03006C80.unk1 == 2)
                k = gUnknown_03006C80.unk3;
            else
                k = gUnknown_03006C80.unk6 - 1;
            if (p[4 + k] != 0) {
                ((u32 *)&gUnknown_0202A770)[5] = (u32)gUnknown_08429480[p[4 + k]];
                return 1;
            }
        }
        p += 8;
    } while (*p != 0xFF);
    return 0;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802B820.inc\"");
#endif
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


void sub_0802C1C0(struct Struct0202E110 *, u16, u8);
#ifdef NONMATCHING
u8 sub_0802C070(struct Entity *this, u16 id)
{
    struct Struct0202E110 *r;
    u8 n, i;

    for (r = gUnknown_0202A3F0; r < gUnknown_0202A3F0 + 43; r++)
        if (r->unk2 == id)
            goto found;
    n = sub_0802C23C(id);
    for (r = gUnknown_0202A3F0 + 8; r < gUnknown_0202A3F0 + 43; r++) {
        if (r->unk1 == 0) {
            for (i = 0; i < n; i++)
                if (r[i].unk1 != 0)
                    break;
            if (i == n) {
                sub_0802C1C0(r, id, n);
                goto found;
            }
        }
    }
    return 0xFF;
found:
    sub_0802C180(this, r);
    return 0;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C070.inc\"");
#endif


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


#ifdef NONMATCHING
void sub_0802C180(struct Entity *this, struct Struct0202E110 *r)
{
    u8 n = r->unk0 & 63;
    s32 c;

    this->unk20 = n << 4;
    this->unk1C_6 = (n << 4) >> 8;
    this->unk53 = n;
    c = *(u16 *)&r->unk2 >> 8;
    while (c-- > 0) {
        r->unk1++;
        r++;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C180.inc\"");
#endif


#ifdef NONMATCHING
void sub_0802C1C0(struct Struct0202E110 *r, u16 id, u8 n)
{
    u8 idx = r - gUnknown_0202A3F0;
    u8 i;

    for (i = 0; i < n; i++) {
        r[i].unk0 = idx | 0x80;
        r[i].unk1 = 0;
        *(u16 *)&r[i].unk2 = 0;
    }
    *(u16 *)&r->unk2 = (n << 8) | (id & 0xFF);
    if (*(vu16 *)REG_ADDR_DISPCNT & 0x80) {
    }
    ((const struct U32Pair **)gUnknown_02016C50)[idx] = gUnknown_0842AA54[id];
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C1C0.inc\"");
#endif

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

#ifdef NONMATCHING
extern const u32 gUnknown_08146DBC[];

u8 sub_0802C2DC(u8 id)
{
    struct Struct0202E110 *r;
    u8 i, j, n;

    for (i = 0, r = gUnknown_0202E110; r < gUnknown_0202E110 + 16; r++, i++) {
        if (r->unk1 == id) {
            sub_0802C2B8((u8 *)r, id, r->unk2);
            return i;
        }
    }
    n = ((const u8 *)&gUnknown_08146DBC[id])[3] & 15;
    for (i = 0, r = gUnknown_0202E110; r < gUnknown_0202E110 + 16; r++, i++) {
        if (r->unk0 == 0) {
            j = 0;
            if (j < n) {
                do
                    j++;
                while (j < n && r[j].unk0 == 0);
            }
            if (j == n) {
                sub_0802C2B8((u8 *)r, id, n);
                load_palette((u16 *)(gUnknown_03000030 + (gUnknown_08146DBC[id] & 0xFFFFFF)), i + 16, n);
                return i;
            }
        }
    }
    return 0;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C2DC.inc\"");
#endif

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

#ifdef NONMATCHING
void sub_0802CF20(void);

// Adds d to player this->form's counter (unk45, 0..8 per heart); a full party sets unk24 and plays a jingle
s32 sub_0802C3F0(struct Entity *this, s32 arg)
{
    u16 d = arg;
    u8 old = this->unk45;
    u16 v = d + old;
    u8 i;
    u32 all;

    if ((s16)d < 0 && (gUnknown_03006A30[this->form].unk7 & 0x80))
        return old;
    if ((s16)v >= gUnknown_03006C80.unk64[this->form].v * 8)
        v = gUnknown_03006C80.unk64[this->form].v * 8;
    else if ((s16)v < 0)
        v = 0;
    this->unk45 = v;
    gUnknown_03006C80.unk60[this->form].v = v;
    if ((s16)d < 0) {
        gUnknown_03006C80.unk24 = 0;
    } else {
        all = 1;
        sub_08003E10(this, 7);
        if (gUnknown_03006C80.unk24 == 0) {
            for (i = 0; i < gUnknown_03006C80.unk0; i++) {
                if (gUnknown_03006C80.unk60[i].v != gUnknown_03006C80.unk64[i].v * 8) {
                    all = 0;
                    break;
                }
            }
            if (all) {
                gUnknown_03006C80.unk24 = 1;
                play_sound(62);
                sub_0800D6A4(1);
            }
        }
    }
    sub_0802CF20();
    return this->unk45;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C3F0.inc\"");
#endif
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

#ifdef NONMATCHING
s32 sub_0800B830(s32);
void sub_0802CF20(void);

#define HUD_S16(off) (*(s16 *)&gUnknown_03000420[off])
#define HUD_S32(off) (*(s32 *)&gUnknown_03000420[off])

// Adds d rupees to player this->form (doubled while the bonus flag unk24 is on); the shared total unk8 is
// the sum of the players' counts, and a loss bigger than the player has is taken from the others in turn
void sub_0802C53C(struct Entity *this, s32 arg)
{
    s16 d = arg;
    s32 amt;
    s32 cur;
    u16 rem;
    u8 k, i;

    if (d < 0 && (s32)gUnknown_03006C80.unk8 + d < 0)
        amt = -(s32)gUnknown_03006C80.unk8;
    else
        amt = d;
    if (gUnknown_03006C80.unk24 != 0 && !(gUnknown_03006C80.unk24 & 0x80) && d > 0) {
        d *= 2;
        amt = d;
        play_sound(143);
    } else {
        play_sound(8);
    }
    gUnknown_03000420[2] = 1;
    if (amt >= 0) {
        HUD_S32(24) += amt;
        HUD_S16(32) = 120;
        if (HUD_S32(24) > 9999)
            HUD_S32(24) = 9999;
        if (HUD_S16(34) == 0)
            HUD_S32(20) = HUD_S32(24);
    } else {
        HUD_S16(32) = 0;
        HUD_S32(24) = 0;
        HUD_S32(28) += amt;
        HUD_S16(34) = 60;
        if (HUD_S32(28) < -9999)
            HUD_S32(24) = -9999;
        HUD_S32(20) = HUD_S32(28);
    }
    if (d < 0 && gUnknown_03006C80.unk8 == 0)
        return;
    cur = gUnknown_03006C80.unkC[this->form];
    if (cur + d < 0) {
        rem = sub_0800B830(d) - gUnknown_03006C80.unkC[this->form];
        gUnknown_03006C80.unkC[this->form] = 0;
        do {
            for (k = 4; k != 0; k--) {
                i = ((u8 *)&gUnknown_03006C80)[37] = (((u8 *)&gUnknown_03006C80)[37] + 1) & 3;
                if (gUnknown_03006C80.unkC[i] != 0) {
                    gUnknown_03006C80.unkC[i]--;
                    break;
                }
            }
        } while (--rem != 0);
    } else {
        gUnknown_03006C80.unkC[this->form] = sub_0802C528(cur, d, 99999);
    }
    gUnknown_03006C80.unk8 = 0;
    for (i = 0; i < gUnknown_03006C80.unk0; i++)
        gUnknown_03006C80.unk8 += gUnknown_03006C80.unkC[i];
    sub_0802CF20();
}
#undef HUD_S16
#undef HUD_S32
#else
asm(".include \"asm/non_matching/file_select/sub_0802C53C.inc\"");
#endif

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
#ifdef NONMATCHING
void sub_0802C9B8(void);

void sub_0802C800(void)
{
    u32 zero = 0;
    u8 *o;

    CpuSet(&zero, gUnknown_03000420, 0x0500000B);
    gUnknown_03000420[0] = 1;
    gUnknown_03000420[3] = 0;
    gUnknown_03000420[2] = 1;
    gUnknown_030004A0.bgConfig[0].bgcnt = gUnknown_08142374[18];
    sub_0802C9B8();
    zero_memory(&gUnknown_02030A70, 16);
    o = (u8 *)&gUnknown_02030A70;
    *(u16 *)&o[2] = (*(u16 *)&o[2] & 0xFFFFFE00) | 212;
    o[0] = 10;
    o[3] = (o[3] & 63) | 64;
    *(u16 *)&o[4] = (*(u16 *)&o[4] & 0xFFFFFC00) | 744;
    gUnknown_02030A70.unk5_4 = 4;
    gUnknown_03000420[12] = 0xFF;
    gUnknown_03000420[7] = -1;
    sub_0802C89C();
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802C800.inc\"");
#endif

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

extern u8 gUnknown_0202D250[];
void sub_0802CC20(void);
void sub_0802D8C0(void);
void sub_0802CFBC(void);
void sub_0802D858(u8);

void sub_0802CD3C(void)
{
    u8 *g = gUnknown_03000420;
    u32 zero;

    if (g[0] == 0) {
        if (g[5] != 0) {
            sub_0802CC20();
        } else if (g[4] != 0) {
            if (g[4] & 0x80) {
                zero = 0;
                CpuFastSet(&zero, gUnknown_0202D250 + (g[3] << 11), 0x010000A0);
            }
            g[4] = 0;
            g[2] = 1;
        }
        if (*(u32 *)gUnknown_03000420 & 0xFFFF00) {
            gUnknown_03000420[1] = gUnknown_03000420[2] != 0;
            sub_0802D8C0();
        }
        return;
    }
    sub_0802CFBC();
    if (g[5] == 0) {
        if (g[4] != 0) {
            if (g[4] & 0x80) {
                zero = 0;
                CpuFastSet(&zero, gUnknown_0202D250 + (g[3] << 11), 0x010000A0);
            }
            g[4] = 0;
            g[2] = 1;
        } else if (!(*(u8 *)&gUnknown_02000010 & 0x7F) && (gUnknown_03000940[gLCDRegisterBuffer] & 0x200) && g[0] == 1) {
            g[5] = 1;
            gUnknown_030004A0.bldcnt = 0x3F41;
            gUnknown_030004A0.bldalpha = 0x808;
            gUnknown_030004A0.dispCnt |= 0x4000;
            gUnknown_030004A0.winin = *(u8 *)&gUnknown_030004A0.winin | 0x3F00;
            gUnknown_030004A0.winout = 31;
            gUnknown_030004A0.win1h = 0x50A0;
            gUnknown_030004A0.win1v = 0x2878;
            load_gfx_group(17);
            return;
        }
    } else {
        sub_0802CC20();
    }
    sub_0802D1E8();
    sub_0802D858(gUnknown_03000204);
}


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


#ifdef NONMATCHING
void sub_0802D104(void);
void sub_0802D190(u16);

#define HUD_U16(off) (*(u16 *)&gUnknown_03000420[off])
#define HUD_U32(off) (*(u32 *)&gUnknown_03000420[off])

// Per-frame HUD update: counter timers, rupee/key counters, item icons, per-player respawn timers
void sub_0802CFBC(void)
{
    u16 t;
    u8 i;
    struct Entity *e;

    t = HUD_U16(34);
    if (t != 0) {
        if (t == 1) {
            HUD_U32(28) = 0;
            HUD_U32(20) = 0;
            HUD_U16(34) = 0;
            if (HUD_U16(32) != 0)
                HUD_U32(20) = HUD_U32(24);
            gUnknown_03000420[2] = 1;
        } else {
            HUD_U16(34) = t - 1;
        }
    } else {
        t = HUD_U16(32);
        if (t != 0) {
            if (t == 1) {
                HUD_U32(24) = 0;
                HUD_U32(20) = 0;
                HUD_U16(32) = 0;
                gUnknown_03000420[2] = 1;
            } else {
                HUD_U16(32) = t - 1;
            }
        }
    }
    sub_0802CF70();
    sub_0802D104();
    sub_0802D190(gUnknown_03006C80.unk64[gLCDRegisterBuffer].v);
    if (gUnknown_03000420[12] != gUnknown_03006730->unk1C) {
        gUnknown_03000420[12] = gUnknown_03006730->unk1C;
        gUnknown_03000420[14] = gUnknown_03006730->unkF & 2;
        sub_0802D7E8();
        sub_0802D820();
        gUnknown_03000420[2] = 1;
    }
    if ((u8)(gUnknown_03006730->unkF & 2) != gUnknown_03000420[14]) {
        gUnknown_03000420[14] = gUnknown_03006730->unkF & 2;
        sub_0802D7E8();
    }
    sub_0802CE98();
    for (i = 0; i < gUnknown_03006C80.unk0; i++) {
        if (((u16 *)&gUnknown_03000420[36])[i] == 0 && gUnknown_03006C80.unk68[i].v > 3) {
            e = gUnknown_03006A30[i].unk28;
            sub_0804CB38(e, 21, 0);
            sub_0800D6A4(0x303);
            ((u32 *)&gUnknown_0201ED90)[2] = e->form + 1;
            ((u32 *)&gUnknown_0201ED90)[4] = 500;
        }
        ((u16 *)&gUnknown_03000420[36])[i]--;
    }
}
#undef HUD_U16
#undef HUD_U32
#else
asm(".include \"asm/non_matching/file_select/sub_0802CFBC.inc\"");
#endif

#ifdef NONMATCHING
s32 sub_0800B830(s32);
#define COUNTER (*(u32 *)&gUnknown_03000420[16])

void sub_0802D104(void)
{
    u8 v = gUnknown_03006C80.unk24 & 0x7F;
    u32 target;
    s32 d;

    if (gUnknown_03000420[13] != v) {
        gUnknown_03000420[13] = v;
        gUnknown_03000420[2] = 1;
    }
    target = gUnknown_03006C80.unk8;
    d = sub_0800B830(target - COUNTER);
    if (d == 0)
        return;
    if (d > 1000)
        COUNTER += COUNTER < target ? 1000 : -1000;
    else if (d > 100) {
        if (COUNTER < target)
            COUNTER += 100;
        else
            COUNTER -= 100;
    } else if (d > 10) {
        if (COUNTER < target)
            COUNTER += 10;
        else
            COUNTER -= 10;
    } else {
        COUNTER = target;
    }
    gUnknown_03000420[2] = 1;
}
#undef COUNTER
#else
asm(".include \"asm/non_matching/file_select/sub_0802D104.inc\"");
#endif


#ifdef NONMATCHING
void sub_0802D190(u16 v)
{
    u8 target;

    if ((gUnknown_03000E20.unk0 & 3) == 0) {
        gUnknown_03000420[9] = v;
        target = gUnknown_03006730->unk28->unk45;
        if (gUnknown_03000420[8] != target) {
            gUnknown_03000420[2] = 1;
            if (gUnknown_03000420[8] < target) {
                if ((++gUnknown_03000420[8] & 7) == 0)
                    play_sound(7);
            } else {
                gUnknown_03000420[8]--;
            }
        }
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D190.inc\"");
#endif


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
#ifdef NONMATCHING
void sub_0802D228(u16 *p, u32 n, u8 digits, u16 attr)
{
    u32 d;

    while (digits != 0) {
        d = n % 10;
        n /= 10;
        p[0] = (d + 32) | attr;
        p[32] = (d + 64) | attr;
        digits--;
        p--;
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D228.inc\"");
#endif

#ifdef NONMATCHING
extern u8 gUnknown_0202D13C[];
void sub_0802D228(u16 *, u32, u8, u16);

void sub_0802D280(void)
{
    u32 v = *(u32 *)&gUnknown_03000420[16];
    u8 digits;
    u8 *base;
    u8 *q;
    u16 t;

    if (v > 99999)
        v = 99999;
    if (v <= 999)
        digits = 3;
    else if (v <= 9999)
        digits = 4;
    else
        digits = 5;
    base = (gUnknown_03000420[3] << 11) + gUnknown_0202D13C;
    *(u16 *)(base + 1152) = 0;
    *(u16 *)(base + 1216) = 0;
    *(u16 *)(base + 1154) = 0;
    *(u16 *)(base + 1218) = 0;
    q = (gUnknown_03000420[3] << 11) + ((27 - digits) * 2 + (gUnknown_0202D13C - 44));
    t = gUnknown_03000420[13] ? 83 : 0x101C;
    *(u16 *)(q + 1152) = t;
    *(u16 *)(q + 1154) = t + 1;
    *(u16 *)(q + 1216) = t + 2;
    *(u16 *)(q + 1218) = t + 3;
    sub_0802D228((u16 *)((gUnknown_03000420[3] << 11) + (gUnknown_0202D13C + 12) + 1152), v, digits, 0x3000);
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D280.inc\"");
#endif
#ifdef NONMATCHING
extern u8 gUnknown_0202D140[];
extern u8 gUnknown_0202D148[];
void sub_0802D228(u16 *, u32, u8, u16);

// Draws the signed counter at gUnknown_03000420[20] with a +/- sign tile
void sub_0802D354(void)
{
    u16 *p;
    u16 i;
    s16 v;
    u16 a;
    u16 sign;
    u8 digits;
    u8 *q;

    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D140 + 1024);
    for (i = 0; i <= 5; i++) {
        p[0] = 0;
        p[32] = 0;
        p++;
    }
    if (*(s32 *)&gUnknown_03000420[20] != 0) {
        v = *(s32 *)&gUnknown_03000420[20];
        sign = (~v >> 31) & 0x1000;
        a = v < 0 ? -v : v;
        if ((s16)a <= 9)
            digits = 1;
        else if ((s16)a <= 99)
            digits = 2;
        else if ((s16)a <= 999)
            digits = 3;
        else
            digits = 4;
        sub_0802D228((u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D148 + 1024), (s16)a, digits, sign);
        q = (gUnknown_03000420[3] << 11) + ((28 - digits) * 2 + (gUnknown_0202D148 - 56));
        if (*(s32 *)&gUnknown_03000420[20] > 0) {
            *(u16 *)(q + 1024) = 0x1030;
            *(u16 *)(q + 1088) = 0x1050;
        } else {
            *(u16 *)(q + 1024) = 49;
            *(u16 *)(q + 1088) = 81;
        }
    }
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D354.inc\"");
#endif
#ifdef NONMATCHING
extern u8 gUnknown_0202D130[];
extern u8 gUnknown_0202D12E[];

// Draws the meter gUnknown_03000420[8] (8 per heart) as gUnknown_03000420[9] hearts in rows of 10
void sub_0802D428(void)
{
    u16 *p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D130 + 64);
    u16 v = gUnknown_03000420[8];
    u16 i, k;
    s32 t;

    for (i = 0; i < gUnknown_03000420[9]; i++) {
        k = i % 10;
        if ((s16)v > 8) {
            p[k] = 16;
            p[k + 32] = 22;
        } else if ((s16)v > 0) {
            p[k] = (s16)v == 1 ? 19 : 20 - (s16)v / 2;
            p[k + 32] = 22;
        } else {
            p[k] = 20;
            p[k + 32] = 22;
        }
        t = (v << 16) - (8 << 16);
        v = t >> 16;
        if (t < 0)
            v = 0;
        if (i == 9)
            p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D130 + 128);
    }
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D12E + 64);
    p[0] = 21;
    if (gUnknown_03000420[9] > 10)
        p[32] = 21;
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D428.inc\"");
#endif
#ifdef NONMATCHING
extern u8 gUnknown_0202D112[];
extern u8 gUnknown_0202D144[];
extern const u16 gUnknown_084277BC[];

void sub_0802D514(void)
{
    u16 *p;
    const u16 *s = gUnknown_084277BC;

    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D112 + 64);
    if (gUnknown_03006C80.unk4 <= 8) {
        p[0] = 0x1058;
        p[1] = 0x1059;
        p[2] = 0x105E;
        p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D112 + 128);
        p[0] = 0x105A;
        p[1] = 0x105B;
        p[2] = 0x105F;
        p[3] = 0x1057;
    } else {
        p[0] = 0x1058;
        p[1] = 0x1059;
        p[2] = 0x105C;
        p[3] = 0x105E;
        p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D112 + 128);
        p[0] = 0x105A;
        p[1] = 0x105B;
        p[2] = 0x105D;
        p[3] = 0x105F;
        p[4] = 0x1057;
    }
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D144);
    p[0] = s[0];
    p[1] = s[1];
    p[2] = s[2];
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D144 + 64);
    p[0] = s[3];
    p[1] = s[4];
    p[2] = s[5];
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D144 + 128);
    p[0] = s[6];
    p[1] = s[7];
    p[2] = s[8];
    p = (u16 *)((gUnknown_03000420[3] << 11) + gUnknown_0202D144 + 192);
    p[0] = s[9];
    p[1] = s[10];
    p[2] = s[11];
}
#else
asm(".include \"asm/non_matching/file_select/sub_0802D514.inc\"");
#endif
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

