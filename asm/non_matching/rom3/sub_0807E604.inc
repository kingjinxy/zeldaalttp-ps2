	THUMB_FUNC_START sub_0807E604
sub_0807E604: @ 0x0807E604
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	str r0, [sp]
	ldr r4, _0807E7A0  @ =gRam
	ldr r0, _0807E7A4  @ =0x000009EA
	add r5, r4, r0
	mov r0, #18
	strh r0, [r5]
	mov r1, #151
	lsl r1, r1, #4
	add r4, r4, r1
	mov r2, #0
	ldrsh r0, [r4, r2]
	mov r1, sp
	bl sub_0807E550
	ldrh r0, [r4]
	add r0, r0, #4
	strh r0, [r4]
	ldr r1, [sp]
	add r0, r1, #0
	add r0, r0, #12
	str r0, [sp]
	ldrh r6, [r1, #12]
	mov r0, #0
	ldrsh r3, [r4, r0]
	mov r12, r3
	mov r1, #63
	mov r10, r1
	mov r2, #64
	mov r9, r2
	mov r3, #248
	lsl r3, r3, #4
	mov r8, r3
	ldr r7, _0807E7A8  @ =gUnknown_02018000
_0807E652:
	mov r2, r12
	mov r4, r9
	and r2, r2, r4
	lsl r2, r2, #5
	mov r1, r12
	mov r0, r8
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r3, r10
	orr r0, r0, r3
	mov r4, r12
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	add r5, r0, #0
	lsl r0, r5, #1
	add r0, r0, r7
	strh r6, [r0]
	mov r3, r12
	add r3, r3, #128
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	mov r4, r8
	and r1, r1, r4
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	add r4, r0, #0
	lsl r0, r4, #1
	add r0, r0, r7
	strh r6, [r0]
	mov r3, #128
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	strh r6, [r0]
	mov r3, #192
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	strh r6, [r0]
	lsl r5, r5, #1
	add r5, r5, r7
	strh r6, [r5]
	lsl r4, r4, #1
	add r4, r4, r7
	strh r6, [r4]
	mov r3, #128
	lsl r3, r3, #2
	add r3, r3, r12
	add r2, r3, #0
	mov r4, r9
	and r2, r2, r4
	lsl r2, r2, #5
	add r1, r3, #0
	mov r0, r8
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	strh r6, [r0]
	mov r3, #160
	lsl r3, r3, #2
	add r3, r3, r12
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	mov r4, r8
	and r1, r1, r4
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	strh r6, [r0]
	mov r0, #2
	add r12, r12, r0
	ldr r1, _0807E7AC  @ =gUnknown_03002C1A
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0807E780
	b _0807E652
_0807E780:
	ldr r0, [sp]
	add r0, r0, #2
	str r0, [sp]
	mov r0, r12
	mov r1, sp
	bl sub_0807E550
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807E7A0:
	.4byte gRam
_0807E7A4:
	.4byte 0x000009EA
_0807E7A8:
	.4byte gUnknown_02018000
_0807E7AC:
	.4byte gUnknown_03002C1A
	THUMB_FUNC_END sub_0807E604

