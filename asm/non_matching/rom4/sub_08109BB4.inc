	THUMB_FUNC_START sub_08109BB4
sub_08109BB4: @ 0x08109BB4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r3, r0, #24
	str r3, [sp, #8]
	ldr r2, _08109BE8  @ =gRam
	ldr r1, _08109BEC  @ =0x00000F92
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08109BF0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r3, #0
	bl sub_080C5ACC
	b _08109FD4
	.byte 0x00
	.byte 0x00
_08109BE8:
	.4byte gRam
_08109BEC:
	.4byte 0x00000F92
_08109BF0:
	ldr r4, _08109F40  @ =0x00000F52
	add r0, r2, r4
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #19
	beq _08109C14
	ldr r7, _08109F44  @ =0x000010E2
	add r0, r2, r7
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08109C14
	ldr r1, _08109F48  @ =0x00000B6D
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08109C14
	b _08109FC8
_08109C14:
	mov r3, #0
	str r3, [sp, #12]
	ldr r4, _08109F4C  @ =0x000009B5
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08109C42
	ldr r7, _08109F40  @ =0x00000F52
	add r0, r2, r7
	ldr r1, [sp, #8]
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #5
	beq _08109C42
	ldr r3, _08109F50  @ =0x000009AC
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #26
	eor r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	str r0, [sp, #12]
_08109C42:
	ldr r0, [sp, #8]
	bl sub_08109FE4
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	ldr r2, [sp, #8]
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08109C5C
	b _08109FD4
_08109C5C:
	ldr r2, _08109F54  @ =gRam
	ldr r4, _08109F58  @ =0x00000F92
	add r0, r2, r4
	ldr r7, [sp, #8]
	add r0, r7, r0
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldr r3, _08109F5C  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r3, #0
	add r1, sp, #4
	mov r0, #5
	strb r0, [r1]
	mov r8, r2
	add r6, r1, #0
_08109C80:
	ldr r4, _08109F60  @ =gUnknown_03002B9C
	ldrb r1, [r4]
	lsl r0, r3, #24
	asr r0, r0, #24
	str r0, [sp, #16]
	add r1, r0, r1
	lsl r1, r1, #24
	lsr r2, r1, #24
	add r4, r2, #0
	ldr r0, _08109F64  @ =gUnknown_0817C5D9
	add r0, r2, r0
	ldrb r5, [r0]
	mov r7, #2
	mov r9, r7
	ldr r0, _08109F68  @ =gUnknown_03002B99
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #4
	ble _08109CAC
	mov r0, #240
	and r5, r5, r0
_08109CAC:
	ldr r0, _08109F6C  @ =gUnknown_0817C4FC
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #96
	bne _08109CBE
	mov r1, #8
	mov r9, r1
_08109CBE:
	ldr r2, _08109F70  @ =gUnknown_03003E74
	mov r10, r2
	ldrb r1, [r6]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _08109F74  @ =gUnknown_0817C364
	add r1, r4, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _08109F78  @ =gUnknown_0817C430
	add r2, r4, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldr r4, _08109F7C  @ =gUnknown_03002B94
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r3]
	ldr r7, _08109F68  @ =gUnknown_03002B99
	mov r4, #0
	ldrsb r4, [r7, r4]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, r9
	str r4, [sp]
	bl sub_080C6368
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r0, [sp, #16]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	asr r0, r0, #24
	cmp r0, #12
	bne _08109C80
	add r2, sp, #4
	ldr r1, _08109F80  @ =gUnknown_0817C5C8
	mov r3, r8
	ldr r7, _08109F58  @ =0x00000F92
	add r0, r3, r7
	ldr r4, [sp, #8]
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	cmp r0, #15
	beq _08109E22
	add r1, r2, #0
	add r0, r0, #5
	strb r0, [r1]
	add r7, r7, #240
	add r0, r3, r7
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r7, r0, #24
	ldr r1, _08109F84  @ =0x00000FB2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08109D64
	add r0, r7, #6
	lsl r0, r0, #24
	lsr r7, r0, #24
_08109D64:
	mov r2, r10
	ldrh r3, [r2]
	add r0, sp, #4
	ldrb r0, [r0]
	add r3, r3, r0
	lsl r3, r3, #3
	ldr r4, _08109F60  @ =gUnknown_03002B9C
	ldr r1, _08109F88  @ =0xFFFFFBE4
	add r0, r4, r1
	add r3, r3, r0
	ldrh r4, [r3, #4]
	lsl r0, r4, #22
	lsr r0, r0, #22
	mov r2, #128
	lsl r2, r2, #1
	mov r9, r2
	mov r1, r9
	and r1, r1, r0
	ldr r0, _08109F8C  @ =gUnknown_0817C6B8
	mov r12, r0
	add r0, r7, r0
	ldrb r2, [r0]
	orr r2, r2, r1
	ldr r6, _08109F90  @ =0xFFFFFC00
	add r0, r6, #0
	and r0, r0, r4
	orr r0, r0, r2
	strh r0, [r3, #4]
	ldr r1, _08109F94  @ =gUnknown_0817C6C4
	mov r10, r1
	add r0, r7, r1
	ldrb r2, [r0]
	lsl r2, r2, #24
	lsr r1, r2, #30
	mov r4, #1
	mov r8, r4
	mov r0, r8
	and r1, r1, r0
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r5, [r3, #3]
	mov r4, #17
	neg r4, r4
	add r0, r4, #0
	and r0, r0, r5
	orr r0, r0, r1
	lsr r2, r2, #31
	mov r1, r8
	and r2, r2, r1
	and r2, r2, r1
	lsl r2, r2, #5
	mov r5, #33
	neg r5, r5
	and r0, r0, r5
	orr r0, r0, r2
	strb r0, [r3, #3]
	add r3, r3, #8
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldrh r1, [r3, #4]
	lsl r0, r1, #22
	lsr r0, r0, #22
	mov r2, r9
	and r2, r2, r0
	mov r9, r2
	add r12, r12, r7
	mov r2, r12
	ldrb r0, [r2]
	mov r2, r9
	orr r0, r0, r2
	and r6, r6, r1
	orr r6, r6, r0
	strh r6, [r3, #4]
	add r10, r10, r7
	mov r7, r10
	ldrb r1, [r7]
	lsl r1, r1, #24
	lsr r0, r1, #30
	mov r2, r8
	and r0, r0, r2
	and r0, r0, r2
	lsl r0, r0, #4
	ldrb r2, [r3, #3]
	and r4, r4, r2
	orr r4, r4, r0
	lsr r1, r1, #31
	mov r7, r8
	and r1, r1, r7
	mov r0, r8
	and r1, r1, r0
	lsl r1, r1, #5
	and r4, r4, r5
	orr r4, r4, r1
	strb r4, [r3, #3]
_08109E22:
	ldr r6, _08109F54  @ =gRam
	ldr r1, _08109F98  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08109E42
	ldr r4, _08109F70  @ =gUnknown_03003E74
	ldrh r5, [r4]
	add r0, r5, #5
	strh r0, [r4]
	ldr r0, [sp, #8]
	mov r1, #255
	mov r2, #4
	bl sub_080C6350
	strh r5, [r4]
_08109E42:
	add r2, r6, #0
	ldr r3, [sp, #12]
	cmp r3, #0
	beq _08109E72
	mov r3, #0
	mov r8, r2
	ldr r7, _08109F70  @ =gUnknown_03003E74
	ldr r5, _08109F9C  @ =0x00000555
	mov r6, #15
	mov r4, #160
_08109E56:
	ldrh r0, [r7]
	add r0, r0, r3
	add r0, r0, #5
	lsl r0, r0, #3
	add r0, r0, r8
	add r0, r0, r5
	ldrb r2, [r0]
	add r1, r6, #0
	and r1, r1, r2
	orr r1, r1, r4
	strb r1, [r0]
	add r3, r3, #1
	cmp r3, #11
	ble _08109E56
_08109E72:
	ldr r5, _08109F54  @ =gRam
	ldr r4, _08109FA0  @ =0x000010A2
	add r0, r5, r4
	ldr r7, [sp, #8]
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _08109EBE
	ldr r4, _08109F70  @ =gUnknown_03003E74
	mov r0, #10
	strh r0, [r4]
	ldr r1, _08109FA4  @ =gUnknown_0817C6A8
	add r0, r7, #0
	mov r2, #2
	bl sub_080C9480
	ldr r0, [sp, #12]
	cmp r0, #0
	beq _08109EBE
	mov r3, #0
	mov r8, r5
	add r7, r4, #0
	ldr r5, _08109F9C  @ =0x00000555
	mov r6, #15
	mov r4, #160
_08109EA4:
	ldrh r0, [r7]
	add r0, r0, r3
	lsl r0, r0, #3
	add r0, r0, r8
	add r0, r0, r5
	ldrb r2, [r0]
	add r1, r6, #0
	and r1, r1, r2
	orr r1, r1, r4
	strb r1, [r0]
	add r3, r3, #1
	cmp r3, #1
	ble _08109EA4
_08109EBE:
	ldr r4, _08109F54  @ =gRam
	ldr r1, _08109FA8  @ =0x00001142
	add r0, r4, r1
	ldr r2, [sp, #8]
	add r0, r2, r0
	ldrb r0, [r0]
	sub r7, r0, #1
	ldr r3, _08109FAC  @ =0x0000097C
	add r5, r4, r3
	strh r7, [r5]
	ldr r0, _08109FB0  @ =0x0000097D
	add r0, r0, r4
	mov r8, r0
	ldrb r1, [r0]
	lsr r1, r1, #3
	cmp r1, #3
	bls _08109EE2
	mov r1, #4
_08109EE2:
	ldr r0, _08109FB4  @ =gUnknown_08172800
	add r0, r1, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r6, r4, r1
	strh r0, [r6]
	ldr r3, _08109FB8  @ =0x00001624
	add r2, r4, r3
	ldrb r1, [r2]
	ldr r0, _08109FBC  @ =0x00001625
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r7, r1
	strh r1, [r5]
	ldrb r0, [r5]
	strb r0, [r2]
	mov r1, r8
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r1, _08109F70  @ =gUnknown_03003E74
	mov r0, #125
	strh r0, [r1]
	ldr r2, _08109FC0  @ =0x00001122
	add r4, r4, r2
	ldr r3, [sp, #8]
	add r4, r3, r4
	ldrb r5, [r4]
	mov r0, #0
	strb r0, [r4]
	mov r7, #0
	ldrsh r1, [r6, r7]
	lsl r1, r1, #3
	ldr r0, _08109FC4  @ =gUnknown_08172788
	add r1, r1, r0
	add r0, r3, #0
	mov r2, #3
	bl sub_080C9480
	strb r5, [r4]
	ldr r0, [sp, #8]
	bl sub_080C1F70
	b _08109FD4
	.byte 0x00
	.byte 0x00
_08109F40:
	.4byte 0x00000F52
_08109F44:
	.4byte 0x000010E2
_08109F48:
	.4byte 0x00000B6D
_08109F4C:
	.4byte 0x000009B5
_08109F50:
	.4byte 0x000009AC
_08109F54:
	.4byte gRam
_08109F58:
	.4byte 0x00000F92
_08109F5C:
	.4byte 0x0000096C
_08109F60:
	.4byte gUnknown_03002B9C
_08109F64:
	.4byte gUnknown_0817C5D9
_08109F68:
	.4byte gUnknown_03002B99
_08109F6C:
	.4byte gUnknown_0817C4FC
_08109F70:
	.4byte gUnknown_03003E74
_08109F74:
	.4byte gUnknown_0817C364
_08109F78:
	.4byte gUnknown_0817C430
_08109F7C:
	.4byte gUnknown_03002B94
_08109F80:
	.4byte gUnknown_0817C5C8
_08109F84:
	.4byte 0x00000FB2
_08109F88:
	.4byte 0xFFFFFBE4
_08109F8C:
	.4byte gUnknown_0817C6B8
_08109F90:
	.4byte 0xFFFFFC00
_08109F94:
	.4byte gUnknown_0817C6C4
_08109F98:
	.4byte 0x000009AD
_08109F9C:
	.4byte 0x00000555
_08109FA0:
	.4byte 0x000010A2
_08109FA4:
	.4byte gUnknown_0817C6A8
_08109FA8:
	.4byte 0x00001142
_08109FAC:
	.4byte 0x0000097C
_08109FB0:
	.4byte 0x0000097D
_08109FB4:
	.4byte gUnknown_08172800
_08109FB8:
	.4byte 0x00001624
_08109FBC:
	.4byte 0x00001625
_08109FC0:
	.4byte 0x00001122
_08109FC4:
	.4byte gUnknown_08172788
_08109FC8:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	ldr r2, [sp, #8]
	bl sub_080C5ACC
_08109FD4:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08109BB4

