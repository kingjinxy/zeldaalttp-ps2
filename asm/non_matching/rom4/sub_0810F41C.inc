	THUMB_FUNC_START sub_0810F41C
sub_0810F41C: @ 0x0810F41C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #1
	bl sub_0810EDB4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F41C

