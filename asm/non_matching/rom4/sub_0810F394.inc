	THUMB_FUNC_START sub_0810F394
sub_0810F394: @ 0x0810F394
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_0810E70C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F394

	.byte 0x00
	.byte 0x00
