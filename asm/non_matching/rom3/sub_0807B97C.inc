	THUMB_FUNC_START sub_0807B97C
sub_0807B97C: @ 0x0807B97C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _0807BA5C  @ =gRam
	mov r8, r2
	ldr r3, _0807BA60  @ =0x000009F8
	add r8, r8, r3
	mov r4, r8
	ldrh r5, [r4]
	add r5, r5, r0
	mov r7, #63
	mov r2, #64
	mov r12, r2
	add r4, r5, #0
	and r4, r4, r2
	lsl r4, r4, #5
	mov r3, #248
	lsl r3, r3, #4
	mov r10, r3
	add r3, r5, #0
	mov r2, r10
	and r3, r3, r2
	asr r3, r3, #1
	mov r6, #192
	lsl r6, r6, #6
	add r2, r6, #0
	orr r2, r2, r7
	and r2, r2, r5
	orr r2, r2, r4
	orr r2, r2, r3
	asr r2, r2, #1
	lsl r2, r2, #1
	ldr r3, _0807BA64  @ =gUnknown_02018000
	mov r9, r3
	add r2, r2, r9
	ldrh r3, [r1]
	strh r3, [r2]
	mov r4, r8
	ldrh r3, [r4]
	add r3, r3, r0
	add r3, r3, #128
	add r5, r3, #0
	mov r2, r12
	and r5, r5, r2
	lsl r5, r5, #5
	add r4, r3, #0
	mov r2, r10
	and r4, r4, r2
	asr r4, r4, #1
	add r2, r6, #0
	orr r2, r2, r7
	and r2, r2, r3
	orr r2, r2, r5
	orr r2, r2, r4
	asr r2, r2, #1
	lsl r2, r2, #1
	add r2, r2, r9
	ldrh r3, [r1, #2]
	strh r3, [r2]
	mov r4, r8
	ldrh r3, [r4]
	add r3, r3, r0
	add r3, r3, #2
	add r5, r3, #0
	mov r2, r12
	and r5, r5, r2
	lsl r5, r5, #5
	add r4, r3, #0
	mov r2, r10
	and r4, r4, r2
	asr r4, r4, #1
	add r2, r6, #0
	orr r2, r2, r7
	and r2, r2, r3
	orr r2, r2, r5
	orr r2, r2, r4
	asr r2, r2, #1
	lsl r2, r2, #1
	add r2, r2, r9
	ldrh r3, [r1, #4]
	strh r3, [r2]
	mov r3, r8
	ldrh r2, [r3]
	add r2, r2, r0
	add r2, r2, #130
	add r3, r2, #0
	mov r4, r12
	and r3, r3, r4
	lsl r3, r3, #5
	add r0, r2, #0
	mov r4, r10
	and r0, r0, r4
	asr r0, r0, #1
	orr r6, r6, r7
	and r6, r6, r2
	orr r6, r6, r3
	orr r6, r6, r0
	asr r2, r6, #1
	lsl r0, r2, #1
	add r0, r0, r9
	ldrh r1, [r1, #6]
	strh r1, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807BA5C:
	.4byte gRam
_0807BA60:
	.4byte 0x000009F8
_0807BA64:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_0807B97C

