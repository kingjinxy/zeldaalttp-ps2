	THUMB_FUNC_START sub_08088CD8
sub_08088CD8: @ 0x08088CD8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r3, _08088D60  @ =gRam
	ldr r0, _08088D64  @ =0x0000096C
	add r1, r3, r0
	mov r2, #0
	mov r0, #128
	lsl r0, r0, #8
	strh r0, [r1]
	ldr r1, _08088D68  @ =0x0000097C
	add r4, r3, r1
	strh r2, [r4]
	ldr r2, _08088D6C  @ =0x00000AFC
	add r0, r3, r2
	ldrh r1, [r0]
	add r0, r1, #3
	ldr r5, _08088D70  @ =0x00000974
	add r2, r3, r5
	strh r0, [r2]
	mov r5, #0
	ldrsh r0, [r2, r5]
	sub r0, r0, #6
	cmp r0, #1
	ble _08088D1E
	sub r1, r1, #3
	ldr r5, _08088D74  @ =0x00000964
	add r0, r3, r5
	strh r1, [r0]
	mov r0, #1
	strh r0, [r4]
	mov r0, #3
	strh r0, [r2]
_08088D1E:
	ldr r0, _08088D78  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r9, r0
	mov r10, r3
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r10
	mov r8, r0
	ldr r7, _08088D7C  @ =gUnknown_02018000
_08088D30:
	mov r1, r9
	lsl r0, r1, #1
	ldr r2, _08088D80  @ =gUnknown_02000402
	add r4, r0, r2
_08088D38:
	mov r5, r8
	ldrh r1, [r5]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08088D8C
	ldr r5, _08088D84  @ =0x00001FFF
	add r0, r5, #0
	and r0, r0, r1
	bl sub_08080380
	ldr r1, _08088D88  @ =0xFFFFA000
	add r0, r0, r1
	strh r0, [r4]
	mov r2, r9
	lsl r6, r2, #1
	b _08088DA0
	.byte 0x00
	.byte 0x00
_08088D60:
	.4byte gRam
_08088D64:
	.4byte 0x0000096C
_08088D68:
	.4byte 0x0000097C
_08088D6C:
	.4byte 0x00000AFC
_08088D70:
	.4byte 0x00000974
_08088D74:
	.4byte 0x00000964
_08088D78:
	.4byte gUnknown_02000400
_08088D7C:
	.4byte gUnknown_02018000
_08088D80:
	.4byte gUnknown_02000402
_08088D84:
	.4byte 0x00001FFF
_08088D88:
	.4byte 0xFFFFA000
_08088D8C:
	mov r5, r8
	mov r1, #0
	ldrsh r0, [r5, r1]
	bl sub_08080380
	ldr r2, _08088E48  @ =0xFFFFC000
	add r0, r0, r2
	strh r0, [r4]
	mov r5, r9
	lsl r6, r5, #1
_08088DA0:
	ldr r0, _08088E4C  @ =0x0000096C
	add r0, r0, r10
	ldrh r0, [r0]
	mov r1, #5
	orr r0, r0, r1
	strh r0, [r4, #2]
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r10
	mov r1, #0
	ldrsh r0, [r5, r1]
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #4]
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #192
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #10]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #128
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #12]
	ldrh r1, [r5]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08088E5C
	ldr r5, _08088E50  @ =0x00001FFF
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #160
	lsl r1, r1, #2
	add r0, r0, r1
	bl sub_08080380
	ldr r2, _08088E54  @ =gUnknown_02000410
	add r1, r6, r2
	ldr r5, _08088E58  @ =0xFFFFA000
	add r0, r0, r5
	b _08088E72
_08088E48:
	.4byte 0xFFFFC000
_08088E4C:
	.4byte 0x0000096C
_08088E50:
	.4byte 0x00001FFF
_08088E54:
	.4byte gUnknown_02000410
_08088E58:
	.4byte 0xFFFFA000
_08088E5C:
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #160
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	ldr r5, _08088F8C  @ =gUnknown_02000410
	add r1, r6, r5
	ldr r2, _08088F90  @ =0xFFFFC000
	add r0, r0, r2
_08088E72:
	strh r0, [r1]
	ldr r5, _08088F94  @ =0x0000096C
	add r5, r5, r10
	ldrh r0, [r5]
	mov r1, #7
	orr r0, r0, r1
	strh r0, [r4, #16]
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r1, #160
	lsl r1, r1, #2
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #18]
	mov r2, r8
	mov r1, #0
	ldrsh r0, [r2, r1]
	mov r2, #192
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #20]
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r1, #224
	lsl r1, r1, #2
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #22]
	mov r2, r8
	mov r1, #0
	ldrsh r0, [r2, r1]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #24]
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r1, #144
	lsl r1, r1, #3
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #26]
	mov r2, r8
	mov r1, #0
	ldrsh r0, [r2, r1]
	mov r2, #160
	lsl r2, r2, #3
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #28]
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r1, #176
	lsl r1, r1, #3
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #30]
	mov r2, r8
	ldrh r0, [r2]
	add r2, r0, #2
	mov r0, r8
	strh r2, [r0]
	add r4, r4, #32
	mov r1, #16
	add r9, r9, r1
	ldr r1, _08088F98  @ =gUnknown_03002BA4
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08088F56
	b _08088D38
_08088F56:
	ldr r3, _08088F9C  @ =0x0000097C
	add r3, r3, r10
	ldrh r1, [r5, #16]
	mov r4, #16
	ldrsh r0, [r5, r4]
	cmp r0, #0
	beq _08088FA8
	sub r0, r1, #1
	strh r0, [r3]
	ldr r0, _08088FA0  @ =0x00000964
	add r0, r0, r10
	mov r5, #0
	ldrsh r0, [r0, r5]
	ldr r1, _08088FA4  @ =gUnknown_081535A4
	asr r0, r0, #1
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r2, r0
	mov r1, r8
	strh r0, [r1]
	mov r0, #3
	ldr r2, _08088F98  @ =gUnknown_03002BA4
	strh r0, [r2]
	b _08088D30
	.byte 0x00
	.byte 0x00
_08088F8C:
	.4byte gUnknown_02000410
_08088F90:
	.4byte 0xFFFFC000
_08088F94:
	.4byte 0x0000096C
_08088F98:
	.4byte gUnknown_03002BA4
_08088F9C:
	.4byte 0x0000097C
_08088FA0:
	.4byte 0x00000964
_08088FA4:
	.4byte gUnknown_081535A4
_08088FA8:
	mov r4, r9
	lsl r0, r4, #1
	ldr r5, _08088FC8  @ =gUnknown_02000402
	add r0, r0, r5
	ldr r2, _08088FCC  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08088FD0  @ =gUnknown_02000400
	strh r4, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08088FC8:
	.4byte gUnknown_02000402
_08088FCC:
	.4byte 0x0000FFFF
_08088FD0:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08088CD8

