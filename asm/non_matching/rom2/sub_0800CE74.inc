	THUMB_FUNC_START sub_0800CE74
sub_0800CE74: @ 0x0800CE74
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #44
	str r0, [sp, #8]
	add r0, r1, #0
	add r1, r2, #0
	add r2, r3, #0
	ldr r3, [sp, #8]
	lsl r3, r3, #16
	str r3, [sp, #12]
	lsr r3, r3, #16
	mov r10, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp, #16]
	lsl r0, r1, #16
	lsr r0, r0, #16
	mov r9, r0
	lsl r0, r2, #16
	lsr r7, r0, #16
	add r1, sp, #4
	ldr r4, _0800D02C  @ =0x0000FFFF
	add r0, r4, #0
	strh r0, [r1]
	ldr r2, _0800D030  @ =0x010001E0
	add r0, r1, #0
	ldr r1, _0800D034  @ =gUnknown_02038000
	bl CpuSet
	lsl r0, r7, #16
	asr r7, r0, #16
	add r4, r7, #0
	sub r4, r4, #64
	mov r2, #255
	and r4, r4, r2
	mov r5, r10
	lsl r5, r5, #16
	asr r0, r5, #16
	str r0, [sp, #24]
	mov r1, r9
	lsl r0, r1, #16
	asr r0, r0, #16
	mov r10, r0
	ldr r1, _0800D038  @ =gUnknown_0813E4CC
	add r0, r4, #0
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	mov r5, r10
	mul r5, r0, r5
	add r0, r5, #0
	asr r0, r0, #8
	ldr r5, [sp, #24]
	add r3, r5, r0
	ldr r5, [sp, #16]
	lsl r0, r5, #16
	asr r0, r0, #16
	mov r12, r0
	lsl r0, r4, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r0, [r0, r4]
	mov r5, r10
	mul r5, r0, r5
	add r0, r5, #0
	asr r0, r0, #8
	add r0, r0, r12
	mov r9, r0
	add r4, r7, #0
	add r4, r4, #104
	and r4, r4, r2
	add r0, r4, #0
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r5, #0
	ldrsh r0, [r0, r5]
	mov r5, r10
	mul r5, r0, r5
	add r0, r5, #0
	asr r0, r0, #8
	ldr r5, [sp, #24]
	add r6, r5, r0
	lsl r0, r4, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r0, [r0, r4]
	mov r5, r10
	mul r5, r0, r5
	add r0, r5, #0
	asr r0, r0, #8
	mov r4, r12
	add r5, r4, r0
	add r4, r7, #0
	sub r4, r4, #232
	and r4, r4, r2
	add r0, r4, #0
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r2, r10
	mul r2, r0, r2
	add r0, r2, #0
	asr r0, r0, #8
	ldr r2, [sp, #24]
	add r7, r2, r0
	lsl r0, r4, #1
	add r0, r0, r1
	mov r4, #0
	ldrsh r0, [r0, r4]
	mov r1, r10
	mul r1, r0, r1
	add r0, r1, #0
	asr r0, r0, #8
	add r0, r0, r12
	str r0, [sp, #20]
	lsl r3, r3, #16
	asr r2, r3, #16
	str r2, [sp, #32]
	mov r3, r9
	lsl r0, r3, #16
	asr r0, r0, #16
	str r0, [sp, #40]
	lsl r6, r6, #16
	mov r10, r6
	mov r4, r10
	asr r4, r4, #16
	mov r10, r4
	lsl r5, r5, #16
	mov r9, r5
	asr r5, r5, #16
	mov r9, r5
	mov r0, #0
	str r0, [sp]
	add r0, r2, #0
	ldr r1, [sp, #40]
	mov r2, r10
	mov r3, r9
	bl sub_0800D0A8
	lsl r0, r7, #16
	asr r0, r0, #16
	mov r8, r0
	ldr r1, [sp, #20]
	lsl r0, r1, #16
	asr r7, r0, #16
	mov r0, #1
	str r0, [sp]
	ldr r0, [sp, #32]
	ldr r1, [sp, #40]
	mov r2, r8
	add r3, r7, #0
	bl sub_0800D0A8
	mov r0, #2
	str r0, [sp]
	mov r0, r10
	mov r1, r9
	mov r2, r8
	add r3, r7, #0
	bl sub_0800D0A8
	ldr r7, _0800D03C  @ =gUnknown_03000204
	ldrb r1, [r7]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	ldr r6, _0800D040  @ =gUnknown_0202A0F0
	add r0, r0, r6
	mov r1, #160
	lsl r1, r1, #1
	bl zero_memory
	ldr r2, _0800D034  @ =gUnknown_02038000
	ldrb r1, [r7]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	add r1, r0, r6
	mov r3, #160
	mov r9, r3
_0800CFEC:
	mov r4, #0
	ldrsh r3, [r2, r4]
	add r2, r2, #2
	mov r5, #0
	ldrsh r6, [r2, r5]
	add r2, r2, #2
	mov r0, #0
	ldrsh r7, [r2, r0]
	add r2, r2, #2
	cmp r3, r6
	ble _0800D008
	add r5, r3, #0
	add r3, r6, #0
	add r6, r5, #0
_0800D008:
	cmp r3, r7
	ble _0800D012
	add r5, r3, #0
	add r3, r7, #0
	add r7, r5, #0
_0800D012:
	cmp r6, r7
	ble _0800D01C
	add r5, r6, #0
	add r6, r7, #0
	add r7, r5, #0
_0800D01C:
	mov r0, #1
	neg r0, r0
	cmp r3, r0
	beq _0800D044
	strb r7, [r1]
	strb r3, [r1, #1]
	b _0800D056
	.byte 0x00
	.byte 0x00
_0800D02C:
	.4byte 0x0000FFFF
_0800D030:
	.4byte 0x010001E0
_0800D034:
	.4byte gUnknown_02038000
_0800D038:
	.4byte gUnknown_0813E4CC
_0800D03C:
	.4byte gUnknown_03000204
_0800D040:
	.4byte gUnknown_0202A0F0
_0800D044:
	cmp r6, r3
	beq _0800D04E
	strb r7, [r1]
	strb r6, [r1, #1]
	b _0800D056
_0800D04E:
	cmp r7, r3
	beq _0800D056
	strb r3, [r1, #1]
	strb r3, [r1]
_0800D056:
	mov r3, #1
	neg r3, r3
	add r9, r9, r3
	add r1, r1, #2
	mov r4, r9
	cmp r4, #0
	bgt _0800CFEC
	ldr r2, _0800D098  @ =gUnknown_030004A0
	ldr r5, _0800D09C  @ =gUnknown_0202A0F0
	ldr r3, _0800D0A0  @ =gUnknown_03000204
	ldrb r1, [r3]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	add r0, r0, r5
	ldrh r0, [r0]
	add r2, r2, #88
	strh r0, [r2]
	ldr r2, _0800D0A4  @ =gUnknown_03000BC0
	ldrb r1, [r3]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	add r0, r0, r5
	str r0, [r2, #4]
	add sp, sp, #44
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0800D098:
	.4byte gUnknown_030004A0
_0800D09C:
	.4byte gUnknown_0202A0F0
_0800D0A0:
	.4byte gUnknown_03000204
_0800D0A4:
	.4byte gUnknown_03000BC0
	THUMB_FUNC_END sub_0800CE74

