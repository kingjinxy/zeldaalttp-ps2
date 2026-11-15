	THUMB_FUNC_START sub_0807EE94
sub_0807EE94: @ 0x0807EE94
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r2, _0807EED4  @ =gRam
	ldr r1, _0807EED8  @ =0x00000964
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r4, r0, #17
	str r4, [sp, #8]
	ldr r1, _0807EEDC  @ =gUnknown_08167778
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r5, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r6, r2, r3
	strh r5, [r6]
	ldr r7, _0807EEE0  @ =0x00000968
	add r0, r2, r7
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #48
	bne _0807EEE4
	add r0, r4, #0
	bl sub_0807E7B0
	b _0807F2E8
	.byte 0x00
	.byte 0x00
_0807EED4:
	.4byte gRam
_0807EED8:
	.4byte 0x00000964
_0807EEDC:
	.4byte gUnknown_08167778
_0807EEE0:
	.4byte 0x00000968
_0807EEE4:
	cmp r0, #22
	bne _0807EF10
	add r0, r5, #0
	sub r0, r0, #254
	strh r0, [r6]
	mov r3, #0
	ldrsh r2, [r6, r3]
	ldr r4, _0807EF04  @ =gRam
	ldr r5, _0807EF08  @ =0x00000AF4
	add r3, r4, r5
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r7, _0807EF0C  @ =0x00000C32
	add r1, r4, r7
	b _0807EF8A
	.byte 0x00
	.byte 0x00
_0807EF04:
	.4byte gRam
_0807EF08:
	.4byte 0x00000AF4
_0807EF0C:
	.4byte 0x00000C32
_0807EF10:
	cmp r0, #50
	bne _0807EF5C
	ldr r1, _0807EF4C  @ =gRam
	ldr r2, _0807EF50  @ =0x00000B08
	add r0, r1, r2
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #0
	mov r1, sp
	bl sub_0807E398
	add r2, r0, #0
	ldr r3, _0807EF4C  @ =gRam
	ldr r4, _0807EF54  @ =0x000016BE
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #1
	beq _0807EF36
	b _0807F2E8
_0807EF36:
	ldr r1, _0807EF58  @ =gUnknown_0816798C
	asr r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r5, #0
	ldrsh r0, [r6, r5]
	mov r2, #4
	bl sub_0807BA68
	b _0807F2E8
_0807EF4C:
	.4byte gRam
_0807EF50:
	.4byte 0x00000B08
_0807EF54:
	.4byte 0x000016BE
_0807EF58:
	.4byte gUnknown_0816798C
_0807EF5C:
	cmp r0, #6
	bne _0807EF6C
	str r4, [sp, #4]
	add r1, sp, #4
	mov r0, #0
	bl sub_0807E398
	b _0807F2E8
_0807EF6C:
	cmp r0, #20
	bne _0807EFA4
	add r0, r5, #0
	sub r0, r0, #254
	strh r0, [r6]
	mov r7, #0
	ldrsh r2, [r6, r7]
	ldr r0, _0807EF98  @ =gRam
	ldr r1, _0807EF9C  @ =0x00000AF6
	add r3, r0, r1
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r4, _0807EF98  @ =gRam
	ldr r5, _0807EFA0  @ =0x00000C42
	add r1, r4, r5
_0807EF8A:
	add r0, r0, r1
	asr r2, r2, #1
	strh r2, [r0]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	b _0807F2E8
_0807EF98:
	.4byte gRam
_0807EF9C:
	.4byte 0x00000AF6
_0807EFA0:
	.4byte 0x00000C42
_0807EFA4:
	cmp r0, #2
	bne _0807EFAE
	bl sub_0807EE2C
	b _0807F2E8
_0807EFAE:
	cmp r0, #18
	bne _0807EFD8
	ldr r7, _0807EFCC  @ =gRam
	ldr r0, _0807EFD0  @ =0x00001932
	add r2, r7, r0
	ldrh r0, [r2]
	lsl r0, r0, #1
	ldr r3, _0807EFD4  @ =0x00001934
	add r1, r7, r3
	add r0, r0, r1
	strh r5, [r0]
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	b _0807F2E8
_0807EFCC:
	.4byte gRam
_0807EFD0:
	.4byte 0x00001932
_0807EFD4:
	.4byte 0x00001934
_0807EFD8:
	cmp r0, #8
	bne _0807F00C
	bl sub_0807EE2C
	ldr r4, _0807F000  @ =gRam
	ldr r5, _0807F004  @ =0x00000B08
	add r0, r4, r5
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #1
	ldr r7, _0807F008  @ =0x000018D0
	add r1, r4, r7
	add r0, r0, r1
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #6
	add r2, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0807F2E8
_0807F000:
	.4byte gRam
_0807F004:
	.4byte 0x00000B08
_0807F008:
	.4byte 0x000018D0
_0807F00C:
	cmp r0, #32
	beq _0807F01E
	cmp r0, #34
	beq _0807F01E
	cmp r0, #36
	beq _0807F01E
	cmp r0, #38
	beq _0807F01E
	b _0807F2DA
_0807F01E:
	ldr r4, _0807F19C  @ =gRam
	ldr r5, _0807F1A0  @ =0x00000B08
	add r4, r4, r5
	mov r8, r4
	ldrh r2, [r4]
	str r2, [sp, #8]
	lsl r3, r2, #1
	ldr r7, _0807F19C  @ =gRam
	ldr r1, _0807F1A4  @ =0x000018F0
	add r0, r7, r1
	add r0, r3, r0
	mov r1, #0
	strh r1, [r0]
	ldr r4, _0807F1A8  @ =0x000018D0
	add r0, r7, r4
	add r0, r3, r0
	mov r5, #151
	lsl r5, r5, #4
	add r6, r7, r5
	ldrh r1, [r6]
	strh r1, [r0]
	asr r4, r2, #1
	lsr r1, r4, #8
	mov r0, #255
	and r4, r4, r0
	lsl r0, r4, #8
	orr r1, r1, r0
	ldr r0, _0807F1AC  @ =0x00000968
	add r4, r7, r0
	mov r5, #0
	ldrsh r0, [r4, r5]
	orr r1, r1, r0
	ldr r5, _0807F1B0  @ =0x000018B0
	add r0, r7, r5
	add r3, r3, r0
	strh r1, [r3]
	ldr r0, _0807F1B4  @ =0x00000BFE
	add r3, r7, r0
	ldr r1, _0807F1B8  @ =gUnknown_081676B2
	mov r0, #15
	and r2, r2, r0
	lsl r2, r2, #1
	add r2, r2, r1
	ldrh r1, [r3]
	ldrh r0, [r2]
	and r0, r0, r1
	cmp r0, #0
	bne _0807F080
	b _0807F1D8
_0807F080:
	ldr r1, _0807F1BC  @ =gUnknown_081677FC
	ldrh r3, [r4]
	lsl r3, r3, #16
	asr r0, r3, #17
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r2, [r0]
	ldr r4, _0807F1C0  @ =0x00000974
	add r1, r7, r4
	strh r2, [r1]
	mov r5, #0
	ldrsh r0, [r0, r5]
	ldr r1, _0807F1C4  @ =gUnknown_0816798C
	asr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r5, [r0]
	mov r7, #0
	ldrsh r4, [r6, r7]
	asr r3, r3, #16
	cmp r3, #35
	ble _0807F0B2
	mov r0, #128
	lsl r0, r0, #6
	orr r4, r4, r0
_0807F0B2:
	ldr r0, _0807F19C  @ =gRam
	ldr r2, _0807F1C8  @ =0x0000097C
	add r1, r0, r2
	mov r0, #4
	strh r0, [r1]
	mov r3, #63
	mov r12, r3
	mov r7, #64
	mov r6, #248
	lsl r6, r6, #4
	mov r0, #192
	lsl r0, r0, #6
	mov r8, r0
	ldr r2, _0807F1CC  @ =gUnknown_02018000
	mov r9, r2
	mov r10, r1
_0807F0D2:
	add r2, r4, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r4, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r3, r12
	orr r0, r0, r3
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r3, _0807F1D0  @ =0x00001FFF
	and r3, r3, r4
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #12]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #12]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _0807F1D4  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r3, r4, #0
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #12]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #12]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r0, #128
	lsl r0, r0, #1
	add r3, r4, r0
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	str r2, [sp, #12]
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r8
	mov r2, r12
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #12]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	str r0, [sp, #8]
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r4, r4, #2
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807F0D2
	ldr r2, _0807F19C  @ =gRam
	ldr r3, _0807F1A0  @ =0x00000B08
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _0807F2E8
_0807F19C:
	.4byte gRam
_0807F1A0:
	.4byte 0x00000B08
_0807F1A4:
	.4byte 0x000018F0
_0807F1A8:
	.4byte 0x000018D0
_0807F1AC:
	.4byte 0x00000968
_0807F1B0:
	.4byte 0x000018B0
_0807F1B4:
	.4byte 0x00000BFE
_0807F1B8:
	.4byte gUnknown_081676B2
_0807F1BC:
	.4byte gUnknown_081677FC
_0807F1C0:
	.4byte 0x00000974
_0807F1C4:
	.4byte gUnknown_0816798C
_0807F1C8:
	.4byte 0x0000097C
_0807F1CC:
	.4byte gUnknown_02018000
_0807F1D0:
	.4byte 0x00001FFF
_0807F1D4:
	.4byte gUnknown_0201C000
_0807F1D8:
	mov r5, #0
	ldrsh r0, [r4, r5]
	cmp r0, #35
	ble _0807F2D4
	mov r7, r8
	ldrh r0, [r7]
	str r0, [sp, #8]
	add r1, sp, #8
	mov r0, #0
	bl sub_0807E398
	ldr r1, _0807F2BC  @ =gUnknown_0816798C
	asr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r5, [r0]
	mov r0, #0
	ldrsh r4, [r6, r0]
	ldr r2, _0807F2C0  @ =gRam
	ldr r3, _0807F2C4  @ =0x0000097C
	add r1, r2, r3
	mov r0, #4
	strh r0, [r1]
	mov r7, #63
	mov r8, r7
	mov r6, #248
	lsl r6, r6, #4
	mov r0, #192
	lsl r0, r0, #6
	mov r12, r0
	ldr r2, _0807F2C8  @ =gUnknown_0201A000
	mov r10, r2
	mov r9, r1
_0807F21A:
	add r2, r4, #0
	mov r3, #64
	and r2, r2, r3
	lsl r2, r2, #5
	add r1, r4, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r12
	mov r7, r8
	orr r0, r0, r7
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r3, r4, #0
	add r3, r3, #128
	add r2, r3, #0
	mov r0, #64
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r12
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r1, [r5]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r3, r4, r1
	add r2, r3, #0
	mov r7, #64
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r6
	asr r1, r1, #1
	mov r0, r12
	mov r7, r8
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	str r0, [sp, #8]
	add r5, r5, #4
	add r4, r4, #2
	mov r1, r9
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807F21A
	ldr r2, _0807F2C0  @ =gRam
	ldr r3, _0807F2CC  @ =0x00000B08
	add r0, r2, r3
	ldrh r1, [r0]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r4, _0807F2D0  @ =0x000018D0
	add r0, r2, r4
	add r1, r1, r0
	ldrh r2, [r1]
	mov r5, #128
	lsl r5, r5, #6
	add r0, r5, #0
	orr r0, r0, r2
	strh r0, [r1]
	b _0807F2E8
_0807F2BC:
	.4byte gUnknown_0816798C
_0807F2C0:
	.4byte gRam
_0807F2C4:
	.4byte 0x0000097C
_0807F2C8:
	.4byte gUnknown_0201A000
_0807F2CC:
	.4byte 0x00000B08
_0807F2D0:
	.4byte 0x000018D0
_0807F2D4:
	bl sub_0807ECA8
	b _0807F2E8
_0807F2DA:
	cmp r0, #63
	ble _0807F2E4
	bl sub_0807E8C0
	b _0807F2E8
_0807F2E4:
	bl sub_0807EE2C
_0807F2E8:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807EE94

