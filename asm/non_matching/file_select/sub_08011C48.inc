	THUMB_FUNC_START sub_08011C48
sub_08011C48: @ 0x08011C48
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #255
	strb r1, [r0, #11]
	mov r1, #32
	strb r1, [r0, #23]
	bx lr
	THUMB_FUNC_END sub_08011C48

	.byte 0x00
	.byte 0x00
