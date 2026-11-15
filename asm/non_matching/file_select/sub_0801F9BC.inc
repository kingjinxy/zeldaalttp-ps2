	THUMB_FUNC_START sub_0801F9BC
sub_0801F9BC: @ 0x0801F9BC
	push {lr}
	ldr r2, _0801F9D0  @ =gUnknown_0813B244
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801F9D0:
	.4byte gUnknown_0813B244
	THUMB_FUNC_END sub_0801F9BC

