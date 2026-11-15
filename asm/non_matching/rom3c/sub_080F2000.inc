	THUMB_FUNC_START sub_080F2000
sub_080F2000: @ 0x080F2000
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C969C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F2000

	.byte 0x00
	.byte 0x00
