	THUMB_FUNC_START sub_080582F0
sub_080582F0: @ 0x080582F0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, _08058314  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #1
	bls _0805830C
	ldr r0, [r7]
	bl DeleteThisEntity
_0805830C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08058314:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080582F0

