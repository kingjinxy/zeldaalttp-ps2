	THUMB_FUNC_START sub_08033AAC
sub_08033AAC: @ 0x08033AAC
	push {lr}
	ldr r2, _08033AC0  @ =gUnknown_0813D96C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033AC0:
	.4byte gUnknown_0813D96C
	THUMB_FUNC_END sub_08033AAC

