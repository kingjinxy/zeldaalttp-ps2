	THUMB_FUNC_START sub_080D5944
sub_080D5944: @ 0x080D5944
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080D5754
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D5944

	.byte 0x00
	.byte 0x00
