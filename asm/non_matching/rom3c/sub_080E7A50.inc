	THUMB_FUNC_START sub_080E7A50
sub_080E7A50: @ 0x080E7A50
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E7988
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E7A50

	.byte 0x00
	.byte 0x00
