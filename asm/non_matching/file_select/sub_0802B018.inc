	THUMB_FUNC_START sub_0802B018
sub_0802B018: @ 0x0802B018
	push {lr}
	ldr r2, _0802B02C  @ =gUnknown_0813D5C8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802B02C:
	.4byte gUnknown_0813D5C8
	THUMB_FUNC_END sub_0802B018

