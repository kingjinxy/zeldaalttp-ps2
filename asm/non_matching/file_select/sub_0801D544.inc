	THUMB_FUNC_START sub_0801D544
sub_0801D544: @ 0x0801D544
	add r3, r0, #0
	add r1, r3, #0
	add r1, r1, #110
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _0801D576
	mov r0, #2
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	b _0801D58C
_0801D576:
	cmp r0, #119
	bhi _0801D58C
	ldrb r2, [r3, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
_0801D58C:
	bx lr
	THUMB_FUNC_END sub_0801D544

	.byte 0x00
	.byte 0x00
