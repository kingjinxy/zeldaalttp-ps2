	THUMB_FUNC_START sub_0808716C
sub_0808716C: @ 0x0808716C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080871C0  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r2, r0, r1
	ldrh r3, [r2]
	str r3, [sp]
	ldr r1, _080871C4  @ =gUnknown_02000400
	ldrh r7, [r1]
	mov r8, r0
	mov r10, r2
	ldr r4, _080871C8  @ =0x00000974
	add r4, r4, r8
	mov r9, r4
	lsl r6, r7, #1
	ldr r0, _080871CC  @ =gUnknown_02000402
	add r4, r6, r0
_08087198:
	mov r2, r10
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080871D8
	ldr r2, _080871D0  @ =0x00001FFF
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r3, _080871D4  @ =0xFFFFA000
	b _080871EC
	.byte 0x00
	.byte 0x00
_080871C0:
	.4byte gRam
_080871C4:
	.4byte gUnknown_02000400
_080871C8:
	.4byte 0x00000974
_080871CC:
	.4byte gUnknown_02000402
_080871D0:
	.4byte 0x00001FFF
_080871D4:
	.4byte 0xFFFFA000
_080871D8:
	mov r1, r10
	mov r2, #0
	ldrsh r0, [r1, r2]
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	ldr r3, _08087260  @ =0xFFFFC000
_080871EC:
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
	ldr r2, _08087264  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #4]
	ldr r3, _08087268  @ =gUnknown_03002B9C
	mov r1, #0
	ldrsh r0, [r3, r1]
	cmp r0, #0
	bne _0808726C
	mov r0, #4
	strh r0, [r4, #2]
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r3, _08087264  @ =gUnknown_02018000
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r2, _08087264  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r3, #0
	ldrsh r0, [r5, r3]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r1, _08087264  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4, #10]
	ldrh r0, [r5]
	add r0, r0, #128
	b _080872D0
_08087260:
	.4byte 0xFFFFC000
_08087264:
	.4byte gUnknown_02018000
_08087268:
	.4byte gUnknown_03002B9C
_0808726C:
	ldr r2, _080873AC  @ =gUnknown_02000404
	add r1, r6, r2
	ldr r3, _080873B0  @ =0x00008004
	add r0, r3, #0
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080873B4  @ =gUnknown_02000408
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080873B8  @ =gUnknown_02018000
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
	ldr r3, _080873BC  @ =gUnknown_0200040A
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080873B8  @ =gUnknown_02018000
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
	ldr r3, _080873C0  @ =gUnknown_0200040C
	add r1, r6, r3
	lsl r0, r2, #1
	ldr r2, _080873B8  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #2
_080872D0:
	strh r0, [r5]
	add r6, r6, #12
	add r4, r4, #12
	add r7, r7, #6
	mov r3, r9
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	ldr r5, _080873C4  @ =gRam
	cmp r0, #0
	beq _080872EA
	b _08087198
_080872EA:
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
	ldr r0, _080873C8  @ =gUnknown_08167778
_08087302:
	ldrh r4, [r0]
	cmp r1, r4
	beq _08087316
	add r0, r0, #2
	add r3, r3, #1
	cmp r3, #12
	bne _08087302
	cmp r2, #0
	bne _08087316
	b _0808743E
_08087316:
	ldr r1, _080873CC  @ =0x0000096C
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	bne _080873E4
	mov r3, #151
	lsl r3, r3, #4
	add r6, r5, r3
	ldrh r1, [r6]
	ldr r0, _080873D0  @ =0x00001FFF
	and r0, r0, r1
	bl sub_08080380
	mov r4, #150
	lsl r4, r4, #4
	add r1, r5, r4
	strh r0, [r1]
	lsl r1, r0, #16
	asr r2, r1, #17
	lsl r4, r7, #1
	ldr r3, _080873D4  @ =gUnknown_02000402
	add r1, r4, r3
	ldr r3, _080873D8  @ =0xFFFFE000
	add r0, r0, r3
	strh r0, [r1]
	ldr r0, _080873AC  @ =gUnknown_02000404
	add r1, r4, r0
	mov r0, #4
	strh r0, [r1]
	ldr r3, _080873DC  @ =gUnknown_02000406
	add r1, r4, r3
	lsl r0, r2, #1
	ldr r5, _080873E0  @ =gUnknown_0201C000
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	ldr r3, _080873B4  @ =gUnknown_02000408
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
	ldr r3, _080873BC  @ =gUnknown_0200040A
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
	ldr r3, _080873C0  @ =gUnknown_0200040C
	add r4, r4, r3
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r4]
	add r7, r7, #6
	b _0808743E
_080873AC:
	.4byte gUnknown_02000404
_080873B0:
	.4byte 0x00008004
_080873B4:
	.4byte gUnknown_02000408
_080873B8:
	.4byte gUnknown_02018000
_080873BC:
	.4byte gUnknown_0200040A
_080873C0:
	.4byte gUnknown_0200040C
_080873C4:
	.4byte gRam
_080873C8:
	.4byte gUnknown_08167778
_080873CC:
	.4byte 0x0000096C
_080873D0:
	.4byte 0x00001FFF
_080873D4:
	.4byte gUnknown_02000402
_080873D8:
	.4byte 0xFFFFE000
_080873DC:
	.4byte gUnknown_02000406
_080873E0:
	.4byte gUnknown_0201C000
_080873E4:
	ldr r4, _08087460  @ =0x00000974
	add r0, r5, r4
	mov r1, #4
	strh r1, [r0]
	mov r8, r5
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r8
	add r6, r0, #0
	lsl r0, r7, #1
	ldr r1, _08087464  @ =gUnknown_02000402
	add r4, r0, r1
_080873FC:
	ldrh r1, [r5]
	ldr r2, _08087468  @ =0x00001FFF
	add r0, r2, #0
	and r0, r0, r1
	bl sub_08080380
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	strh r0, [r1]
	lsl r1, r0, #16
	asr r2, r1, #17
	ldr r3, _0808746C  @ =0xFFFFE000
	add r0, r0, r3
	strh r0, [r4]
	mov r0, #1
	strh r0, [r4, #2]
	lsl r0, r2, #1
	ldr r1, _08087470  @ =gUnknown_0201C000
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
	bne _080873FC
_0808743E:
	lsl r0, r7, #1
	ldr r2, _08087464  @ =gUnknown_02000402
	add r0, r0, r2
	ldr r3, _08087474  @ =0x0000FFFF
	add r1, r3, #0
	strh r1, [r0]
	ldr r0, _08087478  @ =gUnknown_02000400
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
_08087460:
	.4byte 0x00000974
_08087464:
	.4byte gUnknown_02000402
_08087468:
	.4byte 0x00001FFF
_0808746C:
	.4byte 0xFFFFE000
_08087470:
	.4byte gUnknown_0201C000
_08087474:
	.4byte 0x0000FFFF
_08087478:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_0808716C

