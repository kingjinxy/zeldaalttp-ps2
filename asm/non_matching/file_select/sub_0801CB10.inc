	THUMB_FUNC_START sub_0801CB10
sub_0801CB10: @ 0x0801CB10
	push {lr}
	ldr r2, _0801CB24  @ =gUnknown_0813A754
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801CB24:
	.4byte gUnknown_0813A754
	THUMB_FUNC_END sub_0801CB10

