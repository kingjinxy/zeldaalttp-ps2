	THUMB_FUNC_START sub_080879F4
sub_080879F4: @ 0x080879F4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _08087A48  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r2, r0, r1
	ldrh r4, [r2]
	str r4, [sp]
	ldr r1, _08087A4C  @ =gUnknown_02000400
	ldrh r7, [r1]
	mov r8, r0
	mov r10, r2
	ldr r0, _08087A50  @ =0x00000974
	add r0, r0, r8
	mov r9, r0
	lsl r6, r7, #1
	add r1, r1, #2
	add r4, r6, r1
_08087A20:
	mov r2, r10
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08087A58
	sub r2, r2, #1
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r1, _08087A54  @ =0xFFFFA000
	add r0, r0, r1
	b _08087A6E
_08087A48:
	.4byte gRam
_08087A4C:
	.4byte gUnknown_02000400
_08087A50:
	.4byte 0x00000974
_08087A54:
	.4byte 0xFFFFA000
_08087A58:
	mov r2, r10
	mov r1, #0
	ldrsh r0, [r2, r1]
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r2, _08087AE0  @ =0xFFFFC000
	add r0, r0, r2
_08087A6E:
	strh r0, [r4]
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	mov r1, #0
	ldrsh r0, [r5, r1]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087AE4  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldr r1, _08087AE8  @ =gUnknown_03002B9C
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	bne _08087AEC
	mov r0, #4
	strh r0, [r4, #2]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087AE4  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087AE4  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087AE4  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #10]
	ldrh r0, [r5]
	add r0, r0, #128
	b _08087B50
_08087AE0:
	.4byte 0xFFFFC000
_08087AE4:
	.4byte gUnknown_02018000
_08087AE8:
	.4byte gUnknown_03002B9C
_08087AEC:
	ldr r0, _08087C14  @ =gUnknown_02000404
	add r1, r6, r0
	ldr r2, _08087C18  @ =0x00008004
	add r0, r2, #0
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	ldr r0, _08087C1C  @ =gUnknown_02000408
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _08087C20  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r2, r0, #1
	ldr r0, _08087C24  @ =gUnknown_0200040A
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _08087C20  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #192
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r2, r0, #1
	ldr r0, _08087C28  @ =gUnknown_0200040C
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _08087C20  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #2
_08087B50:
	strh r0, [r5]
	add r6, r6, #12
	add r4, r4, #12
	add r7, r7, #6
	mov r1, r9
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	ldr r1, _08087C2C  @ =gRam
	cmp r0, #0
	beq _08087B6A
	b _08087A20
_08087B6A:
	ldr r2, [sp]
	lsl r0, r2, #19
	lsr r0, r0, #19
	mov r4, #151
	lsl r4, r4, #4
	add r1, r1, r4
	strh r0, [r1]
	mov r3, #0
	mov r2, #0
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r0, _08087C30  @ =gUnknown_081677C0
_08087B82:
	ldrh r4, [r0]
	cmp r1, r4
	beq _08087B94
	add r0, r0, #2
	add r3, r3, #1
	cmp r3, #12
	bne _08087B82
	cmp r2, #0
	beq _08087BF4
_08087B94:
	ldr r1, _08087C2C  @ =gRam
	ldr r0, _08087C34  @ =0x00000974
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	mov r8, r1
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	add r6, r2, #0
	lsl r0, r7, #1
	ldr r1, _08087C38  @ =gUnknown_02000402
	add r4, r0, r1
_08087BAE:
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #6
	ldr r1, _08087C3C  @ =0x00001FFF
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	add r0, r2, #0
	strh r2, [r1]
	asr r2, r2, #1
	ldr r1, _08087C40  @ =0xFFFFE000
	add r0, r0, r1
	strh r0, [r4]
	mov r0, #1
	strh r0, [r4, #2]
	lsl r0, r2, #1
	ldr r2, _08087C44  @ =gUnknown_0201C000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldrh r0, [r5]
	add r0, r0, #128
	strh r0, [r5]
	add r4, r4, #6
	add r7, r7, #3
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08087BAE
_08087BF4:
	lsl r0, r7, #1
	ldr r4, _08087C38  @ =gUnknown_02000402
	add r0, r0, r4
	ldr r2, _08087C48  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08087C4C  @ =gUnknown_02000400
	strh r7, [r0]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08087C14:
	.4byte gUnknown_02000404
_08087C18:
	.4byte 0x00008004
_08087C1C:
	.4byte gUnknown_02000408
_08087C20:
	.4byte gUnknown_02018000
_08087C24:
	.4byte gUnknown_0200040A
_08087C28:
	.4byte gUnknown_0200040C
_08087C2C:
	.4byte gRam
_08087C30:
	.4byte gUnknown_081677C0
_08087C34:
	.4byte 0x00000974
_08087C38:
	.4byte gUnknown_02000402
_08087C3C:
	.4byte 0x00001FFF
_08087C40:
	.4byte 0xFFFFE000
_08087C44:
	.4byte gUnknown_0201C000
_08087C48:
	.4byte 0x0000FFFF
_08087C4C:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_080879F4

