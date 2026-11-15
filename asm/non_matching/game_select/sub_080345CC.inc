	THUMB_FUNC_START sub_080345CC
sub_080345CC: @ 0x080345CC
	push {lr}
	ldr r2, _080345E0  @ =gUnknown_08427AD8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080345E0:
	.4byte gUnknown_08427AD8
	THUMB_FUNC_END sub_080345CC

