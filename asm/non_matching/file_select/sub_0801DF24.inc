	THUMB_FUNC_START sub_0801DF24
sub_0801DF24: @ 0x0801DF24
	mov r2, #0
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #60
	strb r1, [r0, #23]
	strb r2, [r0, #24]
	str r2, [r0, #100]
	bx lr
	THUMB_FUNC_END sub_0801DF24

