	THUMB_FUNC_START sub_081348A0
sub_081348A0: @ 0x081348A0
	push {lr}
	lsl r1, r1, #16
	lsr r1, r1, #16
	bl sub_08134664
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081348A0

	.byte 0x00
	.byte 0x00
