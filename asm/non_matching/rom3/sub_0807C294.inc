	THUMB_FUNC_START sub_0807C294
sub_0807C294: @ 0x0807C294
	push {r4,lr}
	ldr r1, _0807C2D0  @ =gRam
	ldr r2, _0807C2D4  @ =0x00000B28
	add r0, r1, r2
	ldrh r3, [r0]
	ldr r2, _0807C2D8  @ =0x000009F8
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r4, r1, #0
	cmp r2, r0
	bne _0807C2E0
	lsl r2, r3, #1
	ldr r1, _0807C2DC  @ =0x00000C22
	add r0, r4, r1
	add r2, r2, r0
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	sub r0, r0, #128
	mov r1, #128
	lsl r1, r1, #6
	orr r0, r0, r1
	asr r0, r0, #1
	strh r0, [r2]
	b _0807C2F8
	.byte 0x00
	.byte 0x00
_0807C2D0:
	.4byte gRam
_0807C2D4:
	.4byte 0x00000B28
_0807C2D8:
	.4byte 0x000009F8
_0807C2DC:
	.4byte 0x00000C22
_0807C2E0:
	lsl r1, r3, #1
	ldr r2, _0807C318  @ =0x00000C22
	add r0, r4, r2
	add r1, r1, r0
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r0, r0, #128
	asr r0, r0, #1
	strh r0, [r1]
_0807C2F8:
	add r3, r3, #1
	ldr r1, _0807C31C  @ =0x00000B28
	add r0, r4, r1
	strh r3, [r0]
	ldr r2, _0807C320  @ =0x00000B2C
	add r0, r4, r2
	strh r3, [r0]
	add r1, r1, #38
	add r0, r4, r1
	strh r3, [r0]
	add r2, r2, #36
	add r0, r4, r2
	strh r3, [r0]
	pop {r4}
	pop {r0}
	bx r0
_0807C318:
	.4byte 0x00000C22
_0807C31C:
	.4byte 0x00000B28
_0807C320:
	.4byte 0x00000B2C
	THUMB_FUNC_END sub_0807C294

