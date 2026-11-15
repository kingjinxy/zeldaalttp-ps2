	THUMB_FUNC_START sub_080E6F34
sub_080E6F34: @ 0x080E6F34
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E6B14
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E6F34

	.byte 0x00
	.byte 0x00
