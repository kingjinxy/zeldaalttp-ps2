	THUMB_FUNC_START sub_08034278
sub_08034278: @ 0x08034278
	push {lr}
	ldr r2, _0803428C  @ =gUnknown_0813DADC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0803428C:
	.4byte gUnknown_0813DADC
	THUMB_FUNC_END sub_08034278

