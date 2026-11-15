	THUMB_FUNC_START sub_0802B738
sub_0802B738: @ 0x0802B738
	push {lr}
	ldr r1, _0802B748  @ =gUnknown_02016328
	mov r0, #1
	strb r0, [r1]
	bl sub_0802BF30
	pop {r0}
	bx r0
_0802B748:
	.4byte gUnknown_02016328
	THUMB_FUNC_END sub_0802B738

