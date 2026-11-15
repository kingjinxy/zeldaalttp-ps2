	THUMB_FUNC_START sub_08066AF8
sub_08066AF8: @ 0x08066AF8
	push {r4-r6,lr}
	add r6, r0, #0
	add r0, r1, #0
	add r4, r2, #0
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r1, [r6]
	mov r5, #128
	lsl r5, r5, #7
	add r2, r5, #0
	bl sub_080144F0
	ldrh r1, [r6, #2]
	add r0, r4, #0
	add r2, r5, #0
	bl sub_080144F0
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08066AF8

