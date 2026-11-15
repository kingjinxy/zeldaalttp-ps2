	THUMB_FUNC_START sub_0812C8AC
sub_0812C8AC: @ 0x0812C8AC
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsl r2, r2, #24
	ldr r4, _0812C8D4  @ =gUnknown_030003C0
	ldr r5, [r4]
	ldr r4, _0812C8D8  @ =0x00000103
	strh r4, [r5]
	lsr r2, r2, #16
	orr r2, r2, r0
	lsl r3, r3, #24
	lsr r3, r3, #24
	orr r2, r2, r3
	str r2, [r5, #4]
	str r1, [r5, #8]
	bl sub_0812C660
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C8D4:
	.4byte gUnknown_030003C0
_0812C8D8:
	.4byte 0x00000103
	THUMB_FUNC_END sub_0812C8AC

