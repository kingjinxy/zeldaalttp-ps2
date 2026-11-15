	THUMB_FUNC_START sub_0804C9C8
sub_0804C9C8: @ 0x0804C9C8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804C9EA
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804C9EA:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804C9C8

	.byte 0x00
	.byte 0x00
