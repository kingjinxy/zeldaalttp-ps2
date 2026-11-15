	THUMB_FUNC_START sub_08089EBC
sub_08089EBC: @ 0x08089EBC
	push {lr}
	bl sub_080835C8
	bl sub_08085978
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08089EBC

	.byte 0x00
	.byte 0x00
