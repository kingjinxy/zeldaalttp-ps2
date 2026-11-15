	THUMB_FUNC_START sub_080A0120
sub_080A0120: @ 0x080A0120
	push {r4,lr}
	ldr r2, _080A015C  @ =gUnknown_03003966
	ldr r0, _080A0160  @ =0xFFFFF236
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
	mov r4, #35
	neg r4, r4
	ldr r0, _080A0164  @ =0xFFFFF23E
	add r3, r2, r0
	ldrb r1, [r3]
	ldrb r0, [r4, r2]
	orr r0, r0, r1
	strb r0, [r4, r2]
	ldrb r0, [r3]
	lsl r0, r0, #4
	ldrb r1, [r2, #15]
	orr r0, r0, r1
	strb r0, [r2, #15]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A015C:
	.4byte gUnknown_03003966
_080A0160:
	.4byte 0xFFFFF236
_080A0164:
	.4byte 0xFFFFF23E
	THUMB_FUNC_END sub_080A0120

