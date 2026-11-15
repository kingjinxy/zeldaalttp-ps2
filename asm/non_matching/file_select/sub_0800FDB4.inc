	THUMB_FUNC_START sub_0800FDB4
sub_0800FDB4: @ 0x0800FDB4
	push {lr}
	ldr r1, _0800FDCC  @ =gUnknown_084274D8
	ldr r0, _0800FDD0  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800FDCC:
	.4byte gUnknown_084274D8
_0800FDD0:
	.4byte gSubState
	THUMB_FUNC_END sub_0800FDB4

