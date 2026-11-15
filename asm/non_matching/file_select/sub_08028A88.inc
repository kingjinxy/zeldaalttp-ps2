	THUMB_FUNC_START sub_08028A88
sub_08028A88: @ 0x08028A88
	push {lr}
	ldr r2, _08028A9C  @ =gUnknown_0813D0C8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08028A9C:
	.4byte gUnknown_0813D0C8
	THUMB_FUNC_END sub_08028A88

