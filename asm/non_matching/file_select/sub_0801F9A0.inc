	THUMB_FUNC_START sub_0801F9A0
sub_0801F9A0: @ 0x0801F9A0
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _0801F9B8  @ =gUnknown_0813B22C
	bl 0x08009924
	add r0, r4, #0
	bl sub_0801FC70
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F9B8:
	.4byte gUnknown_0813B22C
	THUMB_FUNC_END sub_0801F9A0

