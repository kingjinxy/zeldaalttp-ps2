	THUMB_FUNC_START sub_080501C0
sub_080501C0: @ 0x080501C0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08050B50
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080501C0

