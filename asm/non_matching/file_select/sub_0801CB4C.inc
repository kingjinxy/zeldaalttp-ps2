	THUMB_FUNC_START sub_0801CB4C
sub_0801CB4C: @ 0x0801CB4C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801CD88
	add r0, r4, #0
	bl sub_080098CC
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801CB4C

