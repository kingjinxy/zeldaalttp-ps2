	THUMB_FUNC_START sub_0807C3B0
sub_0807C3B0: @ 0x0807C3B0
	push {r4,r5,lr}
	ldr r1, _0807C400  @ =gRam
	ldr r0, _0807C404  @ =0x00000B4A
	add r4, r1, r0
	ldrh r2, [r4]
	lsl r3, r2, #1
	ldr r5, _0807C408  @ =0x00000C22
	add r0, r1, r5
	add r3, r3, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r3]
	add r2, r2, #1
	strh r2, [r4]
	ldr r3, _0807C40C  @ =0x00000B4C
	add r0, r1, r3
	strh r2, [r0]
	mov r5, #174
	lsl r5, r5, #4
	add r0, r1, r5
	strh r2, [r0]
	sub r3, r3, #36
	add r0, r1, r3
	strh r2, [r0]
	add r5, r5, #76
	add r0, r1, r5
	strh r2, [r0]
	add r3, r3, #38
	add r0, r1, r3
	strh r2, [r0]
	add r5, r5, #36
	add r1, r1, r5
	strh r2, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0807C400:
	.4byte gRam
_0807C404:
	.4byte 0x00000B4A
_0807C408:
	.4byte 0x00000C22
_0807C40C:
	.4byte 0x00000B4C
	THUMB_FUNC_END sub_0807C3B0

