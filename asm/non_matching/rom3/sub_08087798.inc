	THUMB_FUNC_START sub_08087798
sub_08087798: @ 0x08087798
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080877EC  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r2, r0, r1
	ldrh r4, [r2]
	str r4, [sp]
	ldr r1, _080877F0  @ =gUnknown_02000400
	ldrh r7, [r1]
	mov r8, r0
	mov r10, r2
	ldr r0, _080877F4  @ =0x00000974
	add r0, r0, r8
	mov r9, r0
	lsl r6, r7, #1
	add r1, r1, #2
	add r4, r6, r1
_080877C4:
	mov r2, r10
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080877FC
	sub r2, r2, #1
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r1, _080877F8  @ =0xFFFFA000
	add r0, r0, r1
	b _08087812
_080877EC:
	.4byte gRam
_080877F0:
	.4byte gUnknown_02000400
_080877F4:
	.4byte 0x00000974
_080877F8:
	.4byte 0xFFFFA000
_080877FC:
	mov r2, r10
	mov r1, #0
	ldrsh r0, [r2, r1]
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r2, _08087884  @ =0xFFFFC000
	add r0, r0, r2
_08087812:
	strh r0, [r4]
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	mov r1, #0
	ldrsh r0, [r5, r1]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087888  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldr r1, _0808788C  @ =gUnknown_03002B9C
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	bne _08087890
	mov r0, #4
	strh r0, [r4, #2]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087888  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087888  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087888  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #10]
	ldrh r0, [r5]
	add r0, r0, #128
	b _080878F4
_08087884:
	.4byte 0xFFFFC000
_08087888:
	.4byte gUnknown_02018000
_0808788C:
	.4byte gUnknown_03002B9C
_08087890:
	ldr r0, _080879B8  @ =gUnknown_02000404
	add r1, r6, r0
	ldr r2, _080879BC  @ =0x00008004
	add r0, r2, #0
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	ldr r0, _080879C0  @ =gUnknown_02000408
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _080879C4  @ =gUnknown_02018000
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
	ldr r0, _080879C8  @ =gUnknown_0200040A
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _080879C4  @ =gUnknown_02018000
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
	ldr r0, _080879CC  @ =gUnknown_0200040C
	add r1, r6, r0
	lsl r0, r2, #1
	ldr r2, _080879C4  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #2
_080878F4:
	strh r0, [r5]
	add r6, r6, #12
	add r4, r4, #12
	add r7, r7, #6
	mov r1, r9
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	ldr r1, _080879D0  @ =gRam
	cmp r0, #0
	beq _0808790E
	b _080877C4
_0808790E:
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
	ldr r0, _080879D4  @ =gUnknown_081677A8
_08087926:
	ldrh r4, [r0]
	cmp r1, r4
	beq _08087938
	add r0, r0, #2
	add r3, r3, #1
	cmp r3, #12
	bne _08087926
	cmp r2, #0
	beq _08087996
_08087938:
	ldr r1, _080879D0  @ =gRam
	ldr r0, _080879D8  @ =0x00000974
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	mov r8, r1
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	add r6, r2, #0
	lsl r0, r7, #1
	ldr r1, _080879DC  @ =gUnknown_02000402
	add r4, r0, r1
_08087952:
	ldrh r1, [r5]
	ldr r2, _080879E0  @ =0x00001FFF
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
	ldr r1, _080879E4  @ =0xFFFFE000
	add r0, r0, r1
	strh r0, [r4]
	mov r0, #1
	strh r0, [r4, #2]
	lsl r0, r2, #1
	ldr r2, _080879E8  @ =gUnknown_0201C000
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
	bne _08087952
_08087996:
	lsl r0, r7, #1
	ldr r4, _080879DC  @ =gUnknown_02000402
	add r0, r0, r4
	ldr r2, _080879EC  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080879F0  @ =gUnknown_02000400
	strh r7, [r0]
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
_080879B8:
	.4byte gUnknown_02000404
_080879BC:
	.4byte 0x00008004
_080879C0:
	.4byte gUnknown_02000408
_080879C4:
	.4byte gUnknown_02018000
_080879C8:
	.4byte gUnknown_0200040A
_080879CC:
	.4byte gUnknown_0200040C
_080879D0:
	.4byte gRam
_080879D4:
	.4byte gUnknown_081677A8
_080879D8:
	.4byte 0x00000974
_080879DC:
	.4byte gUnknown_02000402
_080879E0:
	.4byte 0x00001FFF
_080879E4:
	.4byte 0xFFFFE000
_080879E8:
	.4byte gUnknown_0201C000
_080879EC:
	.4byte 0x0000FFFF
_080879F0:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08087798

