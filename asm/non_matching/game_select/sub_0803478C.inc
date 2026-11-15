	THUMB_FUNC_START sub_0803478C
sub_0803478C: @ 0x0803478C
	push {lr}
	ldr r2, _080347A0  @ =gUnknown_08427AF8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080347A0:
	.4byte gUnknown_08427AF8
	THUMB_FUNC_END sub_0803478C

