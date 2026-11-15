	THUMB_FUNC_START sub_0801D8A8
sub_0801D8A8: @ 0x0801D8A8
	push {lr}
	ldr r1, [r0, #88]
	add r3, r0, #0
	add r3, r3, #61
	ldrb r2, [r3]
	add r1, r1, #61
	strb r2, [r1]
	ldr r1, [r0, #116]
	ldrb r2, [r3]
	add r1, r1, #61
	strb r2, [r1]
	ldr r1, [r0, #120]
	ldrb r2, [r3]
	add r1, r1, #61
	strb r2, [r1]
	ldr r1, _0801D8D0  @ =gUnknown_0813A8E8
	bl 0x080098A0
	pop {r0}
	bx r0
_0801D8D0:
	.4byte gUnknown_0813A8E8
	THUMB_FUNC_END sub_0801D8A8

