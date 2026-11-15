	THUMB_FUNC_START sub_08135AF8
sub_08135AF8: @ 0x08135AF8
	ldr r0, [r1, #64]
	ldrb r0, [r0]
	add r2, r1, #0
	add r2, r2, #45
	strb r0, [r2]
	ldr r0, [r1, #64]
	add r0, r0, #1
	str r0, [r1, #64]
	bx lr
	THUMB_FUNC_END sub_08135AF8

	.byte 0x00
	.byte 0x00
