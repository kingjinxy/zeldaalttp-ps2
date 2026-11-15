	THUMB_FUNC_START sub_080E55D8
sub_080E55D8: @ 0x080E55D8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E55E8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E55D8

	.byte 0x00
	.byte 0x00
