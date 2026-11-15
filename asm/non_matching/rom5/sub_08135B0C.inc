	THUMB_FUNC_START sub_08135B0C
sub_08135B0C: @ 0x08135B0C
	ldr r0, [r1, #64]
	ldrb r0, [r0]
	add r2, r1, #0
	add r2, r2, #46
	strb r0, [r2]
	ldr r0, [r1, #64]
	add r0, r0, #1
	str r0, [r1, #64]
	bx lr
	THUMB_FUNC_END sub_08135B0C

	.byte 0x00
	.byte 0x00
