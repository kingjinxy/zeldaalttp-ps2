	THUMB_FUNC_START sub_0801CB60
sub_0801CB60: @ 0x0801CB60
	push {lr}
	ldr r2, _0801CB74  @ =gUnknown_0813A75C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801CB74:
	.4byte gUnknown_0813A75C
	THUMB_FUNC_END sub_0801CB60

