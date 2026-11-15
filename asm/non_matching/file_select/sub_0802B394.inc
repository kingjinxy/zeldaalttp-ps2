	THUMB_FUNC_START sub_0802B394
sub_0802B394: @ 0x0802B394
	push {lr}
	ldr r2, _0802B3A8  @ =gUnknown_08427744
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802B3A8:
	.4byte gUnknown_08427744
	THUMB_FUNC_END sub_0802B394

