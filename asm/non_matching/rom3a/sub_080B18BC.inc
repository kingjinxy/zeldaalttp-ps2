	THUMB_FUNC_START sub_080B18BC
sub_080B18BC: @ 0x080B18BC
	push {lr}
	bl sub_080B06A8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B18BC

	.byte 0x00
	.byte 0x00
