	THUMB_FUNC_START sub_0804B708
sub_0804B708: @ 0x0804B708
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_0804CABC
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804B73C
	ldr r0, [r7, #8]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
_0804B73C:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B708

