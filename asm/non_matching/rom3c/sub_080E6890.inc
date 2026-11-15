	THUMB_FUNC_START sub_080E6890
sub_080E6890: @ 0x080E6890
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E5F30
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E6890

	.byte 0x00
	.byte 0x00
