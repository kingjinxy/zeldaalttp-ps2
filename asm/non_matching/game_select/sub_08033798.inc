	THUMB_FUNC_START sub_08033798
sub_08033798: @ 0x08033798
	push {lr}
	ldr r2, _080337AC  @ =gUnknown_0813D92C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080337AC:
	.4byte gUnknown_0813D92C
	THUMB_FUNC_END sub_08033798

