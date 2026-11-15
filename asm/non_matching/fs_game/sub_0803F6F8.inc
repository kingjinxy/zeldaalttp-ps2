	THUMB_FUNC_START sub_0803F6F8
sub_0803F6F8: @ 0x0803F6F8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F6F8

	.byte 0x00
	.byte 0x00
