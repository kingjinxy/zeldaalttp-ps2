	THUMB_FUNC_START sub_08033AF8
sub_08033AF8: @ 0x08033AF8
	push {lr}
	ldr r2, _08033B0C  @ =gUnknown_0813D974
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033B0C:
	.4byte gUnknown_0813D974
	THUMB_FUNC_END sub_08033AF8

