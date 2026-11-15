	THUMB_FUNC_START sub_0812C8DC
sub_0812C8DC: @ 0x0812C8DC
	push {r4,lr}
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r3, _0812C8FC  @ =gUnknown_030003C0
	ldr r4, [r3]
	ldr r3, _0812C900  @ =0x00000101
	strh r3, [r4]
	lsl r0, r0, #16
	orr r0, r0, r2
	str r0, [r4, #4]
	str r1, [r4, #8]
	bl sub_0812C660
	pop {r4}
	pop {r0}
	bx r0
_0812C8FC:
	.4byte gUnknown_030003C0
_0812C900:
	.4byte 0x00000101
	THUMB_FUNC_END sub_0812C8DC

