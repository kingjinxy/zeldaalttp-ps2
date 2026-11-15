	THUMB_FUNC_START sub_08084D84
sub_08084D84: @ 0x08084D84
	push {r4-r7,lr}
	ldr r2, _08084DCC  @ =gRam
	ldr r1, _08084DD0  @ =0x00000B08
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _08084DD4  @ =0x000018B0
	add r1, r2, r3
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	ldr r4, _08084DD8  @ =0x00000C04
	add r0, r2, r4
	ldrh r0, [r0]
	add r6, r2, #0
	cmp r0, #0
	beq _08084DE0
	cmp r0, #4
	beq _08084DE0
	cmp r1, #36
	beq _08084DB8
	cmp r1, #38
	beq _08084DB8
	cmp r1, #65
	ble _08084DBA
_08084DB8:
	add r0, r0, #4
_08084DBA:
	cmp r1, #24
	beq _08084DC2
	cmp r1, #68
	bne _08084DC4
_08084DC2:
	add r0, r0, #2
_08084DC4:
	ldr r1, _08084DDC  @ =gUnknown_0816794C
	sub r0, r0, #2
	asr r0, r0, #1
	b _08084E1A
_08084DCC:
	.4byte gRam
_08084DD0:
	.4byte 0x00000B08
_08084DD4:
	.4byte 0x000018B0
_08084DD8:
	.4byte 0x00000C04
_08084DDC:
	.4byte gUnknown_0816794C
_08084DE0:
	ldr r1, _08084EA0  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08084EA4  @ =0x000018B0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r4, _08084EA8  @ =0x00000BFE
	add r2, r6, r4
	ldr r1, _08084EAC  @ =gUnknown_081676B2
	ldr r4, _08084EB0  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08084E16
	ldr r0, _08084EB4  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08084E16:
	ldr r1, _08084EB8  @ =gUnknown_0816798C
	lsr r0, r3, #1
_08084E1A:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _08084EA0  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08084EBC  @ =0x000018D0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r5, [r0]
	ldr r3, _08084EC0  @ =0x0000097C
	add r1, r6, r3
	mov r0, #4
	strh r0, [r1]
	ldr r6, _08084EC4  @ =gUnknown_02018000
	add r7, r1, #0
_08084E3C:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	ldr r0, _08084EC8  @ =0x00001FFF
	and r0, r0, r5
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08084ECC  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r2, #128
	lsl r2, r2, #1
	add r0, r5, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08084E3C
	pop {r4-r7}
	pop {r0}
	bx r0
_08084EA0:
	.4byte 0x00000B08
_08084EA4:
	.4byte 0x000018B0
_08084EA8:
	.4byte 0x00000BFE
_08084EAC:
	.4byte gUnknown_081676B2
_08084EB0:
	.4byte 0x00000968
_08084EB4:
	.4byte gUnknown_081677FC
_08084EB8:
	.4byte gUnknown_0816798C
_08084EBC:
	.4byte 0x000018D0
_08084EC0:
	.4byte 0x0000097C
_08084EC4:
	.4byte gUnknown_02018000
_08084EC8:
	.4byte 0x00001FFF
_08084ECC:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08084D84

