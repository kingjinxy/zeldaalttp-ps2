	THUMB_FUNC_START sub_0801D84C
sub_0801D84C: @ 0x0801D84C
	push {lr}
	ldr r2, _0801D860  @ =gUnknown_0813A8D8
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801D860:
	.4byte gUnknown_0813A8D8
	THUMB_FUNC_END sub_0801D84C

