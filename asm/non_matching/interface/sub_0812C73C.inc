	THUMB_FUNC_START sub_0812C73C
sub_0812C73C: @ 0x0812C73C
	push {r4,lr}
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _0812C760  @ =gUnknown_030003C0
	ldr r4, [r3]
	mov r3, #1
	strh r3, [r4]
	lsl r0, r0, #16
	orr r0, r0, r1
	str r0, [r4, #4]
	str r2, [r4, #8]
	bl sub_0812C660
	pop {r4}
	pop {r0}
	bx r0
_0812C760:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C73C

