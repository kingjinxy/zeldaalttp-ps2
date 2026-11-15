	THUMB_FUNC_START sub_080A0408
sub_080A0408: @ 0x080A0408
	push {r4,lr}
	ldr r3, _080A0444  @ =gRam
	ldr r0, _080A0448  @ =0x0000097C
	add r1, r3, r0
	ldr r2, _080A044C  @ =0x00000974
	add r4, r3, r2
	ldrh r0, [r1]
	ldrh r2, [r4]
	orr r0, r0, r2
	strh r0, [r1]
	ldr r0, _080A0450  @ =0x0000177C
	add r3, r3, r0
	mov r0, #255
	and r0, r0, r2
	lsl r0, r0, #8
	mov r2, #0
	ldrsh r1, [r4, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r1, r1, r2
	asr r1, r1, #8
	add r0, r0, r1
	lsl r0, r0, #4
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A0444:
	.4byte gRam
_080A0448:
	.4byte 0x0000097C
_080A044C:
	.4byte 0x00000974
_080A0450:
	.4byte 0x0000177C
	THUMB_FUNC_END sub_080A0408

