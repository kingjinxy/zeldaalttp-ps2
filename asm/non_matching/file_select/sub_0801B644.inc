	THUMB_FUNC_START sub_0801B644
sub_0801B644: @ 0x0801B644
	push {lr}
	ldr r2, _0801B658  @ =gUnknown_0813A0BC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801B658:
	.4byte gUnknown_0813A0BC
	THUMB_FUNC_END sub_0801B644

