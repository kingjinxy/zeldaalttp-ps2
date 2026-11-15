	THUMB_FUNC_START sub_0804C410
sub_0804C410: @ 0x0804C410
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	mov r0, #52
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804C43A
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804C43A:
	ldr r1, [r7, #8]
	add r0, r1, #0
	b _0804C440
_0804C440:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804C410

