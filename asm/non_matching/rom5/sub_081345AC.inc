	THUMB_FUNC_START sub_081345AC
sub_081345AC: @ 0x081345AC
	ldr r2, [r1, #64]
	add r3, r2, #1
	str r3, [r1, #64]
	ldrb r3, [r2]
	bx lr
	THUMB_FUNC_END sub_081345AC

	.byte 0x00
	.byte 0x00
