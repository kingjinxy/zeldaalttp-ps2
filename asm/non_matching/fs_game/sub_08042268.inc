	THUMB_FUNC_START sub_08042268
sub_08042268: @ 0x08042268
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl sub_08003594
	cmp r0, #0
	bne _08042290
	ldr r0, [r7]
	bl DeleteThisEntity
_08042290:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08042268

