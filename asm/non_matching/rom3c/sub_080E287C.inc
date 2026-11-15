	THUMB_FUNC_START sub_080E287C
sub_080E287C: @ 0x080E287C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080E2720
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E287C

