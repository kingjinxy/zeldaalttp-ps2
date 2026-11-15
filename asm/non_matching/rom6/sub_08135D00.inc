	THUMB_FUNC_START sub_08135D00
sub_08135D00: @ 0x08135D00
	ldr r3, _08135D30  @ =0x04000208
	mov r1, #0
	strh r1, [r3]
	ldr r2, _08135D34  @ =gUnknown_03000018
	ldr r0, [r2]
	strh r1, [r0]
	add r0, r0, #2
	str r0, [r2]
	strh r1, [r0]
	sub r0, r0, #2
	str r0, [r2]
	ldr r2, _08135D38  @ =0x04000200
	ldr r0, _08135D3C  @ =gUnknown_03000010
	ldrb r0, [r0]
	mov r1, #8
	lsl r1, r1, r0
	ldrh r0, [r2]
	bic r0, r0, r1
	strh r0, [r2]
	ldr r0, _08135D40  @ =gUnknown_0300001C
	ldrh r0, [r0]
	strh r0, [r3]
	bx lr
	.byte 0x00
	.byte 0x00
_08135D30:
	.4byte 0x04000208
_08135D34:
	.4byte gUnknown_03000018
_08135D38:
	.4byte 0x04000200
_08135D3C:
	.4byte gUnknown_03000010
_08135D40:
	.4byte gUnknown_0300001C
	THUMB_FUNC_END sub_08135D00

