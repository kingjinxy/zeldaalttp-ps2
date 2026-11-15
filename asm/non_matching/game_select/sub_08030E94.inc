	THUMB_FUNC_START sub_08030E94
sub_08030E94: @ 0x08030E94
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r0, _08030F38  @ =gUnknown_03000520
	ldrb r5, [r0]
	cmp r5, #0
	bne _08030F30
	mov r0, #19
	bl load_palette_from_gfx_group
	mov r0, #1
	bl load_gfx_group
	ldr r2, _08030F3C  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08030F40  @ =0x0000FDFF
	and r0, r0, r1
	mov r4, #0
	strh r0, [r2]
	mov r0, #76
	strh r0, [r2, #8]
	strh r5, [r2, #10]
	strh r5, [r2, #12]
	ldr r1, _08030F44  @ =gBG0Buffer
	str r1, [r2, #16]
	add r2, r2, #102
	strh r5, [r2]
	mov r0, sp
	strh r5, [r0]
	ldr r2, _08030F48  @ =0x01000400
	bl CpuSet
	ldr r0, _08030F4C  @ =gLCDRegisterBuffer
	strb r4, [r0]
	ldr r0, _08030F50  @ =gUnknown_03000420
	strb r4, [r0]
	strb r4, [r0, #3]
	mov r0, #2
	mov r1, #23
	mov r2, #0
	bl sub_0804C8A8
	ldr r6, _08030F54  @ =gUnknown_02016D60
	mov r5, #1
	mov r0, #1
	strb r0, [r6, #20]
	bl sub_08030E4C
	ldr r0, _08030F58  @ =0x00000404
	bl sub_0800D67C
	ldr r2, _08030F5C  @ =gUnknown_02000010
	ldrb r3, [r2, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r3
	orr r0, r0, r5
	strb r0, [r2, #3]
	ldrb r0, [r2, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r2, #4]
	ldrb r0, [r2, #2]
	mov r1, #48
	orr r0, r0, r1
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r2, #2]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _08030F60  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r4, [r6]
_08030F30:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_08030F38:
	.4byte gUnknown_03000520
_08030F3C:
	.4byte gUnknown_030004A0
_08030F40:
	.4byte 0x0000FDFF
_08030F44:
	.4byte gBG0Buffer
_08030F48:
	.4byte 0x01000400
_08030F4C:
	.4byte gLCDRegisterBuffer
_08030F50:
	.4byte gUnknown_03000420
_08030F54:
	.4byte gUnknown_02016D60
_08030F58:
	.4byte 0x00000404
_08030F5C:
	.4byte gUnknown_02000010
_08030F60:
	.4byte gSubState
	THUMB_FUNC_END sub_08030E94

