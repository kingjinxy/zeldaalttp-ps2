	THUMB_FUNC_START sub_080E3CF0
sub_080E3CF0: @ 0x080E3CF0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E3D98
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E3CF0

	.byte 0x00
	.byte 0x00
