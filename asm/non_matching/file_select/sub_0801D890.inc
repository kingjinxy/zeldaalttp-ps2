	THUMB_FUNC_START sub_0801D890
sub_0801D890: @ 0x0801D890
	push {lr}
	ldr r2, _0801D8A4  @ =gUnknown_0813A900
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801D8A4:
	.4byte gUnknown_0813A900
	THUMB_FUNC_END sub_0801D890

