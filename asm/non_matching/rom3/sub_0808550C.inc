	THUMB_FUNC_START sub_0808550C
sub_0808550C: @ 0x0808550C
	push {r4-r7,lr}
	ldr r2, _0808554C  @ =gRam
	ldr r1, _08085550  @ =0x00000B08
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _08085554  @ =0x000018B0
	add r1, r2, r3
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	ldr r4, _08085558  @ =0x00000C04
	add r0, r2, r4
	ldrh r0, [r0]
	add r6, r2, #0
	cmp r0, #0
	beq _08085560
	cmp r0, #4
	beq _08085560
	cmp r1, #65
	ble _0808553A
	add r0, r0, #4
_0808553A:
	cmp r1, #24
	beq _08085542
	cmp r1, #68
	bne _08085544
_08085542:
	add r0, r0, #2
_08085544:
	ldr r1, _0808555C  @ =gUnknown_0816797C
	sub r0, r0, #2
	asr r0, r0, #1
	b _0808559A
_0808554C:
	.4byte gRam
_08085550:
	.4byte 0x00000B08
_08085554:
	.4byte 0x000018B0
_08085558:
	.4byte 0x00000C04
_0808555C:
	.4byte gUnknown_0816797C
_08085560:
	ldr r1, _08085664  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08085668  @ =0x000018B0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r4, _0808566C  @ =0x00000BFE
	add r2, r6, r4
	ldr r1, _08085670  @ =gUnknown_081676B2
	ldr r4, _08085674  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08085596
	ldr r0, _08085678  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08085596:
	ldr r1, _0808567C  @ =gUnknown_08167BDC
	lsr r0, r3, #1
_0808559A:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _08085664  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08085680  @ =0x000018D0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r5, [r0]
	add r5, r5, #2
	ldr r3, _08085684  @ =0x0000097C
	add r1, r6, r3
	mov r0, #3
	strh r0, [r1]
	ldr r7, _08085688  @ =gUnknown_02018000
	add r6, r1, #0
_080855BE:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #1
	bne _080855DE
	ldr r3, _0808568C  @ =gUnknown_0201C000
	add r1, r2, r3
	ldrh r0, [r4]
	strh r0, [r1]
_080855DE:
	add r4, r4, #2
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #1
	bne _08085602
	ldr r3, _0808568C  @ =gUnknown_0201C000
	add r1, r2, r3
	ldrh r0, [r4]
	strh r0, [r1]
_08085602:
	add r4, r4, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	cmp r0, #1
	bne _08085628
	ldr r0, _0808568C  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_08085628:
	add r4, r4, #2
	mov r1, #192
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	cmp r0, #1
	bne _0808564E
	ldr r0, _0808568C  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_0808564E:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080855BE
	pop {r4-r7}
	pop {r0}
	bx r0
_08085664:
	.4byte 0x00000B08
_08085668:
	.4byte 0x000018B0
_0808566C:
	.4byte 0x00000BFE
_08085670:
	.4byte gUnknown_081676B2
_08085674:
	.4byte 0x00000968
_08085678:
	.4byte gUnknown_081677FC
_0808567C:
	.4byte gUnknown_08167BDC
_08085680:
	.4byte 0x000018D0
_08085684:
	.4byte 0x0000097C
_08085688:
	.4byte gUnknown_02018000
_0808568C:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_0808550C

