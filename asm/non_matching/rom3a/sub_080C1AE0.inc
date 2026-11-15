	THUMB_FUNC_START sub_080C1AE0
sub_080C1AE0: @ 0x080C1AE0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080B0050
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C1AE0

	.byte 0x00
	.byte 0x00
