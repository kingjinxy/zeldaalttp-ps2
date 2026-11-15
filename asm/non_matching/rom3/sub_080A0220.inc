	THUMB_FUNC_START sub_080A0220
sub_080A0220: @ 0x080A0220
	push {r4,lr}
	ldr r4, _080A0258  @ =gRam
	ldr r1, _080A025C  @ =0x000009F6
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r2, _080A0260  @ =gUnknown_0200CBE0
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #96
	bne _080A0268
	ldr r0, _080A0264  @ =0x00001784
	add r3, r4, r0
	sub r1, r1, #130
	add r0, r4, r1
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
	b _080A028A
	.byte 0x00
	.byte 0x00
_080A0258:
	.4byte gRam
_080A025C:
	.4byte 0x000009F6
_080A0260:
	.4byte gUnknown_0200CBE0
_080A0264:
	.4byte 0x00001784
_080A0268:
	ldr r1, _080A0290  @ =0x00000974
	add r0, r4, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080A0294  @ =0x00001784
	add r2, r4, r0
	lsl r1, r1, #4
	ldrh r0, [r2]
	orr r1, r1, r0
	strh r1, [r2]
_080A028A:
	pop {r4}
	pop {r0}
	bx r0
_080A0290:
	.4byte 0x00000974
_080A0294:
	.4byte 0x00001784
	THUMB_FUNC_END sub_080A0220

