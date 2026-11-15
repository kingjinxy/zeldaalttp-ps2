	THUMB_FUNC_START sub_0810A518
sub_0810A518: @ 0x0810A518
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #5
	bl sub_081092F0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A518

