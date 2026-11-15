	THUMB_FUNC_START sub_0807D7F0
sub_0807D7F0: @ 0x0807D7F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r5, _0807D834  @ =gRam
	ldr r1, _0807D838  @ =gUnknown_03002D70
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r2, _0807D83C  @ =gUnknown_03002E82
	add r0, r0, r2
	mov r3, #151
	lsl r3, r3, #4
	add r7, r5, r3
	ldrh r1, [r7]
	strh r1, [r0]
	ldr r6, _0807D840  @ =0x00000AA8
	add r2, r5, r6
	ldr r1, _0807D844  @ =gUnknown_081676F2
	ldr r0, _0807D838  @ =gUnknown_03002D70
	ldrh r3, [r0]
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _0807D848
	add r0, r3, #1
	ldr r1, _0807D838  @ =gUnknown_03002D70
	strh r0, [r1]
	b _0807D950
	.byte 0x00
	.byte 0x00
_0807D834:
	.4byte gRam
_0807D838:
	.4byte gUnknown_03002D70
_0807D83C:
	.4byte gUnknown_03002E82
_0807D840:
	.4byte 0x00000AA8
_0807D844:
	.4byte gUnknown_081676F2
_0807D848:
	mov r2, #0
	ldrsh r3, [r7, r2]
	mov r6, #63
	mov r12, r6
	mov r0, #64
	mov r10, r0
	add r2, r3, #0
	and r2, r2, r0
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	mov r8, r1
	add r1, r3, #0
	mov r6, r8
	and r1, r1, r6
	asr r1, r1, #1
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	mov r6, r12
	orr r0, r0, r6
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r1, r0, #1
	ldr r6, _0807D960  @ =gUnknown_02018000
	add r1, r1, r6
	ldr r0, _0807D964  @ =gUnknown_08164520
	mov r9, r0
	ldr r2, _0807D968  @ =0x00000B12
	add r5, r5, r2
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r3, [r7, r0]
	add r3, r3, #128
	add r2, r3, #0
	mov r1, r10
	and r2, r2, r1
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	add r0, r4, #0
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r3, [r7, r0]
	add r3, r3, #2
	add r2, r3, #0
	mov r1, r10
	and r2, r2, r1
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	add r0, r4, #0
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r2, [r7, r0]
	add r2, r2, #130
	add r1, r2, #0
	mov r3, r10
	and r1, r1, r3
	lsl r1, r1, #5
	add r0, r2, #0
	mov r3, r8
	and r0, r0, r3
	asr r0, r0, #1
	mov r3, r12
	orr r4, r4, r3
	and r4, r4, r2
	orr r4, r4, r1
	orr r4, r4, r0
	asr r0, r4, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r6, _0807D96C  @ =gUnknown_03002D70
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r1, _0807D970  @ =gUnknown_03002E82
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
_0807D950:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0807D960:
	.4byte gUnknown_02018000
_0807D964:
	.4byte gUnknown_08164520
_0807D968:
	.4byte 0x00000B12
_0807D96C:
	.4byte gUnknown_03002D70
_0807D970:
	.4byte gUnknown_03002E82
	THUMB_FUNC_END sub_0807D7F0

