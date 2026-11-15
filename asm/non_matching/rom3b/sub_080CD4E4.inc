	THUMB_FUNC_START sub_080CD4E4
sub_080CD4E4: @ 0x080CD4E4
	push {lr}
	bl sub_080CD4F4
	bl sub_080CBEA4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CD4E4

	.byte 0x00
	.byte 0x00
