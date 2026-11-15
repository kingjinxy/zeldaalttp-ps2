	THUMB_FUNC_START sub_08022734
sub_08022734: @ 0x08022734
	ldr r2, [r0, #100]
	add r3, r0, #0
	add r3, r3, #33
	ldrb r1, [r3]
	add r1, r1, #15
	add r2, r2, #33
	strb r1, [r2]
	ldr r2, [r0, #116]
	ldrb r1, [r3]
	add r1, r1, #28
	add r2, r2, #33
	strb r1, [r2]
	ldr r2, [r0, #120]
	ldrb r1, [r3]
	add r1, r1, #41
	add r2, r2, #33
	strb r1, [r2]
	ldr r1, [r0, #124]
	ldrb r0, [r3]
	add r0, r0, #54
	add r1, r1, #33
	strb r0, [r1]
	bx lr
	THUMB_FUNC_END sub_08022734

	.byte 0x00
	.byte 0x00
