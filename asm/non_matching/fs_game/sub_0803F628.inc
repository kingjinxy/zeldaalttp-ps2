	THUMB_FUNC_START sub_0803F628
sub_0803F628: @ 0x0803F628
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F628

