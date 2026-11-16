#ifndef GUARD_ENTITY_H
#define GUARD_ENTITY_H

#include "global.h"

// Fields are named by offset until their meaning is known. ": 8" bitfields are bytes the -O0 Four Swords
// code writes with ldrb / and #0 / orr / strb; plain bytes there would be a single strb. Size not known yet.
typedef struct Entity {
    /* 0x00 */ struct Entity* prev;
    /* 0x04 */ struct Entity* next;
    /* 0x08 */ u8 type : 8;
    /* 0x09 */ u8 subtype : 8;
    /* 0x0A */ u8 form : 8;
    /* 0x0B */ u8 parameter : 8;
    /* 0x0C */ s32 speed;  // ProcessMovement2 (sub_0803CC20)
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14 : 8;
    /* 0x15 */ u8 unk15 : 8;
    /* 0x16 */ u8 unk16 : 8;
    /* 0x17 */ u8 unk17 : 8;
    /* 0x18 */ u8 unk18 : 8;
    /* 0x19 */ u8 filler19[2];
    /* 0x1B */ u8 unk1B : 8;
    // 0x1C-0x1F: one u32 of bitfields (u32 fields are read with lsl/lsr pairs, e.g. lsl #26; lsr #27)
    /* 0x1C */ u32 unk1C_0 : 2;
    /*      */ u32 unk1C_2 : 1;
    /*      */ u32 unk1C_3 : 1;
    /*      */ u32 unk1C_4 : 2;
    /*      */ u32 unk1C_6 : 2;
    /* 0x1D */ u32 unk1D_0 : 2;
    /*      */ u32 unk1D_2 : 2;
    /*      */ u32 unk1D_4 : 1;
    /*      */ u32 unk1D_5 : 1;
    /*      */ u32 unk1D_6 : 2;
    /* 0x1E */ u32 unk1E_0 : 4;
    /*      */ u32 unk1E_4 : 4;
    /* 0x1F */ u32 unk1F_0 : 1;
    /*      */ u32 unk1F_1 : 5;  // affine parameter index
    /*      */ u32 unk1F_6 : 2;
    /* 0x20 */ u8 unk20 : 8;
    /* 0x21 */ u8 frameIdx : 8;
    /* 0x22 */ u8 lastFrameIdx;
    /* 0x23 */ u8 unk23 : 8;
    /* 0x24 */ void* frame;
    /* 0x28 */ u8 frameTimer : 8;
    /* 0x29 */ u8 unk29;
    /* 0x2A */ u8 unk2A : 8;
    /* 0x2B */ u8 direction : 8;  // 0-0x3F, bit 7 = not moving; index into gSineTable/8
    /* 0x2C */ u8 filler2C[2];
    /* 0x2E */ u8 unk2E : 8;
    /* 0x2F */ u8 filler2F;
    /* 0x30 */ union SplitWord x;  // tmc names; HALF.HI is the pixel position
    /* 0x34 */ union SplitWord y;
    /* 0x38 */ union SplitWord z;
    /* 0x3C */ u8 unk3C : 8;
    /* 0x3D */ u8 unk3D : 8;
    /* 0x3E */ u8 filler3E[2];
    /* 0x40 */ u8 unk40 : 8;
    /* 0x41 */ u8 unk41 : 8;
    /* 0x42 */ s8 unk42 : 8;
    /* 0x43 */ u8 filler43[2];
    /* 0x45 */ u8 unk45 : 8;
    /* 0x46 */ u8 unk46;
    /* 0x47 */ u8 filler47;
    /* 0x48 */ const void *unk48;
    /* 0x4C */ struct Entity *unk4C;
    /* 0x50 */ u16 unk50 : 16;
    /* 0x52 */ u8 unk52 : 8;
    /* 0x53 */ u8 filler53;
    /* 0x54 */ struct Entity* unk54;
    /* 0x58 */ struct Entity* unk58;
    /* 0x5C */ u16 unk5C : 16;
    /* 0x5E */ u8 unk5E_0 : 2;
    /*      */ u8 unk5E_2 : 6;
    /* 0x5F */ u8 filler5F;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 filler64[4];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 filler6C[4];
    /* 0x70 */ union {
        u32 w;
        u8 b;
    } unk70;
    /* 0x74 */ u8 filler74[2];
    /* 0x76 */ u8 unk76 : 8;
    /* 0x77 */ u8 unk77 : 8;
    /* 0x78 */ union {
        u32 w;
        u16 h : 16;  // map tile index for some kinds: (x - scroll x) >> 4 | ((y - scroll y) >> 4) << 6
        u16 *p;
        struct {
            u16 h;
            u8 unk7A : 8;
            u8 filler7B;
        } s;
        struct {
            u16 h;
            u16 unk7A : 16;
        } s2;
    } unk78;  // halfword + byte for some entity kinds, a pointer for others
    /* 0x7C */ union {
        u32 w;
        u16 h : 16;
        u16 *p;
        struct {
            u16 h;
            u16 unk7E : 16;
        } s;
    } unk7C;  // a halfword for some entity kinds, a pointer for others
} Entity;

// Managers (DoManagerEntity): same list header as Entity, bigger body
struct Manager {
    /* 0x0 */ struct Manager* prev;
    /* 0x4 */ struct Manager* next;
    /* 0x8 */ u8 type;
    /* 0x9 */ u8 subtype;
    /* 0xA */ u8 fillerA[0x37];
    /* 0x41 */ u8 unk41 : 8;
};

#endif
