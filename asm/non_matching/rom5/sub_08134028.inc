	THUMB_FUNC_START sub_08134028
sub_08134028: @ 0x08134028
	ldr r0, _081342D4  @ =gUnknown_03007FF0
	ldr r0, [r0]
	ldr r2, _081342D8  @ =0x68736D53
	ldr r3, [r0]
	sub r3, r3, r2
	cmp r3, #1
	bhi _08134068
	ldrb r1, [r0, #4]
	sub r1, r1, #1
	strb r1, [r0, #4]
	bgt _08134068
	ldrb r1, [r0, #11]
	strb r1, [r0, #4]
	ldr r2, _0813406C  @ =0x040000BC
	ldr r1, [r2, #8]
	lsl r1, r1, #7
	bcc _0813404E
	ldr r1, _08134070  @ =0x84400004
	str r1, [r2, #8]
_0813404E:
	ldr r1, [r2, #20]
	lsl r1, r1, #7
	bcc _08134058
	ldr r1, _08134070  @ =0x84400004
	str r1, [r2, #20]
_08134058:
	mov r1, #4
	lsl r1, r1, #8
	strh r1, [r2, #10]
	strh r1, [r2, #22]
	mov r1, #182
	lsl r1, r1, #8
	strh r1, [r2, #10]
	strh r1, [r2, #22]
_08134068:
	bx lr
	.byte 0x00
	.byte 0x00
_0813406C:
	.4byte 0x040000BC
_08134070:
	.4byte 0x84400004
	THUMB_FUNC_END sub_08134028

