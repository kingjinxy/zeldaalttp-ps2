	THUMB_FUNC_START sub_08035960
sub_08035960: @ 0x08035960
	push {lr}
	ldr r2, _08035978  @ =gUnknown_0813DEF0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	bl sub_0803DF84
	pop {r0}
	bx r0
_08035978:
	.4byte gUnknown_0813DEF0
	THUMB_FUNC_END sub_08035960

