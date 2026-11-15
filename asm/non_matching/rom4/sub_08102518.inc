	THUMB_FUNC_START sub_08102518
sub_08102518: @ 0x08102518
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C35C0
	add r0, r4, #0
	bl sub_080E9A10
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08102518

	.byte 0x00
	.byte 0x00
