	THUMB_FUNC_START sub_0801E494
sub_0801E494: @ 0x0801E494
	push {lr}
	ldr r2, _0801E4A8  @ =gUnknown_0813AD94
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801E4A8:
	.4byte gUnknown_0813AD94
	THUMB_FUNC_END sub_0801E494

