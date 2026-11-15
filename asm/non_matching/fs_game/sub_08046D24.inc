	THUMB_FUNC_START sub_08046D24
sub_08046D24: @ 0x08046D24
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046D24

	.byte 0x00
	.byte 0x00
