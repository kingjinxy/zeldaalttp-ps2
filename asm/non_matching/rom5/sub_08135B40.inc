	THUMB_FUNC_START sub_08135B40
sub_08135B40: @ 0x08135B40
	ldr r0, [r1, #64]
	ldrb r2, [r0]
	strb r2, [r1, #31]
	add r0, r0, #1
	str r0, [r1, #64]
	bx lr
	THUMB_FUNC_END sub_08135B40

