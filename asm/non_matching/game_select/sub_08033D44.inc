	THUMB_FUNC_START sub_08033D44
sub_08033D44: @ 0x08033D44
	push {lr}
	ldr r2, _08033D58  @ =gUnknown_0813D998
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033D58:
	.4byte gUnknown_0813D998
	THUMB_FUNC_END sub_08033D44

