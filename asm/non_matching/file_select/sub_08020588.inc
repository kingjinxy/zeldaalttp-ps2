	THUMB_FUNC_START sub_08020588
sub_08020588: @ 0x08020588
	push {lr}
	ldr r2, _0802059C  @ =gUnknown_0813B66C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802059C:
	.4byte gUnknown_0813B66C
	THUMB_FUNC_END sub_08020588

