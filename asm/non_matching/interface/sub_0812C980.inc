	THUMB_FUNC_START sub_0812C980
sub_0812C980: @ 0x0812C980
	push {lr}
	ldr r1, _0812C994  @ =gUnknown_030003C0
	ldr r2, [r1]
	ldr r1, _0812C998  @ =0x00000303
	strh r1, [r2]
	str r0, [r2, #4]
	bl sub_0812C660
	pop {r0}
	bx r0
_0812C994:
	.4byte gUnknown_030003C0
_0812C998:
	.4byte 0x00000303
	THUMB_FUNC_END sub_0812C980

