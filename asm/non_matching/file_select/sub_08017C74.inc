	THUMB_FUNC_START sub_08017C74
sub_08017C74: @ 0x08017C74
	push {r4,lr}
	add r4, r0, #0
	bl sub_08017F88
	mov r0, #0
	strb r0, [r4, #26]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017C74

	.byte 0x00
	.byte 0x00
