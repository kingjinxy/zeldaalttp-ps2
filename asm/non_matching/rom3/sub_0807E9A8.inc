	THUMB_FUNC_START sub_0807E9A8
sub_0807E9A8: @ 0x0807E9A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0807EA84  @ =gUnknown_08167A5C
	asr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _0807EA88  @ =gRam
	mov r2, #151
	lsl r2, r2, #4
	add r0, r1, r2
	mov r7, #0
	ldrsh r3, [r0, r7]
	mov r12, r3
	ldr r0, _0807EA8C  @ =0x0000097C
	add r1, r1, r0
	mov r0, #4
	strh r0, [r1]
	mov r2, #63
	mov r8, r2
	mov r6, #248
	lsl r6, r6, #4
	mov r3, #192
	lsl r3, r3, #6
	mov r9, r3
	ldr r5, _0807EA90  @ =gUnknown_0201A000
	mov r10, r1
_0807E9E4:
	mov r3, r12
	add r3, r3, #128
	add r2, r3, #0
	mov r7, #64
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	mov r7, r8
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r3, #128
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	mov r0, #64
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r3, #192
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	mov r1, #64
	and r2, r2, r1
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r2, #2
	add r12, r12, r2
	mov r3, r10
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807E9E4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807EA84:
	.4byte gUnknown_08167A5C
_0807EA88:
	.4byte gRam
_0807EA8C:
	.4byte 0x0000097C
_0807EA90:
	.4byte gUnknown_0201A000
	THUMB_FUNC_END sub_0807E9A8

