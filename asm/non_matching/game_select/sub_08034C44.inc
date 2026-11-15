	THUMB_FUNC_START sub_08034C44
sub_08034C44: @ 0x08034C44
	push {lr}
	ldr r2, _08034C58  @ =gUnknown_0813DCA8
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034C58:
	.4byte gUnknown_0813DCA8
	THUMB_FUNC_END sub_08034C44

