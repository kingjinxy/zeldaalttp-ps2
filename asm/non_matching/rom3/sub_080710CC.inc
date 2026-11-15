	THUMB_FUNC_START sub_080710CC
sub_080710CC: @ 0x080710CC
	push {lr}
	bl sub_08089ECC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080710CC

	.byte 0x00
	.byte 0x00
