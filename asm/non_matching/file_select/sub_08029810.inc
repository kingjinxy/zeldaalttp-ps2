	THUMB_FUNC_START sub_08029810
sub_08029810: @ 0x08029810
	push {lr}
	ldr r2, _08029824  @ =gUnknown_0813D260
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08029824:
	.4byte gUnknown_0813D260
	THUMB_FUNC_END sub_08029810

