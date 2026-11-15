	THUMB_FUNC_START sub_0810F3A4
sub_0810F3A4: @ 0x0810F3A4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #250
	lsl r1, r1, #1
	bl sub_0810E938
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F3A4

	.byte 0x00
	.byte 0x00
