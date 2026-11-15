	THUMB_FUNC_START sub_0803561C
sub_0803561C: @ 0x0803561C
	push {lr}
	ldr r2, _08035630  @ =gUnknown_0813DE10
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08035630:
	.4byte gUnknown_0813DE10
	THUMB_FUNC_END sub_0803561C

