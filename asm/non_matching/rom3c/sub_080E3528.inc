	THUMB_FUNC_START sub_080E3528
sub_080E3528: @ 0x080E3528
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #20
	bl sub_080E3024
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E3528

