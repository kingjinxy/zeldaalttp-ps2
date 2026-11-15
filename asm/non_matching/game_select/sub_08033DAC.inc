	THUMB_FUNC_START sub_08033DAC
sub_08033DAC: @ 0x08033DAC
	push {lr}
	ldr r2, _08033DC0  @ =gUnknown_0813D9A0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033DC0:
	.4byte gUnknown_0813D9A0
	THUMB_FUNC_END sub_08033DAC

