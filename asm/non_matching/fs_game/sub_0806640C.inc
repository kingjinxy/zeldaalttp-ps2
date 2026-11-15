	THUMB_FUNC_START sub_0806640C
sub_0806640C: @ 0x0806640C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	mov r0, #47
	bl sub_08012468
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0806642C
	ldr r0, [r7]
	bl DeleteThisEntity
_0806642C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806640C

