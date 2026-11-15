	THUMB_FUNC_START sub_08084ED0
sub_08084ED0: @ 0x08084ED0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _08084F9C  @ =gRam
	ldr r1, _08084FA0  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r6, r0, #1
	ldr r5, _08084FA4  @ =0x000018B0
	add r0, r4, r5
	add r0, r6, r0
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r0, _08084FA8  @ =0x00000BFE
	add r2, r4, r0
	ldr r1, _08084FAC  @ =gUnknown_081676B2
	ldr r5, _08084FB0  @ =0x00000968
	add r0, r4, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08084F0E
	ldr r0, _08084FB4  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08084F0E:
	ldr r1, _08084FB8  @ =gUnknown_08167A5C
	lsr r0, r3, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r5, [r0]
	ldr r1, _08084FBC  @ =0x000018D0
	add r0, r4, r1
	add r0, r6, r0
	ldrh r6, [r0]
	ldr r0, _08084FC0  @ =0x0000097C
	add r1, r4, r0
	mov r0, #4
	strh r0, [r1]
	ldr r7, _08084FC4  @ =gUnknown_02018000
	mov r8, r1
_08084F2C:
	add r0, r6, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r0, r6, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	mov r1, #128
	lsl r1, r1, #1
	add r4, r6, r1
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r0, _08084FC8  @ =0x00001FFF
	and r4, r4, r0
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08084FCC  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r5]
	strh r1, [r0]
	add r5, r5, #2
	add r6, r6, #2
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08084F2C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08084F9C:
	.4byte gRam
_08084FA0:
	.4byte 0x00000B08
_08084FA4:
	.4byte 0x000018B0
_08084FA8:
	.4byte 0x00000BFE
_08084FAC:
	.4byte gUnknown_081676B2
_08084FB0:
	.4byte 0x00000968
_08084FB4:
	.4byte gUnknown_081677FC
_08084FB8:
	.4byte gUnknown_08167A5C
_08084FBC:
	.4byte 0x000018D0
_08084FC0:
	.4byte 0x0000097C
_08084FC4:
	.4byte gUnknown_02018000
_08084FC8:
	.4byte 0x00001FFF
_08084FCC:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08084ED0

