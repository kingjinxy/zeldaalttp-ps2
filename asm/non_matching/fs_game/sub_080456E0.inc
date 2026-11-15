	THUMB_FUNC_START sub_080456E0
sub_080456E0: @ 0x080456E0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080456E0

