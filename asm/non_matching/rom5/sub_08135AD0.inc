	THUMB_FUNC_START sub_08135AD0
sub_08135AD0: @ 0x08135AD0
	ldr r0, [r1, #64]
	ldrb r2, [r0]
	add r0, r1, #0
	add r0, r0, #36
	strb r2, [r0]
	ldr r0, [r1, #64]
	add r0, r0, #1
	str r0, [r1, #64]
	bx lr
	THUMB_FUNC_END sub_08135AD0

	.byte 0x00
	.byte 0x00
