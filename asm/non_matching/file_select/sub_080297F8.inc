	THUMB_FUNC_START sub_080297F8
sub_080297F8: @ 0x080297F8
	push {lr}
	ldr r2, _0802980C  @ =gUnknown_0813D258
	ldrb r1, [r0, #11]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802980C:
	.4byte gUnknown_0813D258
	THUMB_FUNC_END sub_080297F8

