	THUMB_FUNC_START sub_0807BC4C
sub_0807BC4C: @ 0x0807BC4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r4, r0, #0
	add r5, r1, #0
	ldr r0, _0807BD40  @ =gRam
	ldr r1, _0807BD44  @ =0x0000097C
	add r0, r0, r1
	strh r2, [r0]
	mov r2, #63
	mov r8, r2
	mov r3, #64
	mov r12, r3
	mov r7, #248
	lsl r7, r7, #4
	mov r1, #192
	lsl r1, r1, #6
	mov r9, r1
	ldr r6, _0807BD48  @ =gUnknown_02018000
	mov r10, r0
_0807BC7A:
	add r2, r4, #0
	mov r3, r12
	and r2, r2, r3
	lsl r2, r2, #5
	add r1, r4, #0
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r3, r8
	orr r0, r0, r3
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5]
	strh r1, [r0]
	add r3, r4, #2
	add r2, r3, #0
	mov r0, r12
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r2, r8
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #2]
	strh r1, [r0]
	add r3, r4, #4
	add r2, r3, #0
	mov r0, r12
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r2, r8
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #4]
	strh r1, [r0]
	add r3, r4, #6
	add r2, r3, #0
	mov r0, r12
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r2, r8
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #6]
	strh r1, [r0]
	add r5, r5, #8
	add r4, r4, #128
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807BC7A
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
_0807BD40:
	.4byte gRam
_0807BD44:
	.4byte 0x0000097C
_0807BD48:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_0807BC4C

