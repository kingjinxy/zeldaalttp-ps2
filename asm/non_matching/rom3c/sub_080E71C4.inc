	THUMB_FUNC_START sub_080E71C4
sub_080E71C4: @ 0x080E71C4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E6FA8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E71C4

	.byte 0x00
	.byte 0x00
