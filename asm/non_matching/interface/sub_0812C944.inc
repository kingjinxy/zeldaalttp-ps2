	THUMB_FUNC_START sub_0812C944
sub_0812C944: @ 0x0812C944
	push {lr}
	ldr r2, _0812C95C  @ =gUnknown_030003C0
	ldr r2, [r2]
	ldr r3, _0812C960  @ =0x00000301
	strh r3, [r2]
	str r0, [r2, #4]
	str r1, [r2, #8]
	bl sub_0812C660
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C95C:
	.4byte gUnknown_030003C0
_0812C960:
	.4byte 0x00000301
	THUMB_FUNC_END sub_0812C944

