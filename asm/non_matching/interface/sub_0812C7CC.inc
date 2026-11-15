	THUMB_FUNC_START sub_0812C7CC
sub_0812C7CC: @ 0x0812C7CC
	push {lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _0812C7E8  @ =gUnknown_030003C0
	ldr r2, [r2]
	ldr r3, _0812C7EC  @ =0x00000201
	strh r3, [r2]
	str r1, [r2, #4]
	str r0, [r2, #8]
	bl sub_0812C660
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C7E8:
	.4byte gUnknown_030003C0
_0812C7EC:
	.4byte 0x00000201
	THUMB_FUNC_END sub_0812C7CC

