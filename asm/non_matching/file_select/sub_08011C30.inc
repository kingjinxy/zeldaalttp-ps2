	THUMB_FUNC_START sub_08011C30
sub_08011C30: @ 0x08011C30
	push {lr}
	ldr r2, _08011C44  @ =gUnknown_084275EC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08011C44:
	.4byte gUnknown_084275EC
	THUMB_FUNC_END sub_08011C30

