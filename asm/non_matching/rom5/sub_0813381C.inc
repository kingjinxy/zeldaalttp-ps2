	THUMB_FUNC_START sub_0813381C
sub_0813381C: @ 0x0813381C
	push {lr}
	ldr r0, _0813383C  @ =gUnknown_020008F6
	ldrh r0, [r0]
	bl sub_08131F24
	ldr r1, _08133840  @ =gUnknown_02000CF6
	strh r0, [r1]
	ldr r0, _08133844  @ =gUnknown_020008F8
	ldrh r0, [r0]
	bl sub_08131F24
	ldr r1, _08133848  @ =gUnknown_02000CF8
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813383C:
	.4byte gUnknown_020008F6
_08133840:
	.4byte gUnknown_02000CF6
_08133844:
	.4byte gUnknown_020008F8
_08133848:
	.4byte gUnknown_02000CF8
	THUMB_FUNC_END sub_0813381C

