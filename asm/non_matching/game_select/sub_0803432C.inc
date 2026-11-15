	THUMB_FUNC_START sub_0803432C
sub_0803432C: @ 0x0803432C
	push {lr}
	ldr r2, _08034340  @ =gUnknown_08427A98
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034340:
	.4byte gUnknown_08427A98
	THUMB_FUNC_END sub_0803432C

