	THUMB_FUNC_START sub_0801F748
sub_0801F748: @ 0x0801F748
	push {lr}
	ldr r2, _0801F75C  @ =gUnknown_0813B1E4
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801F75C:
	.4byte gUnknown_0813B1E4
	THUMB_FUNC_END sub_0801F748

