	THUMB_FUNC_START sub_08035948
sub_08035948: @ 0x08035948
	push {lr}
	ldr r2, _0803595C  @ =gUnknown_0813DEDC
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0803595C:
	.4byte gUnknown_0813DEDC
	THUMB_FUNC_END sub_08035948

