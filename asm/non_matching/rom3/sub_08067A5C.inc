	THUMB_FUNC_START sub_08067A5C
sub_08067A5C: @ 0x08067A5C
	push {lr}
	add r1, r0, #0
	mov r0, #7
	bl sub_08067CBC
	lsl r0, r0, #24
	asr r0, r0, #24
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067A5C

	.byte 0x00
	.byte 0x00
