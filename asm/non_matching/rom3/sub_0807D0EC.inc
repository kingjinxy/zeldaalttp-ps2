	THUMB_FUNC_START sub_0807D0EC
sub_0807D0EC: @ 0x0807D0EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r6, _0807D248  @ =gRam
	ldr r0, _0807D24C  @ =0x00000AD2
	add r1, r6, r0
	ldrh r2, [r1]
	mov r8, r2
	mov r0, r8
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	mov r3, r8
	lsl r3, r3, #1
	mov r8, r3
	ldr r1, _0807D250  @ =0x0000195C
	add r0, r6, r1
	add r0, r0, r8
	strh r2, [r0]
	ldr r2, _0807D254  @ =0x0000197C
	add r0, r6, r2
	add r0, r0, r8
	ldr r3, _0807D258  @ =0x000009F4
	add r1, r6, r3
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r1, _0807D25C  @ =0x0000199C
	add r0, r6, r1
	add r0, r0, r8
	mov r2, #151
	lsl r2, r2, #4
	add r2, r2, r6
	mov r9, r2
	ldrh r1, [r2]
	strh r1, [r0]
	ldrh r0, [r2]
	ldr r5, _0807D260  @ =0x00003FFF
	add r3, r5, #0
	and r3, r3, r0
	mov r7, #64
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	mov r10, r2
	mov r0, #248
	lsl r0, r0, #4
	mov r12, r0
	add r1, r3, #0
	and r1, r1, r0
	asr r1, r1, #1
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	mov r2, #63
	orr r0, r0, r2
	and r0, r0, r3
	mov r3, r10
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	ldr r1, _0807D264  @ =0x000019BC
	add r2, r6, r1
	add r2, r2, r8
	lsl r1, r0, #1
	ldr r3, _0807D268  @ =gUnknown_02018000
	mov r10, r3
	add r1, r1, r10
	ldrh r0, [r1]
	strh r0, [r2]
	ldr r2, _0807D26C  @ =0x00002122
	add r0, r2, #0
	strh r0, [r1]
	mov r3, r9
	ldrh r0, [r3]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #128
	add r3, r1, #0
	and r3, r3, r7
	lsl r3, r3, #5
	str r3, [sp]
	add r2, r1, #0
	mov r0, r12
	and r2, r2, r0
	asr r2, r2, #1
	add r0, r4, #0
	mov r3, #63
	orr r0, r0, r3
	and r0, r0, r1
	ldr r1, [sp]
	orr r0, r0, r1
	orr r0, r0, r2
	asr r0, r0, #1
	ldr r3, _0807D270  @ =0x000019DC
	add r2, r6, r3
	add r2, r2, r8
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r2, _0807D274  @ =0x00002132
	add r1, r2, #0
	strh r1, [r0]
	mov r3, r9
	ldrh r0, [r3]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #2
	add r3, r1, #0
	and r3, r3, r7
	lsl r3, r3, #5
	str r3, [sp]
	add r2, r1, #0
	mov r0, r12
	and r2, r2, r0
	asr r2, r2, #1
	add r0, r4, #0
	mov r3, #63
	orr r0, r0, r3
	and r0, r0, r1
	ldr r1, [sp]
	orr r0, r0, r1
	orr r0, r0, r2
	asr r0, r0, #1
	ldr r3, _0807D278  @ =0x000019FC
	add r2, r6, r3
	add r2, r2, r8
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r2, _0807D27C  @ =0x00002123
	add r1, r2, #0
	strh r1, [r0]
	mov r3, r9
	ldrh r0, [r3]
	and r5, r5, r0
	add r5, r5, #130
	add r1, r5, #0
	and r1, r1, r7
	lsl r1, r1, #5
	add r0, r5, #0
	mov r2, r12
	and r0, r0, r2
	asr r0, r0, #1
	mov r3, #63
	orr r4, r4, r3
	and r4, r4, r5
	orr r4, r4, r1
	orr r4, r4, r0
	asr r0, r4, #1
	ldr r1, _0807D280  @ =0x00001A1C
	add r6, r6, r1
	add r8, r8, r6
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r0]
	mov r2, r8
	strh r1, [r2]
	ldr r3, _0807D284  @ =0x00002133
	add r1, r3, #0
	strh r1, [r0]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D248:
	.4byte gRam
_0807D24C:
	.4byte 0x00000AD2
_0807D250:
	.4byte 0x0000195C
_0807D254:
	.4byte 0x0000197C
_0807D258:
	.4byte 0x000009F4
_0807D25C:
	.4byte 0x0000199C
_0807D260:
	.4byte 0x00003FFF
_0807D264:
	.4byte 0x000019BC
_0807D268:
	.4byte gUnknown_02018000
_0807D26C:
	.4byte 0x00002122
_0807D270:
	.4byte 0x000019DC
_0807D274:
	.4byte 0x00002132
_0807D278:
	.4byte 0x000019FC
_0807D27C:
	.4byte 0x00002123
_0807D280:
	.4byte 0x00001A1C
_0807D284:
	.4byte 0x00002133
	THUMB_FUNC_END sub_0807D0EC

