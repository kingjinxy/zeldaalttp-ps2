	THUMB_FUNC_START sub_080E583C
sub_080E583C: @ 0x080E583C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E584C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E583C

	.byte 0x00
	.byte 0x00
