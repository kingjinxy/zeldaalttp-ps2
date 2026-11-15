	THUMB_FUNC_START sub_0801FD44
sub_0801FD44: @ 0x0801FD44
	mov r2, #0
	mov r1, #2
	strb r1, [r0, #20]
	mov r1, #240
	strb r1, [r0, #23]
	mov r1, #1
	strb r1, [r0, #24]
	mov r1, #128
	str r1, [r0, #12]
	str r2, [r0, #100]
	bx lr
	THUMB_FUNC_END sub_0801FD44

	.byte 0x00
	.byte 0x00
