	THUMB_FUNC_START sub_08133438
sub_08133438: @ 0x08133438
	ldr r0, _08133458  @ =gUnknown_02000C00
	mov r1, #0
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	ldr r0, _0813345C  @ =gUnknown_02000800
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	ldr r0, _08133460  @ =gRam
	ldr r1, _08133464  @ =0x000009CC
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08133458:
	.4byte gUnknown_02000C00
_0813345C:
	.4byte gUnknown_02000800
_08133460:
	.4byte gRam
_08133464:
	.4byte 0x000009CC
	THUMB_FUNC_END sub_08133438

