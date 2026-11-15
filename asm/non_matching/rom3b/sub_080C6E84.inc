	THUMB_FUNC_START sub_080C6E84
sub_080C6E84: @ 0x080C6E84
	push {lr}
	add r2, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r1, r2, #0
	bl sub_080C6F08
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6E84

	.byte 0x00
	.byte 0x00
