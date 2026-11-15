	THUMB_FUNC_START sub_080DC0F0
sub_080DC0F0: @ 0x080DC0F0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080F1160
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DC0F0

	.byte 0x00
	.byte 0x00
