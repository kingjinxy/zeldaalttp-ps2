	THUMB_FUNC_START sub_080A0C58
sub_080A0C58: @ 0x080A0C58
	ldr r1, _080A0C84  @ =gUnknown_03003966
	ldr r0, _080A0C88  @ =0xFFFFF236
	add r2, r1, r0
	ldrh r0, [r2]
	strb r0, [r1]
	mov r3, #0
	ldrsh r0, [r2, r3]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1, #1]
	add r2, r1, #0
	add r2, r2, #204
	ldr r0, _080A0C8C  @ =0xFFFFF23E
	add r1, r1, r0
	ldrb r0, [r1]
	lsl r0, r0, #4
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	bx lr
_080A0C84:
	.4byte gUnknown_03003966
_080A0C88:
	.4byte 0xFFFFF236
_080A0C8C:
	.4byte 0xFFFFF23E
	THUMB_FUNC_END sub_080A0C58

