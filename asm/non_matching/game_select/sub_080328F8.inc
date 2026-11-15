	THUMB_FUNC_START sub_080328F8
sub_080328F8: @ 0x080328F8
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r0, _08032A2C  @ =gUnknown_03000520
	ldrb r7, [r0]
	cmp r7, #0
	beq _08032906
	b _08032A24
_08032906:
	ldr r0, _08032A30  @ =gUnknown_03000830
	strb r7, [r0]
	ldr r0, _08032A34  @ =0x80040000
	bl play_sound
	bl sub_0800BED8
	bl sub_080123BC
	bl sub_0801239C
	bl sub_0802BF60
	bl sub_0802C278
	ldr r0, _08032A38  @ =gUnknown_0202A4F8
	str r7, [r0]
	bl sub_0800D6F4
	bl sub_0804CCBC
	mov r0, sp
	mov r6, #0
	strh r7, [r0]
	ldr r1, _08032A3C  @ =gUnknown_02016D60
	ldr r2, _08032A40  @ =0x01000014
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r7, [r0]
	ldr r1, _08032A44  @ =gUnknown_03006A30
	ldr r2, _08032A48  @ =0x01000120
	bl CpuSet
	mov r0, #23
	bl load_palette_from_gfx_group
	mov r0, #2
	bl load_gfx_group
	ldr r2, _08032A4C  @ =gUnknown_030004A0
	ldr r0, _08032A50  @ =0x00009E4A
	strh r0, [r2, #32]
	ldr r0, _08032A54  @ =0x00009C43
	strh r0, [r2, #44]
	add r1, r2, #0
	add r1, r1, #102
	ldr r0, _08032A58  @ =0x00003C66
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _08032A5C  @ =0x00000808
	strh r0, [r1]
	ldr r0, _08032A60  @ =gUnknown_03000450
	strh r7, [r0, #34]
	strh r7, [r0, #32]
	strh r7, [r2, #48]
	strh r7, [r2, #46]
	strh r7, [r2, #36]
	strh r7, [r2, #34]
	mov r0, #90
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	mov r0, #120
	strh r0, [r2, #50]
	mov r0, #224
	strh r0, [r2, #54]
	mov r0, #90
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	ldr r4, _08032A64  @ =gUnknown_0202A7E0
	str r0, [r4, #32]
	mov r0, #90
	mov r1, #3
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r4, #52]
	mov r0, #90
	mov r1, #3
	mov r2, #2
	bl sub_0804C8A8
	str r0, [r4, #72]
	mov r0, #0
	bl sub_08063C5C
	add r2, r0, #0
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	mov r0, #104
	strh r0, [r2, #50]
	mov r5, #128
	lsl r5, r5, #1
	strh r5, [r2, #54]
	add r0, r2, #0
	add r0, r0, #42
	strb r6, [r0]
	ldrb r1, [r2, #31]
	mov r0, #63
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #31]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r2, r2, #94
	ldrb r1, [r2]
	sub r0, r0, #16
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #93
	mov r1, #0
	mov r2, #0
	bl sub_0804CCE4
	ldr r2, [r4, #12]
	mov r0, #136
	strh r0, [r2, #50]
	strh r5, [r2, #54]
	ldr r0, _08032A68  @ =gUnknown_0200B310
	str r7, [r0]
	ldr r1, _08032A6C  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #4
	bl sub_08036704
_08032A24:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_08032A2C:
	.4byte gUnknown_03000520
_08032A30:
	.4byte gUnknown_03000830
_08032A34:
	.4byte 0x80040000
_08032A38:
	.4byte gUnknown_0202A4F8
_08032A3C:
	.4byte gUnknown_02016D60
_08032A40:
	.4byte 0x01000014
_08032A44:
	.4byte gUnknown_03006A30
_08032A48:
	.4byte 0x01000120
_08032A4C:
	.4byte gUnknown_030004A0
_08032A50:
	.4byte 0x00009E4A
_08032A54:
	.4byte 0x00009C43
_08032A58:
	.4byte 0x00003C66
_08032A5C:
	.4byte 0x00000808
_08032A60:
	.4byte gUnknown_03000450
_08032A64:
	.4byte gUnknown_0202A7E0
_08032A68:
	.4byte gUnknown_0200B310
_08032A6C:
	.4byte gSubState
	THUMB_FUNC_END sub_080328F8

