	THUMB_FUNC_START sub_080847A8
sub_080847A8: @ 0x080847A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080849C0  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r6, r0, r1
	mov r4, #0
	ldr r0, _080849C4  @ =0x0000171C
	strh r0, [r6]
	ldr r1, _080849C8  @ =0x00001D1D
	ldr r2, _080849CC  @ =gUnknown_03002B90
	strh r1, [r2]
	lsr r0, r0, #1
	bl sub_08081B28
	ldrh r0, [r6]
	lsl r0, r0, #16
	asr r0, r0, #17
	ldr r3, _080849D0  @ =gUnknown_0200CCA0
	add r0, r0, r3
	strb r4, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #16
	asr r0, r0, #17
	ldr r1, _080849D4  @ =gUnknown_0200CCA1
	add r0, r0, r1
	strb r4, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #16
	asr r0, r0, #17
	ldr r2, _080849D8  @ =gUnknown_0200CCA2
	add r0, r0, r2
	strb r4, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #16
	asr r0, r0, #17
	add r3, r3, #3
	add r0, r0, r3
	strb r4, [r0]
	ldr r7, _080849DC  @ =gUnknown_08165608
	mov r0, #4
	ldr r1, _080849E0  @ =gUnknown_03002BAC
	strh r0, [r1]
	mov r2, #0
	str r2, [sp]
	ldr r0, _080849E4  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r10, r0
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r1, #255
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r2, _080849E8  @ =0x00001FFF
	and r0, r0, r2
	bl sub_08080380
	ldr r3, _080849CC  @ =gUnknown_03002B90
	strh r0, [r3]
	lsl r1, r0, #16
	asr r2, r1, #17
	mov r1, r10
	lsl r4, r1, #1
	ldr r3, _080849EC  @ =gUnknown_02000402
	add r1, r4, r3
	ldr r3, _080849F0  @ =0xFFFFC000
	add r0, r0, r3
	strh r0, [r1]
	ldr r1, _080849F4  @ =gUnknown_02000404
	add r0, r4, r1
	mov r3, #1
	mov r9, r3
	strh r3, [r0]
	lsl r1, r2, #1
	ldr r0, _080849F8  @ =gUnknown_02018000
	mov r8, r0
	add r1, r1, r8
	ldr r0, _080849FC  @ =gUnknown_08164B1A
	ldrh r5, [r0]
	strh r5, [r1]
	ldr r1, _08084A00  @ =gUnknown_02000406
	add r0, r4, r1
	strh r5, [r0]
	mov r2, #0
	ldrsh r0, [r6, r2]
	mov r3, #130
	lsl r3, r3, #2
	add r0, r0, r3
	ldr r1, _080849E8  @ =0x00001FFF
	and r0, r0, r1
	bl sub_08080380
	ldr r2, _080849CC  @ =gUnknown_03002B90
	strh r0, [r2]
	lsl r1, r0, #16
	asr r2, r1, #17
	ldr r3, _08084A04  @ =gUnknown_02000408
	add r1, r4, r3
	ldr r3, _080849F0  @ =0xFFFFC000
	add r0, r0, r3
	strh r0, [r1]
	ldr r1, _08084A08  @ =gUnknown_0200040A
	add r0, r4, r1
	mov r3, r9
	strh r3, [r0]
	lsl r0, r2, #1
	add r0, r0, r8
	strh r5, [r0]
	ldr r0, _08084A0C  @ =gUnknown_0200040C
	add r4, r4, r0
	strh r5, [r4]
	mov r1, #6
	add r10, r10, r1
	mov r5, r8
	mov r2, r10
	lsl r0, r2, #1
	ldr r3, _080849EC  @ =gUnknown_02000402
	add r4, r0, r3
	ldr r0, _080849C0  @ =gRam
	ldr r1, _08084A10  @ =0x00000B12
	add r0, r0, r1
	mov r9, r0
_080848A4:
	ldrh r1, [r6]
	ldr r2, _080849E8  @ =0x00001FFF
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	ldr r3, _080849C0  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r3, r3, r1
	mov r8, r3
	strh r0, [r3]
	ldr r2, _080849F0  @ =0xFFFFC000
	add r0, r0, r2
	strh r0, [r4]
	ldr r3, _08084A14  @ =0x00008005
	add r0, r3, #0
	strh r0, [r4, #2]
	mov r1, #0
	ldrsh r0, [r6, r1]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r7]
	strh r1, [r0]
	ldrh r0, [r7]
	strh r0, [r4, #4]
	add r7, r7, #2
	mov r2, #0
	ldrsh r0, [r6, r2]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r7]
	strh r1, [r0]
	ldrh r0, [r7]
	strh r0, [r4, #6]
	add r7, r7, #2
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r7]
	strh r1, [r0]
	ldrh r0, [r7]
	strh r0, [r4, #8]
	add r7, r7, #2
	mov r2, #0
	ldrsh r0, [r6, r2]
	mov r3, #192
	lsl r3, r3, #1
	add r0, r0, r3
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r7]
	strh r1, [r0]
	ldrh r0, [r7]
	strh r0, [r4, #10]
	add r7, r7, #2
	mov r1, #0
	ldrsh r0, [r6, r1]
	mov r2, #128
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	asr r2, r0, #1
	lsl r1, r2, #1
	add r1, r1, r5
	mov r3, r9
	ldrh r0, [r3]
	lsr r0, r0, #1
	ldr r2, [sp]
	add r2, r2, #2
	add r0, r0, r2
	lsl r0, r0, #1
	ldr r3, _08084A18  @ =gUnknown_08164520
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, r9
	ldrh r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4, #12]
	ldrh r0, [r6]
	add r0, r0, #2
	strh r0, [r6]
	mov r0, #1
	ldr r2, [sp]
	eor r2, r2, r0
	str r2, [sp]
	add r4, r4, #14
	mov r3, #7
	add r10, r10, r3
	ldr r1, _080849E0  @ =gUnknown_03002BAC
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r2, r0, #16
	cmp r2, #0
	bne _080848A4
	mov r3, r10
	lsl r0, r3, #1
	ldr r1, _080849EC  @ =gUnknown_02000402
	add r0, r0, r1
	ldr r3, _08084A1C  @ =0x0000FFFF
	add r1, r3, #0
	strh r1, [r0]
	ldr r0, _080849E4  @ =gUnknown_02000400
	mov r1, r10
	strh r1, [r0]
	mov r0, r8
	add r0, r0, #77
	strb r2, [r0]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080849C0:
	.4byte gRam
_080849C4:
	.4byte 0x0000171C
_080849C8:
	.4byte 0x00001D1D
_080849CC:
	.4byte gUnknown_03002B90
_080849D0:
	.4byte gUnknown_0200CCA0
_080849D4:
	.4byte gUnknown_0200CCA1
_080849D8:
	.4byte gUnknown_0200CCA2
_080849DC:
	.4byte gUnknown_08165608
_080849E0:
	.4byte gUnknown_03002BAC
_080849E4:
	.4byte gUnknown_02000400
_080849E8:
	.4byte 0x00001FFF
_080849EC:
	.4byte gUnknown_02000402
_080849F0:
	.4byte 0xFFFFC000
_080849F4:
	.4byte gUnknown_02000404
_080849F8:
	.4byte gUnknown_02018000
_080849FC:
	.4byte gUnknown_08164B1A
_08084A00:
	.4byte gUnknown_02000406
_08084A04:
	.4byte gUnknown_02000408
_08084A08:
	.4byte gUnknown_0200040A
_08084A0C:
	.4byte gUnknown_0200040C
_08084A10:
	.4byte 0x00000B12
_08084A14:
	.4byte 0x00008005
_08084A18:
	.4byte gUnknown_08164520
_08084A1C:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080847A8

