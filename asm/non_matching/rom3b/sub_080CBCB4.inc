	THUMB_FUNC_START sub_080CBCB4
sub_080CBCB4: @ 0x080CBCB4
	push {lr}
	bl sub_080CB01C
	bl sub_080CB0EC
	bl sub_080CA934
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CBCB4

	.byte 0x00
	.byte 0x00
