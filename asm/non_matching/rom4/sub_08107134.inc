	THUMB_FUNC_START sub_08107134
sub_08107134: @ 0x08107134
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_081089DC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08107134

	.byte 0x00
	.byte 0x00
