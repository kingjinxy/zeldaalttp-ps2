	THUMB_FUNC_START sub_080A09E4
sub_080A09E4: @ 0x080A09E4
	ldr r0, _080A0A08  @ =gRam
	ldr r1, _080A0A0C  @ =0x00001888
	add r3, r0, r1
	ldr r2, _080A0A10  @ =0x00000974
	add r0, r0, r2
	ldrb r1, [r0]
	lsl r1, r1, #8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r3]
	orr r1, r1, r0
	strh r1, [r3]
	bx lr
_080A0A08:
	.4byte gRam
_080A0A0C:
	.4byte 0x00001888
_080A0A10:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A09E4

