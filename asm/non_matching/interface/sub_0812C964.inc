	THUMB_FUNC_START sub_0812C964
sub_0812C964: @ 0x0812C964
	push {lr}
	ldr r1, _0812C978  @ =gUnknown_030003C0
	ldr r2, [r1]
	ldr r1, _0812C97C  @ =0x00000302
	strh r1, [r2]
	str r0, [r2, #4]
	bl sub_0812C660
	pop {r0}
	bx r0
_0812C978:
	.4byte gUnknown_030003C0
_0812C97C:
	.4byte 0x00000302
	THUMB_FUNC_END sub_0812C964

