	THUMB_FUNC_START sub_081074E0
sub_081074E0: @ 0x081074E0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_081089DC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081074E0

	.byte 0x00
	.byte 0x00
