	THUMB_FUNC_START sub_0812AB14
sub_0812AB14: @ 0x0812AB14
	ldr r1, _0812AB2C  @ =gUnknown_03000158
	mov r0, #0
	strb r0, [r1]
	strb r0, [r1, #1]
	mov r2, #0
	strh r0, [r1, #2]
	strh r0, [r1, #4]
	strb r2, [r1, #6]
	mov r0, #48
	strb r0, [r1, #7]
	bx lr
	.byte 0x00
	.byte 0x00
_0812AB2C:
	.4byte gUnknown_03000158
	THUMB_FUNC_END sub_0812AB14

