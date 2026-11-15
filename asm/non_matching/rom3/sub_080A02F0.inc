	THUMB_FUNC_START sub_080A02F0
sub_080A02F0: @ 0x080A02F0
	push {r4,r5,lr}
	ldr r2, _080A033C  @ =gRam
	ldr r0, _080A0340  @ =0x00001784
	add r3, r2, r0
	ldr r5, _080A0344  @ =0x00000974
	add r1, r2, r5
	ldrh r0, [r3]
	ldrh r4, [r1]
	orr r0, r0, r4
	strh r0, [r3]
	ldr r0, _080A0348  @ =0x00001736
	add r3, r2, r0
	sub r5, r5, #8
	add r1, r2, r5
	ldrh r0, [r1]
	strb r0, [r3]
	ldr r0, _080A034C  @ =0x00001737
	add r3, r2, r0
	mov r5, #0
	ldrsh r0, [r1, r5]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	asr r0, r0, #8
	strb r0, [r3]
	ldr r0, _080A0350  @ =0x00001772
	add r1, r2, r0
	ldrh r0, [r1]
	orr r0, r0, r4
	strh r0, [r1]
	ldr r5, _080A0354  @ =0x0000097C
	add r2, r2, r5
	ldrh r0, [r2]
	orr r0, r0, r4
	strh r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080A033C:
	.4byte gRam
_080A0340:
	.4byte 0x00001784
_080A0344:
	.4byte 0x00000974
_080A0348:
	.4byte 0x00001736
_080A034C:
	.4byte 0x00001737
_080A0350:
	.4byte 0x00001772
_080A0354:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A02F0

