	THUMB_FUNC_START sub_08018608
sub_08018608: @ 0x08018608
	push {lr}
	ldr r2, _0801861C  @ =gUnknown_0813988C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801861C:
	.4byte gUnknown_0813988C
	THUMB_FUNC_END sub_08018608

