	THUMB_FUNC_START sub_08019114
sub_08019114: @ 0x08019114
	ldrb r1, [r0, #20]
	sub r1, r1, #1
	strb r1, [r0, #20]
	bx lr
	THUMB_FUNC_END sub_08019114

