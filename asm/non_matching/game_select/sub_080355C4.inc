	THUMB_FUNC_START sub_080355C4
sub_080355C4: @ 0x080355C4
	push {lr}
	ldr r2, _080355D8  @ =gUnknown_0813DDF8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080355D8:
	.4byte gUnknown_0813DDF8
	THUMB_FUNC_END sub_080355C4

