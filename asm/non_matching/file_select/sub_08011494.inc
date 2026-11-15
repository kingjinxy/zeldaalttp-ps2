	THUMB_FUNC_START sub_08011494
sub_08011494: @ 0x08011494
	push {lr}
	ldr r2, _080114A8  @ =gUnknown_08427588
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080114A8:
	.4byte gUnknown_08427588
	THUMB_FUNC_END sub_08011494

