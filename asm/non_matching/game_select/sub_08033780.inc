	THUMB_FUNC_START sub_08033780
sub_08033780: @ 0x08033780
	push {lr}
	ldr r2, _08033794  @ =gUnknown_0813D900
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08033794:
	.4byte gUnknown_0813D900
	THUMB_FUNC_END sub_08033780

