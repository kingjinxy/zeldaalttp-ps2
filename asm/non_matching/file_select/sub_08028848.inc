	THUMB_FUNC_START sub_08028848
sub_08028848: @ 0x08028848
	push {lr}
	ldr r2, _0802885C  @ =gUnknown_0813CFEC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802885C:
	.4byte gUnknown_0813CFEC
	THUMB_FUNC_END sub_08028848

