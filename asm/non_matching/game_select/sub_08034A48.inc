	THUMB_FUNC_START sub_08034A48
sub_08034A48: @ 0x08034A48
	push {lr}
	ldr r2, _08034A5C  @ =gUnknown_08427B0C
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034A5C:
	.4byte gUnknown_08427B0C
	THUMB_FUNC_END sub_08034A48

