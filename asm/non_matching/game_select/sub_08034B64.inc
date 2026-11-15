	THUMB_FUNC_START sub_08034B64
sub_08034B64: @ 0x08034B64
	push {lr}
	bl GetNextFrame
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034B64

	.byte 0x00
	.byte 0x00
