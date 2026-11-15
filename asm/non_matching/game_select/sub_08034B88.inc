	THUMB_FUNC_START sub_08034B88
sub_08034B88: @ 0x08034B88
	push {lr}
	ldrb r1, [r0, #21]
	add r1, r1, #1
	strb r1, [r0, #21]
	mov r1, #9
	bl sub_0804CE00
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034B88

	.byte 0x00
	.byte 0x00
