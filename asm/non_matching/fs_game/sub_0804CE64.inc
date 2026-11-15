	THUMB_FUNC_START sub_0804CE64
sub_0804CE64: @ 0x0804CE64
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	str r1, [r0, #16]
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804CE64

