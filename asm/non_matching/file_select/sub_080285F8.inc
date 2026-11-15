	THUMB_FUNC_START sub_080285F8
sub_080285F8: @ 0x080285F8
	push {lr}
	ldr r2, _0802860C  @ =gUnknown_0813CFE0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802860C:
	.4byte gUnknown_0813CFE0
	THUMB_FUNC_END sub_080285F8

