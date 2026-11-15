	THUMB_FUNC_START sub_08044C24
sub_08044C24: @ 0x08044C24
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, _08044C3C  @ =gUnknown_0813EE1C
	ldr r0, [r7]
	bl 0x08009924
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08044C3C:
	.4byte gUnknown_0813EE1C
	THUMB_FUNC_END sub_08044C24

