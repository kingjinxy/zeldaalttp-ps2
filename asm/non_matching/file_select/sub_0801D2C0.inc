	THUMB_FUNC_START sub_0801D2C0
sub_0801D2C0: @ 0x0801D2C0
	push {lr}
	ldr r2, _0801D2D4  @ =gUnknown_0813A7D0
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801D2D4:
	.4byte gUnknown_0813A7D0
	THUMB_FUNC_END sub_0801D2C0

