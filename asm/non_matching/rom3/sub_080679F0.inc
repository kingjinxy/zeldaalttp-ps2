	THUMB_FUNC_START sub_080679F0
sub_080679F0: @ 0x080679F0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08067BBC
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080679F0

	.byte 0x00
	.byte 0x00
