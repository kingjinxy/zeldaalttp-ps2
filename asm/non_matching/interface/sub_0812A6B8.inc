	THUMB_FUNC_START sub_0812A6B8
sub_0812A6B8: @ 0x0812A6B8
	push {lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #18
	bl sub_0812C814
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812A6B8

	.byte 0x00
	.byte 0x00
