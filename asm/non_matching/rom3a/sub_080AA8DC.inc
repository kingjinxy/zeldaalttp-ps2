	THUMB_FUNC_START sub_080AA8DC
sub_080AA8DC: @ 0x080AA8DC
	push {lr}
	bl sub_080A74BC
	bl sub_080A7588
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080AA8DC

	.byte 0x00
	.byte 0x00
