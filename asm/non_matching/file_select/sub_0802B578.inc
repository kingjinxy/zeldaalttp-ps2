	THUMB_FUNC_START sub_0802B578
sub_0802B578: @ 0x0802B578
	push {lr}
	ldr r2, _0802B58C  @ =gUnknown_08427754
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802B58C:
	.4byte gUnknown_08427754
	THUMB_FUNC_END sub_0802B578

