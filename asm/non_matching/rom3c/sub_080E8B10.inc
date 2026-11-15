	THUMB_FUNC_START sub_080E8B10
sub_080E8B10: @ 0x080E8B10
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E8334
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E8B10

	.byte 0x00
	.byte 0x00
