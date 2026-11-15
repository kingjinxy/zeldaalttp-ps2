	THUMB_FUNC_START sub_0807F904
sub_0807F904: @ 0x0807F904
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r5, _0807FABC  @ =gRam
	ldr r1, _0807FAC0  @ =0x00000B08
	add r0, r5, r1
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #3
	mov r1, sp
	bl sub_0807E398
	add r2, r0, #0
	ldr r3, _0807FAC4  @ =0x000016BE
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807F930
	b _0807FAAA
_0807F930:
	mov r4, #0
	cmp r2, #54
	beq _0807F93C
	mov r4, #24
	cmp r2, #56
	bne _0807F95E
_0807F93C:
	ldr r0, _0807FAC8  @ =0x0000097C
	add r3, r5, r0
	strh r4, [r3]
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807FACC  @ =0x000018B0
	add r0, r5, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #254
	lsl r0, r0, #8
	and r0, r0, r2
	orr r4, r4, r0
	strh r4, [r1]
	mov r0, #0
	ldrsh r2, [r3, r0]
_0807F95E:
	ldr r1, _0807FAD0  @ =gUnknown_08167BDC
	asr r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _0807FABC  @ =gRam
	mov r2, #151
	lsl r2, r2, #4
	add r0, r1, r2
	mov r3, #0
	ldrsh r5, [r0, r3]
	add r5, r5, #2
	ldr r0, _0807FAC8  @ =0x0000097C
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
	ldr r2, _0807FAD4  @ =gUnknown_02018000
	mov r12, r2
	add r6, r1, #0
	ldr r7, _0807FAD8  @ =gUnknown_0201C000
_0807F994:
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
	cmp r0, #1
	bne _0807F9CC
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807F9CC:
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
	cmp r0, #1
	bne _0807FA0E
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807FA0E:
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
	cmp r0, #1
	bne _0807FA52
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807FA52:
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
	cmp r0, #1
	bne _0807FA96
	add r1, r3, r7
	ldrh r0, [r4]
	strh r0, [r1]
_0807FA96:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0807FAA8
	b _0807F994
_0807FAA8:
	str r2, [sp]
_0807FAAA:
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
_0807FABC:
	.4byte gRam
_0807FAC0:
	.4byte 0x00000B08
_0807FAC4:
	.4byte 0x000016BE
_0807FAC8:
	.4byte 0x0000097C
_0807FACC:
	.4byte 0x000018B0
_0807FAD0:
	.4byte gUnknown_08167BDC
_0807FAD4:
	.4byte gUnknown_02018000
_0807FAD8:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_0807F904

