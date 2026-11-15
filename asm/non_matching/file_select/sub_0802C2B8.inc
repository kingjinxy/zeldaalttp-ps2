	THUMB_FUNC_START sub_0802C2B8
sub_0802C2B8: @ 0x0802C2B8
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
_0802C2C2:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	strb r1, [r3, #1]
	strb r2, [r3, #2]
	add r3, r3, #4
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0802C2C2
	bx lr
	THUMB_FUNC_END sub_0802C2B8

	.byte 0x00
	.byte 0x00
