	THUMB_FUNC_START sub_0810B69C
sub_0810B69C: @ 0x0810B69C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B7A0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B7A0
	ldr r7, _0810B6F8  @ =gRam
	ldr r1, _0810B6FC  @ =0x00000FC2
	add r0, r7, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0810B708
	ldr r3, _0810B700  @ =0x000016EA
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810B7A0
	ldr r1, _0810B704  @ =0x000010F2
	add r0, r7, r1
	add r0, r4, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r7, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0810B7A0
	mov r0, #32
	strb r0, [r2]
	b _0810B7A0
	.byte 0x00
	.byte 0x00
_0810B6F8:
	.4byte gRam
_0810B6FC:
	.4byte 0x00000FC2
_0810B700:
	.4byte 0x000016EA
_0810B704:
	.4byte 0x000010F2
_0810B708:
	cmp r0, #24
	bne _0810B7A0
	add r0, r5, #0
	bl sub_080E89E4
	add r6, r0, #0
	cmp r6, #0
	blt _0810B7A0
	lsl r4, r6, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080F5490
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810B7A8  @ =0x00000F22
	add r2, r7, r1
	add r2, r6, r2
	ldr r1, _0810B7AC  @ =gUnknown_0817CBA8
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r3, _0810B7B0  @ =0x00000F12
	add r2, r7, r3
	add r2, r6, r2
	ldr r1, _0810B7B4  @ =gUnknown_0817CBA4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _0810B7B8  @ =0x00000EE2
	add r5, r7, r1
	add r5, r6, r5
	ldrb r2, [r5]
	sub r3, r3, #16
	add r4, r7, r3
	add r4, r6, r4
	ldrb r3, [r4]
	lsl r3, r3, #8
	ldr r1, _0810B7BC  @ =gUnknown_0817CB94
	add r1, r0, r1
	orr r2, r2, r3
	ldrb r1, [r1]
	add r2, r2, r1
	ldr r1, _0810B7C0  @ =gUnknown_0817CB98
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	strb r2, [r5]
	lsr r2, r2, #8
	strb r2, [r4]
	ldr r1, _0810B7C4  @ =0x00000ED2
	add r5, r7, r1
	add r5, r6, r5
	ldrb r2, [r5]
	ldr r3, _0810B7C8  @ =0x00000EF2
	add r4, r7, r3
	add r4, r6, r4
	ldrb r3, [r4]
	lsl r3, r3, #8
	ldr r1, _0810B7CC  @ =gUnknown_0817CB9C
	add r1, r0, r1
	orr r2, r2, r3
	ldrb r1, [r1]
	add r2, r2, r1
	ldr r1, _0810B7D0  @ =gUnknown_0817CBA0
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	strb r2, [r5]
	lsr r2, r2, #8
	strb r2, [r4]
_0810B7A0:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_0810B7A8:
	.4byte 0x00000F22
_0810B7AC:
	.4byte gUnknown_0817CBA8
_0810B7B0:
	.4byte 0x00000F12
_0810B7B4:
	.4byte gUnknown_0817CBA4
_0810B7B8:
	.4byte 0x00000EE2
_0810B7BC:
	.4byte gUnknown_0817CB94
_0810B7C0:
	.4byte gUnknown_0817CB98
_0810B7C4:
	.4byte 0x00000ED2
_0810B7C8:
	.4byte 0x00000EF2
_0810B7CC:
	.4byte gUnknown_0817CB9C
_0810B7D0:
	.4byte gUnknown_0817CBA0
	THUMB_FUNC_END sub_0810B69C

