	THUMB_FUNC_START sub_08051744
sub_08051744: @ 0x08051744
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #76]
	ldr r0, [r7]
	bl sub_0804C448
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08051744

	.byte 0x00
	.byte 0x00
