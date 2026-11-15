	THUMB_FUNC_START sub_080CA918
sub_080CA918: @ 0x080CA918
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CA918

	.byte 0x00
	.byte 0x00
