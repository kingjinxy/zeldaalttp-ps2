	THUMB_FUNC_START sub_0807F5FC
sub_0807F5FC: @ 0x0807F5FC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r7, _0807F7F4  @ =gRam
	ldr r1, _0807F7F8  @ =0x00000964
	add r0, r7, r1
	ldrh r0, [r0]
	lsl r2, r0, #16
	asr r0, r2, #16
	cmp r0, #11
	ble _0807F64C
	ldr r3, _0807F7FC  @ =0x00000B08
	add r5, r7, r3
	ldrh r0, [r5]
	str r0, [sp]
	ldrh r1, [r5]
	mov r0, #8
	orr r0, r0, r1
	strh r0, [r5]
	mov r0, #151
	lsl r0, r0, #4
	add r4, r7, r0
	mov r1, #0
	ldrsh r6, [r4, r1]
	ldr r1, _0807F800  @ =gUnknown_081677A8
	asr r0, r2, #17
	add r0, r0, #6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4]
	bl sub_080803CC
	strh r6, [r4]
	mov r0, sp
	ldrh r0, [r0]
	strh r0, [r5]
_0807F64C:
	ldr r2, _0807F7FC  @ =0x00000B08
	add r0, r7, r2
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #2
	mov r1, sp
	bl sub_0807E398
	add r6, r0, #0
	ldr r3, _0807F804  @ =0x000016BE
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807F66A
	b _0807F7E2
_0807F66A:
	mov r4, #24
	cmp r6, #54
	beq _0807F676
	mov r4, #0
	cmp r6, #56
	bne _0807F698
_0807F676:
	ldr r0, _0807F808  @ =0x0000097C
	add r3, r7, r0
	strh r4, [r3]
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807F80C  @ =0x000018B0
	add r0, r7, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #254
	lsl r0, r0, #8
	and r0, r0, r2
	orr r4, r4, r0
	strh r4, [r1]
	mov r0, #0
	ldrsh r6, [r3, r0]
_0807F698:
	ldr r1, _0807F810  @ =gUnknown_08167B1C
	asr r0, r6, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _0807F7F4  @ =gRam
	mov r2, #151
	lsl r2, r2, #4
	add r0, r1, r2
	mov r3, #0
	ldrsh r5, [r0, r3]
	ldr r0, _0807F808  @ =0x0000097C
	add r1, r1, r0
	mov r0, #3
	strh r0, [r1]
	mov r2, #63
	mov r10, r2
	mov r3, #64
	mov r9, r3
	mov r0, #248
	lsl r0, r0, #4
	mov r8, r0
	ldr r2, _0807F814  @ =gUnknown_02018000
	mov r12, r2
	add r6, r1, #0
	ldr r7, _0807F818  @ =gUnknown_0201C000
_0807F6CC:
	add r2, r5, #0
	mov r3, r9
	and r2, r2, r3
	lsl r2, r2, #5
	add r1, r5, #0
	mov r0, r8
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r3, r10
	orr r0, r0, r3
	and r0, r0, r5
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r2, r2, #1
	mov r0, r12
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _0807F704
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807F704:
	add r4, r4, #2
	add r3, r5, #0
	add r3, r3, #128
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
	asr r2, r0, #1
	lsl r2, r2, #1
	mov r0, r12
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _0807F746
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807F746:
	add r4, r4, #2
	mov r2, #128
	lsl r2, r2, #1
	add r3, r5, r2
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
	asr r2, r0, #1
	lsl r2, r2, #1
	mov r0, r12
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _0807F78A
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807F78A:
	add r4, r4, #2
	mov r2, #192
	lsl r2, r2, #1
	add r3, r5, r2
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
	asr r2, r0, #1
	lsl r3, r2, #1
	mov r0, r12
	add r1, r3, r0
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _0807F7CE
	add r1, r3, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807F7CE:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0807F7E0
	b _0807F6CC
_0807F7E0:
	str r2, [sp]
_0807F7E2:
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
_0807F7F4:
	.4byte gRam
_0807F7F8:
	.4byte 0x00000964
_0807F7FC:
	.4byte 0x00000B08
_0807F800:
	.4byte gUnknown_081677A8
_0807F804:
	.4byte 0x000016BE
_0807F808:
	.4byte 0x0000097C
_0807F80C:
	.4byte 0x000018B0
_0807F810:
	.4byte gUnknown_08167B1C
_0807F814:
	.4byte gUnknown_02018000
_0807F818:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_0807F5FC

