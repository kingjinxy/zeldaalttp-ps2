	THUMB_FUNC_START sub_080515E8
sub_080515E8: @ 0x080515E8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08051600
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080515E8

	.byte 0x00
	.byte 0x00
