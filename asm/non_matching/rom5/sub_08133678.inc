	THUMB_FUNC_START sub_08133678
sub_08133678: @ 0x08133678
	push {lr}
	ldr r0, _0813368C  @ =gSword
	ldrb r0, [r0]
	ldr r1, _08133690  @ =gShield
	ldrb r1, [r1]
	mov r2, #3
	bl sub_0813249C
	pop {r0}
	bx r0
_0813368C:
	.4byte gSword
_08133690:
	.4byte gShield
	THUMB_FUNC_END sub_08133678

