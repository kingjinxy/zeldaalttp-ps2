	THUMB_FUNC_START sub_0812C884
sub_0812C884: @ 0x0812C884
	push {r4,lr}
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r3, _0812C8A8  @ =gUnknown_030003C0
	ldr r4, [r3]
	mov r3, #129
	lsl r3, r3, #1
	strh r3, [r4]
	lsl r0, r0, #16
	orr r0, r0, r2
	str r0, [r4, #4]
	str r1, [r4, #8]
	bl sub_0812C660
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C8A8:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C884

