	THUMB_FUNC_START sub_080AA7FC
sub_080AA7FC: @ 0x080AA7FC
	push {lr}
	bl sub_080AA874
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080AA7FC

	.byte 0x00
	.byte 0x00
