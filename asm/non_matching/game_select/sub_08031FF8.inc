	THUMB_FUNC_START sub_08031FF8
sub_08031FF8: @ 0x08031FF8
	push {r4-r6,lr}
	sub sp, sp, #24
	ldr r0, _080320E4  @ =gUnknown_03000520
	ldrb r6, [r0]
	cmp r6, #0
	bne _080320DC
	mov r0, #160
	lsl r0, r0, #19
	mov r5, #0
	strh r6, [r0]
	ldr r0, _080320E8  @ =gPaletteBuf2
	strh r6, [r0]
	ldr r0, _080320EC  @ =0x80010000
	bl play_sound
	mov r4, #160
	str r4, [sp]
	mov r1, #224
	lsl r1, r1, #19
	ldr r2, _080320F0  @ =0x01000100
	mov r0, sp
	bl CpuFastSet
	str r4, [sp, #4]
	add r0, sp, #4
	ldr r1, _080320F4  @ =gOAMBuffer
	ldr r2, _080320F8  @ =0x01000200
	bl CpuFastSet
	str r6, [sp, #8]
	add r0, sp, #8
	ldr r1, _080320FC  @ =gUnknown_03006630
	ldr r2, _08032100  @ =0x01000040
	bl CpuFastSet
	ldr r0, _08032104  @ =gUnknown_03000420
	strb r5, [r0]
	str r6, [sp, #12]
	add r0, sp, #12
	ldr r1, _08032108  @ =gBG0Buffer
	ldr r2, _0803210C  @ =0x01000400
	bl CpuFastSet
	bl sub_0802C934
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802BF60
	bl sub_0802C278
	bl sub_0800D6F4
	bl sub_0804CCBC
	str r6, [sp, #16]
	add r0, sp, #16
	ldr r1, _08032110  @ =gUnknown_03006A30
	ldr r2, _08032114  @ =0x05000090
	bl CpuSet
	add r0, sp, #20
	strh r6, [r0]
	ldr r1, _08032118  @ =gUnknown_02016D60
	ldr r2, _0803211C  @ =0x01000014
	bl CpuSet
	mov r0, #8
	bl load_gfx_group
	ldr r0, _08032120  @ =gUnknown_0201F000
	str r6, [r0]
	mov r0, #93
	mov r1, #1
	mov r2, #0
	bl sub_0804CCE4
	ldr r2, _08032124  @ =gUnknown_0202A7E0
	ldr r0, [r2, #12]
	mov r4, #252
	lsl r4, r4, #1
	strh r4, [r0, #50]
	ldr r1, [r2, #12]
	mov r0, #220
	lsl r0, r0, #1
	strh r0, [r1, #54]
	ldr r1, _08032128  @ =gUnknown_03000450
	ldr r0, [r2, #12]
	str r0, [r1]
	mov r0, #6
	strb r0, [r2, #4]
	bl sub_08032138
	mov r0, #105
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	strh r4, [r0, #50]
	strh r4, [r0, #54]
	ldr r1, _0803212C  @ =gUnknown_03005050
	mov r0, #1
	strb r0, [r1]
	ldr r0, _08032130  @ =gSubState
	strb r5, [r0]
	bl sub_08137AFC
	ldr r0, _08032134  @ =gUnknown_0200B310
	str r6, [r0]
	mov r0, #5
	bl sub_08036704
_080320DC:
	add sp, sp, #24
	pop {r4-r6}
	pop {r0}
	bx r0
_080320E4:
	.4byte gUnknown_03000520
_080320E8:
	.4byte gPaletteBuf2
_080320EC:
	.4byte 0x80010000
_080320F0:
	.4byte 0x01000100
_080320F4:
	.4byte gOAMBuffer
_080320F8:
	.4byte 0x01000200
_080320FC:
	.4byte gUnknown_03006630
_08032100:
	.4byte 0x01000040
_08032104:
	.4byte gUnknown_03000420
_08032108:
	.4byte gBG0Buffer
_0803210C:
	.4byte 0x01000400
_08032110:
	.4byte gUnknown_03006A30
_08032114:
	.4byte 0x05000090
_08032118:
	.4byte gUnknown_02016D60
_0803211C:
	.4byte 0x01000014
_08032120:
	.4byte gUnknown_0201F000
_08032124:
	.4byte gUnknown_0202A7E0
_08032128:
	.4byte gUnknown_03000450
_0803212C:
	.4byte gUnknown_03005050
_08032130:
	.4byte gSubState
_08032134:
	.4byte gUnknown_0200B310
	THUMB_FUNC_END sub_08031FF8

