	THUMB_FUNC_START sub_0801C564
sub_0801C564: @ 0x0801C564
	push {lr}
	ldr r2, _0801C578  @ =gUnknown_0813A638
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801C578:
	.4byte gUnknown_0813A638
	THUMB_FUNC_END sub_0801C564

