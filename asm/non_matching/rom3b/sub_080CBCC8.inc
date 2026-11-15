	THUMB_FUNC_START sub_080CBCC8
sub_080CBCC8: @ 0x080CBCC8
	push {lr}
	bl sub_080CAD30
	bl sub_080CBCB4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CBCC8

	.byte 0x00
	.byte 0x00
