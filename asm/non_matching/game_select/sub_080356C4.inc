	THUMB_FUNC_START sub_080356C4
sub_080356C4: @ 0x080356C4
	push {lr}
	ldr r2, _080356D8  @ =gUnknown_0813DE20
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080356D8:
	.4byte gUnknown_0813DE20
	THUMB_FUNC_END sub_080356C4

