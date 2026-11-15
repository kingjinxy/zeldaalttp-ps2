	THUMB_FUNC_START sub_080336E4
sub_080336E4: @ 0x080336E4
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #60
	strb r1, [r0, #23]
	bx lr
	THUMB_FUNC_END sub_080336E4

	.byte 0x00
	.byte 0x00
