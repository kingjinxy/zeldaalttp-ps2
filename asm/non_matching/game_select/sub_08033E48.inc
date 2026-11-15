	THUMB_FUNC_START sub_08033E48
sub_08033E48: @ 0x08033E48
	push {lr}
	ldr r2, _08033E5C  @ =gUnknown_0813D9A8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033E5C:
	.4byte gUnknown_0813D9A8
	THUMB_FUNC_END sub_08033E48

