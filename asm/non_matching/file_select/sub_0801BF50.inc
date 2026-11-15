	THUMB_FUNC_START sub_0801BF50
sub_0801BF50: @ 0x0801BF50
	add r2, r0, #0
	mov r0, #1
	strb r0, [r2, #20]
	ldr r0, _0801BF78  @ =0x0000FFFE
	strh r0, [r2, #58]
	ldrb r1, [r2, #23]
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, #30
	add r1, r2, #0
	add r1, r1, #116
	strh r0, [r1]
	sub r1, r1, #70
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801BF7C  @ =gUnknown_0813A404
	str r0, [r2, #72]
	bx lr
	.byte 0x00
	.byte 0x00
_0801BF78:
	.4byte 0x0000FFFE
_0801BF7C:
	.4byte gUnknown_0813A404
	THUMB_FUNC_END sub_0801BF50

