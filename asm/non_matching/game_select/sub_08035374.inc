	THUMB_FUNC_START sub_08035374
sub_08035374: @ 0x08035374
	push {lr}
	ldr r2, _08035388  @ =gUnknown_08427B60
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08035388:
	.4byte gUnknown_08427B60
	THUMB_FUNC_END sub_08035374

