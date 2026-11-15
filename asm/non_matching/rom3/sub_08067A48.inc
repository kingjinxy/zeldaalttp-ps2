	THUMB_FUNC_START sub_08067A48
sub_08067A48: @ 0x08067A48
	push {lr}
	add r1, r0, #0
	mov r0, #7
	bl sub_08067BBC
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067A48

	.byte 0x00
	.byte 0x00
