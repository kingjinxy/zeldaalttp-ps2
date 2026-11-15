	THUMB_FUNC_START sub_08026094
sub_08026094: @ 0x08026094
	push {lr}
	ldr r2, _080260A8  @ =gUnknown_0813C61C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080260A8:
	.4byte gUnknown_0813C61C
	THUMB_FUNC_END sub_08026094

