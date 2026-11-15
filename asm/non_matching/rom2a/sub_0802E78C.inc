	THUMB_FUNC_START sub_0802E78C
sub_0802E78C: @ 0x0802E78C
	push {r4-r7,lr}
	sub sp, sp, #8
	ldr r7, _0802E8A8  @ =gUnknown_03000520
	ldrb r6, [r7]
	cmp r6, #0
	beq _0802E79A
	b _0802E8A0
_0802E79A:
	ldr r0, _0802E8AC  @ =gUnknown_03000830
	strb r6, [r0]
	ldr r0, _0802E8B0  @ =0x80010000
	bl play_sound
	ldr r0, _0802E8B4  @ =0x800B01AD
	bl play_sound
	bl sub_0800BED8
	bl sub_08059A44
	bl sub_080123BC
	bl sub_0801239C
	bl sub_0802BF60
	bl sub_0802C278
	bl sub_0803A2E8
	bl sub_0800D6F4
	bl sub_0804CCBC
	mov r0, sp
	mov r4, #0
	strh r6, [r0]
	ldr r5, _0802E8B8  @ =gUnknown_02016D60
	ldr r2, _0802E8BC  @ =0x01000014
	add r1, r5, #0
	bl CpuSet
	str r6, [sp, #4]
	add r0, sp, #4
	ldr r1, _0802E8C0  @ =gUnknown_03006A30
	ldr r2, _0802E8C4  @ =0x05000090
	bl CpuSet
	mov r0, #23
	bl load_palette_from_gfx_group
	mov r0, #1
	bl load_gfx_group
	mov r0, #2
	bl load_gfx_group
	mov r0, #18
	bl sub_0802C2DC
	ldr r0, _0802E8C8  @ =gUnknown_0202A4F8
	str r6, [r0]
	ldr r0, _0802E8CC  @ =gLCDRegisterBuffer
	strb r4, [r0]
	ldr r0, _0802E8D0  @ =gUnknown_03000420
	strb r4, [r0]
	strb r4, [r0, #3]
	ldr r2, _0802E8D4  @ =gUnknown_030004A0
	ldr r0, _0802E8D8  @ =gBG0Buffer
	str r0, [r2, #16]
	ldr r0, _0802E8DC  @ =gUnknown_08142374
	ldrh r0, [r0, #36]
	strh r0, [r2, #8]
	ldr r0, _0802E8E0  @ =0x00001A09
	strh r0, [r2, #20]
	ldr r0, _0802E8E4  @ =0x00009E0A
	strh r0, [r2, #32]
	ldr r0, _0802E8E8  @ =0x00009C03
	strh r0, [r2, #44]
	add r1, r2, #0
	add r1, r1, #102
	ldr r0, _0802E8EC  @ =0x00003E66
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _0802E8F0  @ =0x00000C0C
	strh r0, [r1]
	strh r6, [r2, #34]
	strh r6, [r2, #24]
	strh r6, [r2, #22]
	strh r6, [r2, #12]
	strh r6, [r2, #10]
	mov r1, #192
	strh r1, [r2, #36]
	strh r6, [r2, #46]
	strh r1, [r2, #48]
	ldr r0, _0802E8F4  @ =gUnknown_03000450
	strh r6, [r0, #32]
	strh r1, [r0, #34]
	ldrh r0, [r2]
	mov r3, #216
	lsl r3, r3, #5
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0802E8F8  @ =gUnknown_0200B310
	str r6, [r0]
	bl sub_0802C934
	ldr r1, _0802E8FC  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0802E900  @ =gSubState
	strb r4, [r0]
	mov r0, #180
	strb r0, [r5, #9]
	strb r4, [r5, #10]
	strb r4, [r5, #11]
	strb r4, [r5, #12]
	sub r0, r0, #181
	str r0, [r7, #12]
	mov r0, #2
	mov r1, #4
	bl sub_0800C0B0
	mov r0, #25
	strb r0, [r7, #7]
	add r0, r0, #231
	bl sub_0800C1EC
	mov r0, #90
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	mov r1, #120
	strh r1, [r0, #50]
	mov r1, #224
	strh r1, [r0, #54]
_0802E8A0:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
_0802E8A8:
	.4byte gUnknown_03000520
_0802E8AC:
	.4byte gUnknown_03000830
_0802E8B0:
	.4byte 0x80010000
_0802E8B4:
	.4byte 0x800B01AD
_0802E8B8:
	.4byte gUnknown_02016D60
_0802E8BC:
	.4byte 0x01000014
_0802E8C0:
	.4byte gUnknown_03006A30
_0802E8C4:
	.4byte 0x05000090
_0802E8C8:
	.4byte gUnknown_0202A4F8
_0802E8CC:
	.4byte gLCDRegisterBuffer
_0802E8D0:
	.4byte gUnknown_03000420
_0802E8D4:
	.4byte gUnknown_030004A0
_0802E8D8:
	.4byte gBG0Buffer
_0802E8DC:
	.4byte gUnknown_08142374
_0802E8E0:
	.4byte 0x00001A09
_0802E8E4:
	.4byte 0x00009E0A
_0802E8E8:
	.4byte 0x00009C03
_0802E8EC:
	.4byte 0x00003E66
_0802E8F0:
	.4byte 0x00000C0C
_0802E8F4:
	.4byte gUnknown_03000450
_0802E8F8:
	.4byte gUnknown_0200B310
_0802E8FC:
	.4byte gUnknown_03005050
_0802E900:
	.4byte gSubState
	THUMB_FUNC_END sub_0802E78C

