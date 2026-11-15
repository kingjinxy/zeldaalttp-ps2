	THUMB_FUNC_START sub_080E6B04
sub_080E6B04: @ 0x080E6B04
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E693C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E6B04

	.byte 0x00
	.byte 0x00
