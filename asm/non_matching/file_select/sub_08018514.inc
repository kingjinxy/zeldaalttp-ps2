	THUMB_FUNC_START sub_08018514
sub_08018514: @ 0x08018514
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldr r0, [r4, #84]
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018514

