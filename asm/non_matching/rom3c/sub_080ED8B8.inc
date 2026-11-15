	THUMB_FUNC_START sub_080ED8B8
sub_080ED8B8: @ 0x080ED8B8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #96
	bl sub_080CF140
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080ED8B8

