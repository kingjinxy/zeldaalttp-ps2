	THUMB_FUNC_START sub_08073C74
sub_08073C74: @ 0x08073C74
	push {r4-r6,lr}
	ldr r6, _08073CBC  @ =gRam
	ldr r0, _08073CC0  @ =0x00000514
	add r1, r6, r0
	mov r2, #0
	ldr r0, _08073CC4  @ =0x0000F441
	strh r0, [r1]
	mov r3, #163
	lsl r3, r3, #3
	add r1, r6, r3
	ldr r0, _08073CC8  @ =0x0000FC43
	strh r0, [r1]
	ldr r1, _08073CCC  @ =0x0000188B
	add r0, r6, r1
	strb r2, [r0]
	ldr r2, _08073CD0  @ =0x00001718
	add r5, r6, r2
	ldrb r4, [r5]
	bl sub_080B175C
	cmp r4, #4
	bne _08073CA2
	strb r4, [r5]
_08073CA2:
	ldr r3, _08073CD4  @ =0x000009AC
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #8
	bne _08073CE0
	bl sub_08076C48
	ldr r0, _08073CD8  @ =0x00000A3C
	add r1, r6, r0
	ldr r0, _08073CDC  @ =0x0000FFFF
	strh r0, [r1]
	b _08073CE4
	.byte 0x00
	.byte 0x00
_08073CBC:
	.4byte gRam
_08073CC0:
	.4byte 0x00000514
_08073CC4:
	.4byte 0x0000F441
_08073CC8:
	.4byte 0x0000FC43
_08073CCC:
	.4byte 0x0000188B
_08073CD0:
	.4byte 0x00001718
_08073CD4:
	.4byte 0x000009AC
_08073CD8:
	.4byte 0x00000A3C
_08073CDC:
	.4byte 0x0000FFFF
_08073CE0:
	bl sub_080783D8
_08073CE4:
	ldr r0, _08073D74  @ =gKeyCount
	mov r1, #255
	strb r1, [r0]
	bl sub_080AA6D8
	mov r6, #88
	mov r5, #7
	ldr r2, _08073D78  @ =gRam
	ldr r1, _08073D7C  @ =0x000009C6
	add r0, r2, r1
	ldrh r1, [r0]
	cmp r1, #3
	beq _08073DF6
	cmp r1, #5
	beq _08073DF6
	cmp r1, #7
	beq _08073DF6
	mov r5, #14
	cmp r1, #67
	beq _08073DF6
	cmp r1, #69
	beq _08073DF6
	cmp r1, #71
	beq _08073DF6
	mov r6, #90
	cmp r1, #63
	bhi _08073DD8
	mov r5, #8
	ldr r3, _08073D80  @ =0x0000165E
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #2
	bls _08073D28
	mov r5, #7
_08073D28:
	cmp r1, #24
	bne _08073D90
	ldr r1, _08073D84  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	cmp r1, #47
	beq _08073D62
	ldr r0, _08073D88  @ =0x00000119
	cmp r1, r0
	beq _08073D62
	cmp r1, #242
	beq _08073D62
	cmp r1, #243
	beq _08073D62
	sub r0, r0, #24
	cmp r1, r0
	beq _08073D62
	add r0, r0, #7
	cmp r1, r0
	beq _08073D62
	sub r0, r0, #6
	cmp r1, r0
	beq _08073D62
	add r0, r0, #1
	cmp r1, r0
	beq _08073D62
	add r0, r0, #4
	cmp r1, r0
	bne _08073D9E
_08073D62:
	bl sub_0812A130
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08073DF6
	ldr r5, _08073D8C  @ =0x0000FFF3
	b _08073DF6
	.byte 0x00
	.byte 0x00
_08073D74:
	.4byte gKeyCount
_08073D78:
	.4byte gRam
_08073D7C:
	.4byte 0x000009C6
_08073D80:
	.4byte 0x0000165E
_08073D84:
	.4byte 0x000009DA
_08073D88:
	.4byte 0x00000119
_08073D8C:
	.4byte 0x0000FFF3
_08073D90:
	ldr r3, _08073E6C  @ =0x000009DA
	add r0, r2, r3
	ldrh r1, [r0]
	ldr r0, _08073E70  @ =0x00000107
	add r3, r2, #0
	cmp r1, r0
	beq _08073DAE
_08073D9E:
	ldr r1, _08073E74  @ =gRam
	ldr r2, _08073E6C  @ =0x000009DA
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r0, _08073E78  @ =0x0000011F
	add r3, r1, #0
	cmp r2, r0
	bne _08073DB8
_08073DAE:
	ldr r1, _08073E7C  @ =0x000009C6
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #24
	beq _08073DF6
_08073DB8:
	mov r5, #11
	ldr r0, _08073E80  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08073DC8
	mov r5, #7
_08073DC8:
	ldr r0, _08073E74  @ =gRam
	ldr r2, _08073E6C  @ =0x000009DA
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08073DF6
	cmp r0, #225
	beq _08073DF6
_08073DD8:
	ldr r5, _08073E84  @ =0x0000FFF3
	ldr r2, _08073E74  @ =gRam
	ldr r3, _08073E88  @ =0x00000A46
	add r0, r2, r3
	ldrh r1, [r0]
	ldr r0, _08073E8C  @ =0x0000FFF2
	cmp r1, r0
	beq _08073E26
	ldr r1, _08073E90  @ =0x0000165E
	add r0, r2, r1
	ldrb r0, [r0]
	mov r5, #3
	cmp r0, #1
	bls _08073DF6
	mov r5, #7
_08073DF6:
	ldr r1, _08073E74  @ =gRam
	ldr r2, _08073E94  @ =0x0000165C
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _08073E26
	mov r5, #15
	ldr r3, _08073E7C  @ =0x000009C6
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #64
	beq _08073E1C
	cmp r0, #67
	beq _08073E1C
	cmp r0, #69
	beq _08073E1C
	cmp r0, #71
	beq _08073E1C
	mov r5, #14
_08073E1C:
	ldr r0, _08073E98  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _08073E26
	mov r5, #12
_08073E26:
	ldr r4, _08073E74  @ =gRam
	ldr r1, _08073E88  @ =0x00000A46
	add r0, r4, r1
	strh r5, [r0]
	add r0, r6, #0
	bl sub_0812FD88
	bl sub_0812E8DC
	bl sub_080774C8
	ldr r2, _08073E7C  @ =0x000009C6
	add r0, r4, r2
	ldrh r0, [r0]
	ldr r3, _08073E9C  @ =gUnknown_02002DC0
	add r1, r0, r3
	ldrb r5, [r1]
	ldr r1, _08073EA0  @ =gUnknown_0814C8E8
	add r0, r0, r1
	ldrb r6, [r0]
	add r0, r5, #0
	add r1, r6, #0
	bl sub_0813084C
	bl sub_08130978
	ldr r0, _08073EA4  @ =0x000009AC
	add r4, r4, r0
	ldrb r0, [r4]
	cmp r0, #8
	bne _08073EA8
	bl sub_080763E4
	b _08073EAC
	.byte 0x00
	.byte 0x00
_08073E6C:
	.4byte 0x000009DA
_08073E70:
	.4byte 0x00000107
_08073E74:
	.4byte gRam
_08073E78:
	.4byte 0x0000011F
_08073E7C:
	.4byte 0x000009C6
_08073E80:
	.4byte gUnknown_02002300
_08073E84:
	.4byte 0x0000FFF3
_08073E88:
	.4byte 0x00000A46
_08073E8C:
	.4byte 0x0000FFF2
_08073E90:
	.4byte 0x0000165E
_08073E94:
	.4byte 0x0000165C
_08073E98:
	.4byte gMoonPearl
_08073E9C:
	.4byte gUnknown_02002DC0
_08073EA0:
	.4byte gUnknown_0814C8E8
_08073EA4:
	.4byte 0x000009AC
_08073EA8:
	bl sub_08076440
_08073EAC:
	bl sub_08130AB4
	ldr r4, _08073F08  @ =gRam
	ldr r2, _08073F0C  @ =0x0000099B
	add r1, r4, r2
	mov r2, #0
	mov r0, #1
	strb r0, [r1]
	ldr r3, _08073F10  @ =0x00000D08
	add r0, r4, r3
	strh r2, [r0]
	bl sub_08114600
	ldr r0, _08073F14  @ =0x000009C6
	add r5, r4, r0
	ldrh r1, [r5]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _08073EDA
	mov r0, #30
	bl sub_0812FBC4
_08073EDA:
	ldr r2, _08073F18  @ =0x00000A1A
	add r1, r4, r2
	mov r0, #9
	strh r0, [r1]
	bl sub_080CBCC8
	ldrh r1, [r5]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08073EF4
	bl sub_080D56A0
_08073EF4:
	ldr r3, _08073F1C  @ =0x0000165E
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08073F24
	ldr r0, _08073F20  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #4
	b _08073F2A
	.byte 0x00
	.byte 0x00
_08073F08:
	.4byte gRam
_08073F0C:
	.4byte 0x0000099B
_08073F10:
	.4byte 0x00000D08
_08073F14:
	.4byte 0x000009C6
_08073F18:
	.4byte 0x00000A1A
_08073F1C:
	.4byte 0x0000165E
_08073F20:
	.4byte 0x00000A3E
_08073F24:
	ldr r2, _08074024  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #255
_08073F2A:
	strb r0, [r1]
	ldr r2, _08074028  @ =gRam
	ldr r3, _0807402C  @ =0x00001663
	add r1, r2, r3
	ldrb r0, [r1]
	cmp r0, #6
	bne _08073F3C
	mov r0, #0
	strb r0, [r1]
_08073F3C:
	ldrb r0, [r1]
	cmp r0, #13
	bne _08073F50
	ldr r3, _08074030  @ =0x0000166A
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08073F50
	mov r0, #0
	strb r0, [r1]
_08073F50:
	ldr r4, _08074028  @ =gRam
	ldr r1, _08074034  @ =0x0000172C
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08074038  @ =0x000016E8
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0807403C  @ =0x000016EA
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #29
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #47
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #220
	add r0, r4, r2
	strb r1, [r0]
	bl sub_0807166C
	ldr r0, _08074040  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _08073FA8
	ldr r3, _08074044  @ =0x0000165C
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _08073FA8
	ldr r1, _08074048  @ =0x0000176C
	add r0, r4, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _0807404C  @ =0x00001711
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #188
	add r1, r4, r3
	mov r0, #23
	strb r0, [r1]
	bl sub_08133678
_08073FA8:
	ldr r4, _08074028  @ =gRam
	ldr r1, _08074050  @ =0x00000CF5
	add r0, r4, r1
	mov r2, #0
	strb r2, [r0]
	mov r3, #163
	lsl r3, r3, #3
	add r1, r4, r3
	mov r3, #0
	ldr r0, _08074054  @ =0x0000FC43
	strh r0, [r1]
	ldr r1, _08074058  @ =0x00000B14
	add r0, r4, r1
	strh r2, [r0]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r4, r1
	strb r3, [r0]
	ldr r3, _0807405C  @ =0x00000B1E
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _08074060  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _08074064  @ =0x000009AE
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08074068  @ =0x00000AA8
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _0807406C  @ =0x000016C4
	add r0, r4, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	sub r2, r2, #4
	add r1, r4, r2
	mov r3, #0
	ldrsh r1, [r1, r3]
	add r1, r1, #16
	bl sub_080691D8
	cmp r0, #8
	bne _0807401E
	ldr r0, _08074070  @ =0x00001718
	add r1, r4, r0
	mov r0, #4
	strb r0, [r1]
	ldr r2, _08074074  @ =0x000017D0
	add r1, r4, r2
	mov r2, #1
	mov r0, #1
	strh r0, [r1]
	ldr r3, _08074078  @ =0x000017D4
	add r0, r4, r3
	strb r2, [r0]
_0807401E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08074024:
	.4byte 0x00000A3E
_08074028:
	.4byte gRam
_0807402C:
	.4byte 0x00001663
_08074030:
	.4byte 0x0000166A
_08074034:
	.4byte 0x0000172C
_08074038:
	.4byte 0x000016E8
_0807403C:
	.4byte 0x000016EA
_08074040:
	.4byte gMoonPearl
_08074044:
	.4byte 0x0000165C
_08074048:
	.4byte 0x0000176C
_0807404C:
	.4byte 0x00001711
_08074050:
	.4byte 0x00000CF5
_08074054:
	.4byte 0x0000FC43
_08074058:
	.4byte 0x00000B14
_0807405C:
	.4byte 0x00000B1E
_08074060:
	.4byte 0x000009AD
_08074064:
	.4byte 0x000009AE
_08074068:
	.4byte 0x00000AA8
_0807406C:
	.4byte 0x000016C4
_08074070:
	.4byte 0x00001718
_08074074:
	.4byte 0x000017D0
_08074078:
	.4byte 0x000017D4
	THUMB_FUNC_END sub_08073C74

