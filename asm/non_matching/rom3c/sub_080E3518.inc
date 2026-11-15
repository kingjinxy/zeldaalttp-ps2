	THUMB_FUNC_START sub_080E3518
sub_080E3518: @ 0x080E3518
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #24
	bl sub_080E33BC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E3518

