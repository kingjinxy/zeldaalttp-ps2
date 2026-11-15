	THUMB_FUNC_START sub_08011AA8
sub_08011AA8: @ 0x08011AA8
	push {lr}
	ldr r2, _08011ABC  @ =gUnknown_084275DC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08011ABC:
	.4byte gUnknown_084275DC
	THUMB_FUNC_END sub_08011AA8

