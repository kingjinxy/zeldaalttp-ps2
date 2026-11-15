	THUMB_FUNC_START sub_0807D2EC
sub_0807D2EC: @ 0x0807D2EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r6, _0807D3D4  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r6, r6, r0
	ldrh r0, [r6]
	ldr r5, _0807D3D8  @ =0x00003FFF
	add r3, r5, #0
	and r3, r3, r0
	mov r7, #63
	mov r2, #64
	mov r12, r2
	add r2, r3, #0
	mov r0, r12
	and r2, r2, r0
	lsl r2, r2, #5
	mov r0, #248
	lsl r0, r0, #4
	mov r10, r0
	add r1, r3, #0
	and r1, r1, r0
	asr r1, r1, #1
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r1, r0, #1
	ldr r2, _0807D3DC  @ =gUnknown_02018000
	mov r9, r2
	add r1, r1, r9
	ldr r0, _0807D3E0  @ =gUnknown_081659C4
	mov r8, r0
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r6]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #128
	add r3, r1, #0
	mov r2, r12
	and r3, r3, r2
	lsl r3, r3, #5
	add r2, r1, #0
	mov r0, r10
	and r2, r2, r0
	asr r2, r2, #1
	add r0, r4, #0
	orr r0, r0, r7
	and r0, r0, r1
	orr r0, r0, r3
	orr r0, r0, r2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	mov r2, r8
	ldrh r1, [r2, #2]
	strh r1, [r0]
	ldrh r0, [r6]
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, #2
	add r3, r1, #0
	mov r0, r12
	and r3, r3, r0
	lsl r3, r3, #5
	add r2, r1, #0
	mov r0, r10
	and r2, r2, r0
	asr r2, r2, #1
	add r0, r4, #0
	orr r0, r0, r7
	and r0, r0, r1
	orr r0, r0, r3
	orr r0, r0, r2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	mov r2, r8
	ldrh r1, [r2, #4]
	strh r1, [r0]
	ldrh r0, [r6]
	and r5, r5, r0
	add r5, r5, #130
	add r1, r5, #0
	mov r0, r12
	and r1, r1, r0
	lsl r1, r1, #5
	add r0, r5, #0
	mov r2, r10
	and r0, r0, r2
	asr r0, r0, #1
	orr r4, r4, r7
	and r4, r4, r5
	orr r4, r4, r1
	orr r4, r4, r0
	asr r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r9
	mov r2, r8
	ldrh r1, [r2, #6]
	strh r1, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0807D3D4:
	.4byte gRam
_0807D3D8:
	.4byte 0x00003FFF
_0807D3DC:
	.4byte gUnknown_02018000
_0807D3E0:
	.4byte gUnknown_081659C4
	THUMB_FUNC_END sub_0807D2EC

