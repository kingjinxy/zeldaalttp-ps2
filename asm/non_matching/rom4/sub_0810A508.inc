	THUMB_FUNC_START sub_0810A508
sub_0810A508: @ 0x0810A508
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #13
	bl sub_081098B0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A508

