	THUMB_FUNC_START sub_0810AD80
sub_0810AD80: @ 0x0810AD80
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E9A10
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810AD80

	.byte 0x00
	.byte 0x00
