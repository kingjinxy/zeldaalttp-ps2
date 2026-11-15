	THUMB_FUNC_START sub_08033AEC
sub_08033AEC: @ 0x08033AEC
	push {lr}
	bl GetNextFrame
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033AEC

	.byte 0x00
	.byte 0x00
