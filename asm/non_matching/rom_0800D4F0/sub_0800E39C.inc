	THUMB_FUNC_START sub_0800E39C
sub_0800E39C: @ 0x0800E39C
	add r2, r0, #0
	add r2, r2, #248
	ldrb r1, [r2]
	add r1, r1, #1
	mov r3, #0
	strb r1, [r2]
	add r0, r0, #249
	strb r3, [r0]
	bx lr
	THUMB_FUNC_END sub_0800E39C

	.byte 0x00
	.byte 0x00
