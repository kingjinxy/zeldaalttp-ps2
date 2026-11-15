	THUMB_FUNC_START sub_08027C98
sub_08027C98: @ 0x08027C98
	push {lr}
	ldr r2, _08027CAC  @ =gUnknown_0813CE30
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08027CAC:
	.4byte gUnknown_0813CE30
	THUMB_FUNC_END sub_08027C98

