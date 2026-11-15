	THUMB_FUNC_START sub_080349D8
sub_080349D8: @ 0x080349D8
	push {lr}
	ldr r2, _080349EC  @ =gUnknown_08427B04
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080349EC:
	.4byte gUnknown_08427B04
	THUMB_FUNC_END sub_080349D8

