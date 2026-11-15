	THUMB_FUNC_START sub_080EA300
sub_080EA300: @ 0x080EA300
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080EA310
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EA300

	.byte 0x00
	.byte 0x00
