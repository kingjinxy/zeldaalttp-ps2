	THUMB_FUNC_START sub_08133644
sub_08133644: @ 0x08133644
	push {lr}
	ldr r0, _0813365C  @ =gSword
	ldrb r0, [r0]
	ldr r1, _08133660  @ =gShield
	ldrb r1, [r1]
	ldr r2, _08133664  @ =gArmor
	ldrb r2, [r2]
	bl sub_0813249C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813365C:
	.4byte gSword
_08133660:
	.4byte gShield
_08133664:
	.4byte gArmor
	THUMB_FUNC_END sub_08133644

