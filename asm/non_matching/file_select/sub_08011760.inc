	THUMB_FUNC_START sub_08011760
sub_08011760: @ 0x08011760
	push {lr}
	ldr r2, _08011774  @ =gUnknown_084275BC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08011774:
	.4byte gUnknown_084275BC
	THUMB_FUNC_END sub_08011760

