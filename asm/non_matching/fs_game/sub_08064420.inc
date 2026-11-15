	THUMB_FUNC_START sub_08064420
sub_08064420: @ 0x08064420
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08064420

	.byte 0x00
	.byte 0x00
