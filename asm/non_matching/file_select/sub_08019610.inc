	THUMB_FUNC_START sub_08019610
sub_08019610: @ 0x08019610
	push {lr}
	ldr r2, _08019624  @ =gUnknown_081399A0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08019624:
	.4byte gUnknown_081399A0
	THUMB_FUNC_END sub_08019610

