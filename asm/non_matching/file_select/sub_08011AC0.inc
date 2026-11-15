	THUMB_FUNC_START sub_08011AC0
sub_08011AC0: @ 0x08011AC0
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	sub r1, r1, #5
	and r1, r1, r2
	mov r2, #2
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldrb r1, [r0, #29]
	mov r2, #192
	orr r1, r1, r2
	strb r1, [r0, #29]
	bx lr
	THUMB_FUNC_END sub_08011AC0

	.byte 0x00
	.byte 0x00
