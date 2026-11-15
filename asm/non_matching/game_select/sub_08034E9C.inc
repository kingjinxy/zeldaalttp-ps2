	THUMB_FUNC_START sub_08034E9C
sub_08034E9C: @ 0x08034E9C
	push {lr}
	ldr r2, _08034EB0  @ =gUnknown_08427B3C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034EB0:
	.4byte gUnknown_08427B3C
	THUMB_FUNC_END sub_08034E9C

