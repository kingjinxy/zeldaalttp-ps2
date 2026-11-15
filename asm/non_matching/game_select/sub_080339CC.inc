	THUMB_FUNC_START sub_080339CC
sub_080339CC: @ 0x080339CC
	push {lr}
	ldr r2, _080339E0  @ =gUnknown_0813D960
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080339E0:
	.4byte gUnknown_0813D960
	THUMB_FUNC_END sub_080339CC

