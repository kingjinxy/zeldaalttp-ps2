	THUMB_FUNC_START sub_0812C924
sub_0812C924: @ 0x0812C924
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0812C940  @ =gUnknown_030003C0
	ldr r2, [r1]
	mov r1, #193
	lsl r1, r1, #2
	strh r1, [r2]
	str r0, [r2, #4]
	bl sub_0812C660
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C940:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C924

