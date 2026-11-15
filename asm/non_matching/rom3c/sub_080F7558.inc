	THUMB_FUNC_START sub_080F7558
sub_080F7558: @ 0x080F7558
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F75A8  @ =gRam
	ldr r1, _080F75AC  @ =0x00000F62
	add r0, r6, r1
	add r7, r4, r0
	ldrb r1, [r7]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F7576
	b _080F76E0
_080F7576:
	cmp r1, #0
	bne _080F75B8
	add r0, r4, #0
	bl sub_080F7C40
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F758E
	b _080F76E6
_080F758E:
	ldr r1, _080F75B0  @ =gUnknown_08179C2C
	ldr r2, _080F75B4  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080F76E6
	.byte 0x00
	.byte 0x00
_080F75A8:
	.4byte gRam
_080F75AC:
	.4byte 0x00000F62
_080F75B0:
	.4byte gUnknown_08179C2C
_080F75B4:
	.4byte 0x00000F52
_080F75B8:
	ldr r1, _080F76A8  @ =0x00001142
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F75F4
	add r0, r4, #0
	bl sub_080E91E0
	ldr r2, _080F76AC  @ =0x000009AD
	add r0, r6, r2
	ldrb r5, [r0]
	cmp r5, #0
	bne _080F75F4
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F75F4
	ldr r1, _080F76B0  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r2, _080F76B4  @ =0x00001776
	add r0, r6, r2
	strb r5, [r0]
	ldrb r0, [r7]
	bl sub_080A1588
_080F75F4:
	ldr r0, _080F76B8  @ =gRam
	mov r8, r0
	ldr r0, _080F76BC  @ =0x000010B2
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F760A
	mov r0, #8
	bl sub_080CF3A0
_080F760A:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080F76E6
	add r0, r4, #0
	bl sub_080C99DC
	ldr r0, _080F76C0  @ =0x00001152
	add r0, r0, r8
	add r7, r4, r0
	ldrb r0, [r7]
	sub r0, r0, #2
	strb r0, [r7]
	ldr r0, _080F76A8  @ =0x00001142
	add r0, r0, r8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	mov r12, r0
	and r0, r0, r1
	cmp r0, #0
	beq _080F76E6
	strb r6, [r2]
	ldr r0, _080F76C4  @ =0x00000F22
	add r0, r0, r8
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, r12
	and r0, r0, r1
	lsr r1, r1, #1
	add r0, r0, r1
	strb r0, [r5]
	ldr r0, _080F76C8  @ =0x00000F12
	add r0, r0, r8
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, r12
	and r0, r0, r1
	lsr r1, r1, #1
	add r0, r0, r1
	strb r0, [r3]
	ldr r0, _080F76CC  @ =0x00000F52
	add r0, r0, r8
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #4
	beq _080F76D8
	add r0, r0, #1
	strb r0, [r2]
	ldr r1, _080F76D0  @ =gUnknown_08179C3C
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldrb r0, [r2]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080F76E6
	add r0, r4, #0
	bl sub_080F7AB4
	add r1, r0, #0
	cmp r1, #0
	blt _080F76E6
	ldr r0, _080F76D4  @ =0x00000FC2
	add r0, r0, r8
	add r0, r1, r0
	mov r1, #16
	strb r1, [r0]
	b _080F76E6
_080F76A8:
	.4byte 0x00001142
_080F76AC:
	.4byte 0x000009AD
_080F76B0:
	.4byte 0x00000FA2
_080F76B4:
	.4byte 0x00001776
_080F76B8:
	.4byte gRam
_080F76BC:
	.4byte 0x000010B2
_080F76C0:
	.4byte 0x00001152
_080F76C4:
	.4byte 0x00000F22
_080F76C8:
	.4byte 0x00000F12
_080F76CC:
	.4byte 0x00000F52
_080F76D0:
	.4byte gUnknown_08179C3C
_080F76D4:
	.4byte 0x00000FC2
_080F76D8:
	strb r6, [r5]
	strb r6, [r3]
	strb r6, [r7]
	b _080F76E6
_080F76E0:
	add r0, r4, #0
	bl sub_080F7C78
_080F76E6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F7558

