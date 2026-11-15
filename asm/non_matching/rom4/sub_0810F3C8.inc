	THUMB_FUNC_START sub_0810F3C8
sub_0810F3C8: @ 0x0810F3C8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #70
	bl sub_0810E938
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F3C8

