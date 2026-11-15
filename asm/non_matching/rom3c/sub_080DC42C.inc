	THUMB_FUNC_START sub_080DC42C
sub_080DC42C: @ 0x080DC42C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C3758
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DC42C

	.byte 0x00
	.byte 0x00
