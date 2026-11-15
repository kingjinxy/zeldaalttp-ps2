	THUMB_FUNC_START sub_0804EF98
sub_0804EF98: @ 0x0804EF98
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	mov r1, #5
	mov r2, #128
	bl sub_0804CB38
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804EFBA
	ldr r0, [r7, #8]
	ldr r1, [r7, #4]
	str r1, [r0, #84]
_0804EFBA:
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804EF98

