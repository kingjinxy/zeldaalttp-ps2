	THUMB_FUNC_START sub_080E4344
sub_080E4344: @ 0x080E4344
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080E42C4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E4344

