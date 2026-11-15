	THUMB_FUNC_START sub_0803413C
sub_0803413C: @ 0x0803413C
	push {lr}
	ldr r2, _08034150  @ =gUnknown_08427A8C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034150:
	.4byte gUnknown_08427A8C
	THUMB_FUNC_END sub_0803413C

