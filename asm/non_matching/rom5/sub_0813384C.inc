	THUMB_FUNC_START sub_0813384C
sub_0813384C: @ 0x0813384C
	ldr r1, _08133860  @ =gUnknown_02000CF6
	ldr r0, _08133864  @ =gUnknown_020008F6
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _08133868  @ =gUnknown_020008F8
	ldrh r0, [r0]
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08133860:
	.4byte gUnknown_02000CF6
_08133864:
	.4byte gUnknown_020008F6
_08133868:
	.4byte gUnknown_020008F8
	THUMB_FUNC_END sub_0813384C

