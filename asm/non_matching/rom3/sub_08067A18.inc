	THUMB_FUNC_START sub_08067A18
sub_08067A18: @ 0x08067A18
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, #4
	orr r0, r0, r2
	bl sub_08067BBC
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067A18

	.byte 0x00
	.byte 0x00
