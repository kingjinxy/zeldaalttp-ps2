	THUMB_FUNC_START sub_08034D10
sub_08034D10: @ 0x08034D10
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08034D20
	add r0, r4, #0
	bl GetNextFrame
_08034D20:
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _08034D38
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
_08034D38:
	ldrb r1, [r4, #23]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08034D6E
	cmp r1, #0
	beq _08034D5A
	sub r0, r1, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034D6E
	add r0, r4, #0
	bl DeleteThisEntity
	b _08034D6E
_08034D5A:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08034D6E
	add r0, r4, #0
	bl DeleteThisEntity
_08034D6E:
	ldr r1, [r4, #88]
	cmp r1, #0
	beq _08034D80
	ldr r0, [r1, #48]
	str r0, [r4, #48]
	ldr r0, [r1, #52]
	str r0, [r4, #52]
	ldr r0, [r1, #56]
	str r0, [r4, #56]
_08034D80:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034D10

	.byte 0x00
	.byte 0x00
