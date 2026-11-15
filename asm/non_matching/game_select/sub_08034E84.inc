	THUMB_FUNC_START sub_08034E84
sub_08034E84: @ 0x08034E84
	push {lr}
	ldr r2, _08034E98  @ =gUnknown_08427B34
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034E98:
	.4byte gUnknown_08427B34
	THUMB_FUNC_END sub_08034E84

