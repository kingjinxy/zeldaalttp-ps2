	THUMB_FUNC_START sub_080CBCD8
sub_080CBCD8: @ 0x080CBCD8
	push {lr}
	bl sub_080CAD30
	bl sub_080CB01C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CBCD8

	.byte 0x00
	.byte 0x00
