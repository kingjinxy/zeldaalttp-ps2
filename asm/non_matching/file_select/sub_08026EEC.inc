	THUMB_FUNC_START sub_08026EEC
sub_08026EEC: @ 0x08026EEC
	push {lr}
	ldr r2, _08026F00  @ =gUnknown_0813CCD4
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08026F00:
	.4byte gUnknown_0813CCD4
	THUMB_FUNC_END sub_08026EEC

