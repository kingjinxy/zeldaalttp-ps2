	THUMB_FUNC_START sub_08025100
sub_08025100: @ 0x08025100
	push {lr}
	ldr r2, _08025114  @ =gUnknown_0813C308
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08025114:
	.4byte gUnknown_0813C308
	THUMB_FUNC_END sub_08025100

