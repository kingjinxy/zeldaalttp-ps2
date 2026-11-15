	THUMB_FUNC_START sub_08035610
sub_08035610: @ 0x08035610
	push {lr}
	bl GetNextFrame
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035610

	.byte 0x00
	.byte 0x00
