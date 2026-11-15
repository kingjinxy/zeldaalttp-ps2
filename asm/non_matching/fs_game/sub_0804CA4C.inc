	THUMB_FUNC_START sub_0804CA4C
sub_0804CA4C: @ 0x0804CA4C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	mov r0, #15
	mov r1, #11
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804CA6E
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804CA6E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804CA4C

	.byte 0x00
	.byte 0x00
