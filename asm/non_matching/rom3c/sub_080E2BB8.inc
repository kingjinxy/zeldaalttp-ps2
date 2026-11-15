	THUMB_FUNC_START sub_080E2BB8
sub_080E2BB8: @ 0x080E2BB8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E28F8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E2BB8

	.byte 0x00
	.byte 0x00
