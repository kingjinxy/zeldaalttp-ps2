	THUMB_FUNC_START sub_080A0A14
sub_080A0A14: @ 0x080A0A14
	ldr r1, _080A0A3C  @ =gRam
	ldr r0, _080A0A40  @ =0x00001888
	add r3, r1, r0
	ldr r2, _080A0A44  @ =0x00000974
	add r1, r1, r2
	ldrb r0, [r1]
	lsl r0, r0, #8
	mov r2, #0
	ldrsh r1, [r1, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r1, r1, r2
	asr r1, r1, #8
	add r0, r0, r1
	lsl r0, r0, #4
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r3]
	bx lr
	.byte 0x00
	.byte 0x00
_080A0A3C:
	.4byte gRam
_080A0A40:
	.4byte 0x00001888
_080A0A44:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0A14

