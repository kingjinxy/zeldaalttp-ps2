	THUMB_FUNC_START sub_080AE848
sub_080AE848: @ 0x080AE848
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	add r3, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r3, r3, #16
	lsr r3, r3, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	str r2, [sp]
	mov r0, #0
	mov r1, #30
	add r2, r4, #0
	bl sub_080AC448
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080AE848

