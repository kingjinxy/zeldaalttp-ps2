	THUMB_FUNC_START sub_08012800
sub_08012800: @ 0x08012800
	ldr r1, _08012814  @ =gUnknown_03000940
	ldr r0, _08012818  @ =gHeldKeys
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _0801281C  @ =gUnknown_03005E10
	ldr r0, _08012820  @ =gNewKeys
	ldrh r0, [r0]
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08012814:
	.4byte gUnknown_03000940
_08012818:
	.4byte gHeldKeys
_0801281C:
	.4byte gUnknown_03005E10
_08012820:
	.4byte gNewKeys
	THUMB_FUNC_END sub_08012800

