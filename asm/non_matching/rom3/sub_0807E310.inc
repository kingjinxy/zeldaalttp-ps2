	THUMB_FUNC_START sub_0807E310
sub_0807E310: @ 0x0807E310
	push {r4,r5,lr}
	ldr r5, _0807E37C  @ =gUnknown_08164B20
	ldr r2, _0807E380  @ =gRam
	ldr r0, _0807E384  @ =0x000009EA
	add r4, r2, r0
	ldrh r0, [r4]
	lsl r0, r0, #2
	ldr r1, _0807E388  @ =0x000009EE
	add r3, r2, r1
	ldrh r1, [r3]
	orr r0, r0, r1
	add r0, r0, #2
	mov r1, #0
	strh r0, [r4]
	strh r1, [r3]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r2, r0
	mov r1, #0
	ldrsh r3, [r2, r1]
	mov r2, #64
	and r2, r2, r3
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r3
	asr r1, r1, #1
	ldr r0, _0807E38C  @ =0x0000303F
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r4, r0, #1
	ldr r1, _0807E390  @ =gUnknown_02018000
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r0, _0807E394  @ =0x000003FF
	and r0, r0, r1
	cmp r0, #226
	beq _0807E368
	ldr r0, _0807E390  @ =gUnknown_02018000
	add r1, r4, r0
	ldrh r0, [r5]
	strh r0, [r1]
_0807E368:
	add r0, r5, #0
	bl sub_0807BBDC
	ldr r0, _0807E390  @ =gUnknown_02018000
	add r1, r4, r0
	ldrh r0, [r5, #4]
	strh r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807E37C:
	.4byte gUnknown_08164B20
_0807E380:
	.4byte gRam
_0807E384:
	.4byte 0x000009EA
_0807E388:
	.4byte 0x000009EE
_0807E38C:
	.4byte 0x0000303F
_0807E390:
	.4byte gUnknown_02018000
_0807E394:
	.4byte 0x000003FF
	THUMB_FUNC_END sub_0807E310

