	THUMB_FUNC_START sub_080E4240
sub_080E4240: @ 0x080E4240
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E3D28
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E4240

	.byte 0x00
	.byte 0x00
