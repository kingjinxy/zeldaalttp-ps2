	THUMB_FUNC_START sub_080205B0
sub_080205B0: @ 0x080205B0
	push {r4,lr}
	add r4, r0, #0
	bl sub_0802065C
	add r0, r4, #0
	bl sub_08043F20
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080205B0

