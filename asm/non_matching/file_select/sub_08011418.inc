	THUMB_FUNC_START sub_08011418
sub_08011418: @ 0x08011418
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_080113D8
	add r0, r4, #0
	bl sub_08011344
	bl sub_08011408
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011418

