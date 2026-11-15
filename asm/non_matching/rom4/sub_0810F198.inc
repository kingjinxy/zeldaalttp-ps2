	THUMB_FUNC_START sub_0810F198
sub_0810F198: @ 0x0810F198
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #3
	bl sub_0810F260
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F198

