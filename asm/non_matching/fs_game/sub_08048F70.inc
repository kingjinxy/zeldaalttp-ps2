	THUMB_FUNC_START sub_08048F70
sub_08048F70: @ 0x08048F70
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, _08048F88  @ =gUnknown_0813F55C
	ldr r0, [r7]
	bl 0x08009924
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08048F88:
	.4byte gUnknown_0813F55C
	THUMB_FUNC_END sub_08048F70

