	THUMB_FUNC_START sub_080C6DA8
sub_080C6DA8: @ 0x080C6DA8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C6818
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6DA8

	.byte 0x00
	.byte 0x00
