	THUMB_FUNC_START sub_0807ECA8
sub_0807ECA8: @ 0x0807ECA8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r4, _0807EE08  @ =gRam
	ldr r1, _0807EE0C  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #0
	mov r1, sp
	bl sub_0807E398
	add r2, r0, #0
	ldr r3, _0807EE10  @ =0x000016BE
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807ECD4
	b _0807EDF6
_0807ECD4:
	ldr r0, _0807EE14  @ =0x0000097C
	add r3, r4, r0
	mov r0, #24
	strh r0, [r3]
	cmp r2, #54
	beq _0807ECE8
	mov r0, #0
	strh r0, [r3]
	cmp r2, #56
	bne _0807ED06
_0807ECE8:
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EE18  @ =0x000018B0
	add r0, r4, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	ldrh r2, [r3]
	orr r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r2, [r3, r0]
_0807ED06:
	ldr r1, _0807EE1C  @ =gUnknown_0816798C
	asr r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _0807EE08  @ =gRam
	mov r2, #151
	lsl r2, r2, #4
	add r0, r1, r2
	mov r3, #0
	ldrsh r5, [r0, r3]
	ldr r0, _0807EE14  @ =0x0000097C
	add r1, r1, r0
	mov r0, #4
	strh r0, [r1]
	mov r2, #63
	mov r12, r2
	mov r7, #64
	mov r6, #248
	lsl r6, r6, #4
	mov r3, #192
	lsl r3, r3, #6
	mov r8, r3
	ldr r0, _0807EE20  @ =gUnknown_02018000
	mov r9, r0
	mov r10, r1
_0807ED3A:
	add r2, r5, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r5, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r3, r12
	orr r0, r0, r3
	and r0, r0, r5
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r9
	ldrh r1, [r4]
	strh r1, [r0]
	ldr r3, _0807EE24  @ =0x00001FFF
	and r3, r3, r5
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r1, _0807EE28  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r3, r5, #0
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r9
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r0, #128
	lsl r0, r0, #1
	add r3, r5, r0
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r9
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #2
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807ED3A
	str r2, [sp]
_0807EDF6:
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
_0807EE08:
	.4byte gRam
_0807EE0C:
	.4byte 0x00000B08
_0807EE10:
	.4byte 0x000016BE
_0807EE14:
	.4byte 0x0000097C
_0807EE18:
	.4byte 0x000018B0
_0807EE1C:
	.4byte gUnknown_0816798C
_0807EE20:
	.4byte gUnknown_02018000
_0807EE24:
	.4byte 0x00001FFF
_0807EE28:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_0807ECA8

