	THUMB_FUNC_START sub_0809FEF8
sub_0809FEF8: @ 0x0809FEF8
	ldr r2, _0809FF28  @ =gUnknown_03003966
	ldr r0, _0809FF2C  @ =0xFFFFF236
	add r1, r2, r0
	ldrh r0, [r1]
	strb r0, [r2]
	mov r3, #0
	ldrsh r0, [r1, r3]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	asr r0, r0, #8
	strb r0, [r2, #1]
	ldr r0, _0809FF30  @ =0xFFFFF23E
	add r3, r2, r0
	ldrb r1, [r3]
	ldrb r0, [r2, #15]
	orr r0, r0, r1
	strb r0, [r2, #15]
	sub r2, r2, #35
	ldrb r1, [r3]
	ldrb r0, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
_0809FF28:
	.4byte gUnknown_03003966
_0809FF2C:
	.4byte 0xFFFFF236
_0809FF30:
	.4byte 0xFFFFF23E
	THUMB_FUNC_END sub_0809FEF8

