	THUMB_FUNC_START sub_08034B70
sub_08034B70: @ 0x08034B70
	push {lr}
	ldr r2, _08034B84  @ =gUnknown_08427B1C
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034B84:
	.4byte gUnknown_08427B1C
	THUMB_FUNC_END sub_08034B70

