	THUMB_FUNC_START sub_08086E58
sub_08086E58: @ 0x08086E58
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _08086EAC  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r2, r0, r1
	ldrh r3, [r2]
	str r3, [sp]
	ldr r1, _08086EB0  @ =gUnknown_02000400
	ldrh r7, [r1]
	mov r8, r0
	mov r10, r2
	ldr r4, _08086EB4  @ =0x00000974
	add r4, r4, r8
	mov r9, r4
	lsl r6, r7, #1
	ldr r0, _08086EB8  @ =gUnknown_02000402
	add r4, r6, r0
_08086E84:
	mov r2, r10
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08086EC4
	ldr r2, _08086EBC  @ =0x00001FFF
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r3, _08086EC0  @ =0xFFFFA000
	b _08086ED8
	.byte 0x00
	.byte 0x00
_08086EAC:
	.4byte gRam
_08086EB0:
	.4byte gUnknown_02000400
_08086EB4:
	.4byte 0x00000974
_08086EB8:
	.4byte gUnknown_02000402
_08086EBC:
	.4byte 0x00001FFF
_08086EC0:
	.4byte 0xFFFFA000
_08086EC4:
	mov r1, r10
	mov r2, #0
	ldrsh r0, [r1, r2]
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r3, _08086F4C  @ =0xFFFFC000
_08086ED8:
	add r0, r0, r3
	strh r0, [r4]
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	mov r1, #0
	ldrsh r0, [r5, r1]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08086F50  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldr r3, _08086F54  @ =gUnknown_03002B9C
	mov r1, #0
	ldrsh r0, [r3, r1]
	cmp r0, #0
	bne _08086F58
	mov r0, #4
	strh r0, [r4, #2]
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r3, _08086F50  @ =gUnknown_02018000
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08086F50  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r3, #0
	ldrsh r0, [r5, r3]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r1, _08086F50  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #10]
	ldrh r0, [r5]
	add r0, r0, #128
	b _08086FBC
_08086F4C:
	.4byte 0xFFFFC000
_08086F50:
	.4byte gUnknown_02018000
_08086F54:
	.4byte gUnknown_03002B9C
_08086F58:
	ldr r2, _0808709C  @ =gUnknown_02000404
	add r1, r6, r2
	ldr r3, _080870A0  @ =0x00008004
	add r0, r3, #0
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870A4  @ =gUnknown_02000408
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080870A8  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r5, r3]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870AC  @ =gUnknown_0200040A
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080870A8  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r5, r3]
	mov r1, #192
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870B0  @ =gUnknown_0200040C
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080870A8  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #2
_08086FBC:
	strh r0, [r5]
	add r6, r6, #12
	add r4, r4, #12
	add r7, r7, #6
	mov r3, r9
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	ldr r5, _080870B4  @ =gRam
	cmp r0, #0
	beq _08086FD6
	b _08086E84
_08086FD6:
	ldr r4, [sp]
	lsl r0, r4, #19
	lsr r0, r0, #19
	mov r2, #151
	lsl r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	mov r3, #0
	mov r2, #0
	mov r4, #0
	ldrsh r1, [r1, r4]
	ldr r0, _080870B8  @ =gUnknown_08167778
_08086FEE:
	ldrh r4, [r0]
	cmp r1, r4
	beq _08087002
	add r0, r0, #2
	add r3, r3, #1
	cmp r3, #12
	bne _08086FEE
	cmp r2, #0
	bne _08087002
	b _08087130
_08087002:
	ldr r1, _080870BC  @ =0x0000096C
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	bne _080870D4
	mov r3, #151
	lsl r3, r3, #4
	add r6, r5, r3
	ldrh r1, [r6]
	ldr r0, _080870C0  @ =0x00001FFF
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	mov r4, #150
	lsl r4, r4, #4
	add r1, r5, r4
	add r0, r2, #0
	strh r2, [r1]
	asr r2, r2, #1
	lsl r4, r7, #1
	ldr r3, _080870C4  @ =gUnknown_02000402
	add r1, r4, r3
	ldr r3, _080870C8  @ =0xFFFFE000
	add r0, r0, r3
	strh r0, [r1]
	ldr r0, _0808709C  @ =gUnknown_02000404
	add r1, r4, r0
	mov r0, #4
	strh r0, [r1]
	ldr r3, _080870CC  @ =gUnknown_02000406
	add r1, r4, r3
	lsl r0, r2, #1
	ldr r5, _080870D0  @ =gUnknown_0201C000
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870A4  @ =gUnknown_02000408
	add r1, r4, r3
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870AC  @ =gUnknown_0200040A
	add r1, r4, r3
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080870B0  @ =gUnknown_0200040C
	add r4, r4, r3
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r4]
	add r7, r7, #6
	b _08087130
	.byte 0x00
	.byte 0x00
_0808709C:
	.4byte gUnknown_02000404
_080870A0:
	.4byte 0x00008004
_080870A4:
	.4byte gUnknown_02000408
_080870A8:
	.4byte gUnknown_02018000
_080870AC:
	.4byte gUnknown_0200040A
_080870B0:
	.4byte gUnknown_0200040C
_080870B4:
	.4byte gRam
_080870B8:
	.4byte gUnknown_08167778
_080870BC:
	.4byte 0x0000096C
_080870C0:
	.4byte 0x00001FFF
_080870C4:
	.4byte gUnknown_02000402
_080870C8:
	.4byte 0xFFFFE000
_080870CC:
	.4byte gUnknown_02000406
_080870D0:
	.4byte gUnknown_0201C000
_080870D4:
	ldr r4, _08087150  @ =0x00000974
	add r0, r5, r4
	mov r1, #4
	strh r1, [r0]
	mov r8, r5
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	add r6, r0, #0
	lsl r0, r7, #1
	ldr r1, _08087154  @ =gUnknown_02000402
	add r4, r0, r1
_080870EC:
	ldrh r1, [r5]
	ldr r2, _08087158  @ =0x00001FFF
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	add r0, r2, #0
	strh r2, [r1]
	asr r2, r2, #1
	ldr r3, _0808715C  @ =0xFFFFE000
	add r0, r0, r3
	strh r0, [r4]
	mov r0, #1
	strh r0, [r4, #2]
	lsl r0, r2, #1
	ldr r1, _08087160  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldrh r0, [r5]
	add r0, r0, #2
	strh r0, [r5]
	add r4, r4, #6
	add r7, r7, #3
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080870EC
_08087130:
	lsl r0, r7, #1
	ldr r2, _08087154  @ =gUnknown_02000402
	add r0, r0, r2
	ldr r3, _08087164  @ =0x0000FFFF
	add r1, r3, #0
	strh r1, [r0]
	ldr r0, _08087168  @ =gUnknown_02000400
	strh r7, [r0]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08087150:
	.4byte 0x00000974
_08087154:
	.4byte gUnknown_02000402
_08087158:
	.4byte 0x00001FFF
_0808715C:
	.4byte 0xFFFFE000
_08087160:
	.4byte gUnknown_0201C000
_08087164:
	.4byte 0x0000FFFF
_08087168:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08086E58

