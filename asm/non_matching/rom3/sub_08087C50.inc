	THUMB_FUNC_START sub_08087C50
sub_08087C50: @ 0x08087C50
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _08087D38  @ =gRam
	ldr r0, _08087D3C  @ =0x00000974
	add r4, r2, r0
	mov r1, #0
	mov r0, #4
	strh r0, [r4]
	ldr r0, _08087D40  @ =0x0000096C
	add r3, r2, r0
	strh r1, [r3]
	mov r1, #151
	lsl r1, r1, #4
	add r5, r2, r1
	ldrh r1, [r5]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #57
	ble _08087C84
	mov r0, #1
	strh r0, [r3]
	mov r0, #5
	strh r0, [r4]
_08087C84:
	ldr r0, _08087D44  @ =gUnknown_02000400
	ldrh r7, [r0]
	mov r10, r2
	add r6, r5, #0
	mov r9, r3
	mov r8, r4
	lsl r0, r7, #1
	ldr r2, _08087D48  @ =gUnknown_02000402
	add r4, r0, r2
_08087C96:
	mov r3, #0
	ldrsh r0, [r6, r3]
	bl sub_08080380
	add r2, r0, #0
	ldr r1, _08087D4C  @ =0x00001FFF
	add r0, r1, #0
	add r1, r2, #0
	and r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r10
	strh r1, [r0]
	asr r2, r2, #1
	lsl r5, r7, #1
	ldr r3, _08087D50  @ =0xFFFFE000
	add r0, r3, #0
	add r1, r1, r0
	strh r1, [r4]
	lsl r0, r2, #1
	ldr r1, _08087D54  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #4]
	mov r2, r9
	mov r3, #0
	ldrsh r0, [r2, r3]
	cmp r0, #0
	bne _08087D58
	mov r0, #5
	strh r0, [r4, #2]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087D54  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r3, #0
	ldrsh r0, [r6, r3]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r1, _08087D54  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r2, #0
	ldrsh r0, [r6, r2]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r3, _08087D54  @ =gUnknown_02018000
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4, #10]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #8
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087D54  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #12]
	add r4, r4, #14
	add r7, r7, #7
	ldrh r0, [r6]
	add r0, r0, #128
	b _08087DC0
	.byte 0x00
	.byte 0x00
_08087D38:
	.4byte gRam
_08087D3C:
	.4byte 0x00000974
_08087D40:
	.4byte 0x0000096C
_08087D44:
	.4byte gUnknown_02000400
_08087D48:
	.4byte gUnknown_02000402
_08087D4C:
	.4byte 0x00001FFF
_08087D50:
	.4byte 0xFFFFE000
_08087D54:
	.4byte gUnknown_02018000
_08087D58:
	ldr r3, _08087DF0  @ =gUnknown_02000404
	add r1, r5, r3
	ldr r2, _08087DF4  @ =0x00008004
	add r0, r2, #0
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	ldr r0, _08087DF8  @ =gUnknown_02000408
	add r1, r5, r0
	lsl r0, r2, #1
	ldr r2, _08087DFC  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _08087E00  @ =gUnknown_0200040A
	add r1, r5, r3
	lsl r0, r2, #1
	ldr r2, _08087DFC  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r1, #192
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _08087E04  @ =gUnknown_0200040C
	add r1, r5, r3
	lsl r0, r2, #1
	ldr r2, _08087DFC  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	add r4, r4, #12
	add r7, r7, #6
	ldrh r0, [r6]
	add r0, r0, #2
_08087DC0:
	strh r0, [r6]
	mov r3, r8
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08087DD2
	b _08087C96
_08087DD2:
	lsl r0, r7, #1
	ldr r1, _08087E08  @ =gUnknown_02000402
	add r0, r0, r1
	ldr r2, _08087E0C  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08087E10  @ =gUnknown_02000400
	strh r7, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08087DF0:
	.4byte gUnknown_02000404
_08087DF4:
	.4byte 0x00008004
_08087DF8:
	.4byte gUnknown_02000408
_08087DFC:
	.4byte gUnknown_02018000
_08087E00:
	.4byte gUnknown_0200040A
_08087E04:
	.4byte gUnknown_0200040C
_08087E08:
	.4byte gUnknown_02000402
_08087E0C:
	.4byte 0x0000FFFF
_08087E10:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08087C50

