	THUMB_FUNC_START sub_08044854
sub_08044854: @ 0x08044854
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, _0804486C  @ =gUnknown_0813ED84
	ldr r0, [r7]
	bl 0x080098A0
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804486C:
	.4byte gUnknown_0813ED84
	THUMB_FUNC_END sub_08044854

