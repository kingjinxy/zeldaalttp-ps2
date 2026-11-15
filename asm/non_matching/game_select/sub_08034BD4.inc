	THUMB_FUNC_START sub_08034BD4
sub_08034BD4: @ 0x08034BD4
	push {lr}
	ldr r2, _08034BE8  @ =gUnknown_08427B24
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034BE8:
	.4byte gUnknown_08427B24
	THUMB_FUNC_END sub_08034BD4

