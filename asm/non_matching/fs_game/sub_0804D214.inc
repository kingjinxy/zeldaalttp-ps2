	THUMB_FUNC_START sub_0804D214
sub_0804D214: @ 0x0804D214
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D214

