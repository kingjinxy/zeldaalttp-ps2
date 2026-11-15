	THUMB_FUNC_START sub_0804CF00
sub_0804CF00: @ 0x0804CF00
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	mov r0, #0
	b _0804CF0C
_0804CF0C:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CF00

