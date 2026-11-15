	THUMB_FUNC_START sub_08035ED4
sub_08035ED4: @ 0x08035ED4
	push {lr}
	ldr r2, _08035EE8  @ =gUnknown_0813DF38
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08035EE8:
	.4byte gUnknown_0813DF38
	THUMB_FUNC_END sub_08035ED4

