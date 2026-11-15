	THUMB_FUNC_START sub_0801147C
sub_0801147C: @ 0x0801147C
	push {lr}
	ldr r2, _08011490  @ =gUnknown_08427548
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08011490:
	.4byte gUnknown_08427548
	THUMB_FUNC_END sub_0801147C

