	THUMB_FUNC_START sub_0812ADF4
sub_0812ADF4: @ 0x0812ADF4
	push {r4,r5,lr}
	add r3, r0, #0
	mov r4, #0
	ldr r0, _0812AE30  @ =gUnknown_03000168
	ldr r1, [r0]
	ldrb r2, [r3, #1]
	add r5, r0, #0
	cmp r2, #1
	bne _0812AE34
	cmp r1, #0
	beq _0812AE60
	ldrb r0, [r1, #1]
	cmp r0, #1
	bne _0812AE18
	ldrb r0, [r3, #8]
	ldrb r2, [r1, #8]
	cmp r0, r2
	bcc _0812AE60
_0812AE18:
	add r4, r1, #0
	ldr r1, [r4, #108]
	cmp r1, #0
	beq _0812AE60
	ldrb r0, [r1, #1]
	cmp r0, #1
	bne _0812AE18
	ldrb r0, [r3, #8]
	ldrb r2, [r1, #8]
	cmp r0, r2
	bcs _0812AE18
	b _0812AE60
_0812AE30:
	.4byte gUnknown_03000168
_0812AE34:
	cmp r2, #2
	bne _0812AE74
	cmp r1, #0
	beq _0812AE60
	ldrb r0, [r1, #1]
	cmp r0, #1
	beq _0812AE60
	ldrb r0, [r3, #8]
	ldrb r2, [r1, #8]
	cmp r0, r2
	bcc _0812AE60
	add r2, r0, #0
_0812AE4C:
	add r4, r1, #0
	ldr r1, [r4, #108]
	cmp r1, #0
	beq _0812AE60
	ldrb r0, [r1, #1]
	cmp r0, #1
	beq _0812AE60
	ldrb r0, [r1, #8]
	cmp r2, r0
	bcs _0812AE4C
_0812AE60:
	str r1, [r3, #108]
	cmp r1, #0
	beq _0812AE68
	str r3, [r1, #104]
_0812AE68:
	str r4, [r3, #104]
	cmp r4, #0
	beq _0812AE72
	str r3, [r4, #108]
	b _0812AE74
_0812AE72:
	str r3, [r5]
_0812AE74:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812ADF4

	.byte 0x00
	.byte 0x00
