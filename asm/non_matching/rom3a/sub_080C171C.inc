	THUMB_FUNC_START sub_080C171C
sub_080C171C: @ 0x080C171C
	push {lr}
	bl sub_080BEDD0
	bl sub_080C172C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C171C

	.byte 0x00
	.byte 0x00
