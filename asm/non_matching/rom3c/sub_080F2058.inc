	THUMB_FUNC_START sub_080F2058
sub_080F2058: @ 0x080F2058
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080F1160
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F2058

	.byte 0x00
	.byte 0x00
