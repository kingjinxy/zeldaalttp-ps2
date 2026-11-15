	THUMB_FUNC_START sub_08135AE4
sub_08135AE4: @ 0x08135AE4
	ldr r0, [r1, #64]
	ldrb r2, [r0]
	add r0, r1, #0
	add r0, r0, #44
	strb r2, [r0]
	ldr r0, [r1, #64]
	add r0, r0, #1
	str r0, [r1, #64]
	bx lr
	THUMB_FUNC_END sub_08135AE4

	.byte 0x00
	.byte 0x00
