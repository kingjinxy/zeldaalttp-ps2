	THUMB_FUNC_START sub_0807F2F8
sub_0807F2F8: @ 0x0807F2F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r4, _0807F458  @ =gRam
	ldr r1, _0807F45C  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #1
	mov r1, sp
	bl sub_0807E398
	add r2, r0, #0
	ldr r3, _0807F460  @ =0x000016BE
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807F324
	b _0807F448
_0807F324:
	ldr r0, _0807F464  @ =0x0000097C
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	cmp r2, #30
	beq _0807F33C
	cmp r2, #54
	beq _0807F33C
	mov r0, #24
	strh r0, [r1]
	cmp r2, #56
	bne _0807F360
_0807F33C:
	ldr r4, _0807F458  @ =gRam
	ldr r0, [sp]
	sub r0, r0, #1
	lsl r0, r0, #1
	ldr r2, _0807F468  @ =0x000018B0
	add r1, r4, r2
	add r0, r0, r1
	ldrh r2, [r0]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	ldr r2, _0807F464  @ =0x0000097C
	add r3, r4, r2
	ldrh r2, [r3]
	orr r1, r1, r2
	strh r1, [r0]
	mov r0, #0
	ldrsh r2, [r3, r0]
_0807F360:
	ldr r1, _0807F46C  @ =gUnknown_08167A5C
	asr r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r5, [r0]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	mov r3, #0
	ldrsh r2, [r0, r3]
	mov r12, r2
	ldr r0, _0807F464  @ =0x0000097C
	add r1, r4, r0
	mov r0, #4
	strh r0, [r1]
	mov r2, #63
	mov r8, r2
	mov r7, #64
	mov r6, #248
	lsl r6, r6, #4
	mov r3, #192
	lsl r3, r3, #6
	mov r9, r3
	ldr r4, _0807F470  @ =gUnknown_02018000
	mov r10, r4
_0807F392:
	mov r3, r12
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	mov r4, r8
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r10
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r3, #128
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r10
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r4, #192
	lsl r4, r4, #1
	add r4, r4, r12
	add r2, r4, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r4, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	mov r3, r8
	orr r0, r0, r3
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r10
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r3, _0807F474  @ =0x00001FFF
	and r3, r3, r4
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r9
	mov r4, r8
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r1, _0807F478  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r3, #2
	add r12, r12, r3
	ldr r4, _0807F47C  @ =gUnknown_03002BAC
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807F392
	str r2, [sp]
_0807F448:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0807F458:
	.4byte gRam
_0807F45C:
	.4byte 0x00000B08
_0807F460:
	.4byte 0x000016BE
_0807F464:
	.4byte 0x0000097C
_0807F468:
	.4byte 0x000018B0
_0807F46C:
	.4byte gUnknown_08167A5C
_0807F470:
	.4byte gUnknown_02018000
_0807F474:
	.4byte 0x00001FFF
_0807F478:
	.4byte gUnknown_0201C000
_0807F47C:
	.4byte gUnknown_03002BAC
	THUMB_FUNC_END sub_0807F2F8

