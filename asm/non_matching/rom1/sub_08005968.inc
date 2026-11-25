	.syntax unified
	THUMB_FUNC_START sub_08005968
sub_08005968: @ 0X08005968
	push {lr}
	movs r0, r0
_0800596C:
	eors r1, r1
	movs r2, #46
	strb r1, [r0, r2]
	ldr r2, [pc, #596]
	str r2, [r0, #120]
	str r2, [r0, #124]
	bl sub_08001D5C
	movs r2, #1
	ldrh r3, [r1, #54]
	orrs r2, r3
	strh r2, [r1, #54]
	ldr r2, [pc, #580]
	strh r2, [r1, #8]
	eors r2, r2
	strb r2, [r0, #23]
	movs r2, #2
	strb r2, [r0, #24]
	movs r2, #192
	str r2, [r0, #116]
	movs r2, #1
	strb r2, [r0, #21]
	push {r0}
	bl sub_0803DC68
	pop {r0}
	movs r2, #117
	bl sub_080031B8
	pop {pc}
_080059A8:
	ldr r2, [r0, #120]
	subs r2, #32
	str r2, [r0, #120]
	ldr r2, [r0, #124]
	subs r2, #32
	str r2, [r0, #124]
	ldr r3, [pc, #528]
	cmp r2, r3
	beq.n _080059C4
	push {r0}
	bl sub_0803DD0C
	pop {r0}
	pop {pc}
_080059C4:
	push {r0}
	bl sub_08003BCC
	pop {r0}
	ldr r2, [r0, #28]
	ldr r3, [pc, #512]
	ands r2, r3
	str r2, [r0, #28]
	ldr r2, [pc, #508]
	str r2, [r0, #72]
	bl sub_080019FC
	movs r2, #4
	strb r2, [r0, #21]
	movs r2, #5
	strb r2, [r0, #23]
	pop {pc}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xb5
	.byte 0x00
	.byte 0x00
_080059EC:
	ldrb r3, [r0, #23]
	lsrs r3, r3, #1
	bcc.n _080059FA
	ldr r2, [r0, #120]
	subs r2, #72
	str r2, [r0, #120]
	b.n _08005A12
_080059FA:
	ldr r2, [r0, #120]
	ldr r3, [pc, #472]
	cmp r2, r3
	bcs.n _08005A08
	adds r2, #96
	str r2, [r0, #120]
	b.n _08005A12
_08005A08:
	ldrb r3, [r0, #23]
	adds r3, #1
	strb r3, [r0, #23]
	cmp r3, #3
	beq.n _08005A42
_08005A12:
	ldrb r3, [r0, #23]
	lsrs r3, r3, #1
	bcs.n _08005A24
	lsrs r3, r3, #1
	bcs.n _08005A38
	ldr r2, [r0, #124]
	subs r2, #16
	str r2, [r0, #124]
	b.n _08005A38
_08005A24:
	ldr r2, [r0, #124]
	ldr r3, [pc, #436]
	cmp r2, r3
	bcs.n _08005A32
	adds r2, #104
	str r2, [r0, #124]
	b.n _08005A38
_08005A32:
	ldrb r3, [r0, #23]
	adds r3, #1
	strb r3, [r0, #23]
_08005A38:
	push {r0}
	bl sub_0803DD0C
	pop {r0}
	pop {pc}
_08005A42:
	push {r0}
	bl sub_08003BCC
	pop {r0}
	ldr r2, [r0, #28]
	ldr r3, [pc, #384]
	ands r2, r3
	str r2, [r0, #28]
	bl sub_08001D5C
	ldr r2, [pc, #392]
	strh r2, [r1, #8]
	ldrh r2, [r1, #54]
	ldr r3, [pc, #388]
	ands r3, r2
	strh r3, [r1, #54]
	movs r2, #2
	strb r2, [r0, #21]
	eors r2, r2
	movs r3, #66
	strb r2, [r0, r3]
	pop {pc}
	.byte 0x00
	.byte 0x00
_08005A70:
	bl sub_08001F38+0x24
	bl sub_08001D5C
	ldrh r2, [r1, #54]
	movs r3, #128
	tst r2, r3
	bne.n _08005A8E
	ldr r2, [pc, #356]
	str r2, [r0, #72]
	bl sub_080019FC
	bl sub_080012FC
	pop {pc}
_08005A8E:
	ldr r2, [pc, #312]
	str r2, [r0, #12]
	bl sub_08001EC0
	bne.n _08005A9C
	bl sub_080047F4
_08005A9C:
	bl sub_0800127C
	bl sub_08001510
	bl sub_0800127C
	ldrh r2, [r1, #54]
	movs r3, #65
	ands r2, r3
	bne.n _08005AFE
	ldrb r2, [r1, #18]
	cmp r2, #176
	beq.n _08005AFE
	cmp r2, #172
	beq.n _08005AFE
	cmp r2, #32
	bcc.n _08005AC2
	cmp r2, #45
	bcc.n _08005AFE
_08005AC2:
	ldr r3, [pc, #296]
	ldrh r3, [r3, #0]
	movs r2, #1
	ands r3, r2
	beq.n _08005AFE
	ldrh r2, [r0, #54]
	adds r2, #3
	strh r2, [r0, #54]
	bl sub_08005968
	movs r2, #3
	strb r2, [r0, #21]
	ldr r2, [pc, #252]
	str r2, [r0, #120]
	str r2, [r0, #124]
	push {r0}
	bl sub_0803DD0C
	pop {r0}
	movs r2, #4
	movs r3, #42
	strb r2, [r0, r3]
	eors r2, r2
	strb r2, [r0, #23]
	bl sub_080037CC
	movs r2, #118
	bl sub_080031B8
	pop {pc}
_08005AFE:
	ldrh r2, [r1, #54]
	movs r3, #64
	ands r2, r3
	bne.n _08005B58
	bl sub_080019FC
	bl sub_08001328
	bl sub_08001D5C
	ldrb r3, [r1, #10]
	orrs r3, r3
	bne.n _08005B1C
	bl sub_080015BC
_08005B1C:
	movs r3, #2
	ldrsb r2, [r1, r3]
	orrs r2, r2
	beq.n _08005B3C
	bmi.n _08005B26
_08005B26:
	ldrb r2, [r1, #7]
	movs r3, #239
	ands r2, r3
	strb r2, [r1, #7]
	movs r2, #41
	ldrb r2, [r0, r2]
	lsrs r2, r2, #1
	bcs.n _08005B3A
	bl sub_08002294
_08005B3A:
	pop {pc}
_08005B3C:
	movs r1, #66
	ldrb r1, [r0, r1]
	orrs r1, r1
	beq.n _08005B4E
	movs r2, #62
	ldrb r1, [r0, r2]
	movs r2, #43
	strb r1, [r0, r2]
	pop {pc}
_08005B4E:
	movs r2, #60
	ldrb r1, [r0, r2]
	movs r3, #128
	orrs r1, r3
	strb r1, [r0, r2]
_08005B58:
	eors r1, r1
	movs r2, #46
	strb r1, [r0, r2]
	ldr r1, [pc, #144]
	ldrb r2, [r0, #10]
	lsls r2, r2, #2
	ldr r1, [r1, r2]
	ldrb r2, [r1, #7]
	ldrb r3, [r1, #13]
	movs r4, #43
	strb r3, [r0, r4]
	eors r4, r4
	orrs r3, r2
	movs r2, #128
	tst r3, r2
	bne.n _08005B86
	ldrb r2, [r1, #10]
	orrs r2, r2
	bne.n _08005B86
	push {r1}
	bl sub_08002294
	pop {r1}
_08005B86:
	ldr r1, [pc, #108]
	ldrb r2, [r0, #10]
	lsls r2, r2, #2
	ldr r1, [r1, r2]
	ldrb r2, [r1, #11]
	orrs r2, r2
	bne.n _08005B9C
	push {r0}
	bl sub_0803D134
	pop {r0}
_08005B9C:
	bl sub_08001D5C
	ldrh r2, [r1, #54]
	movs r3, #64
	tst r2, r3
	bne.n _08005BBA
	bl sub_08009490
	cmp r1, #15
	bne.n _08005BBA
	movs r3, #30
	movs r2, #61
	strb r3, [r0, r2]
	bl sub_08002200
_08005BBA:
	pop {pc}
	.4byte 0x0800592c
	.4byte 0x03000510
	.4byte 0x0000ff7e
	.4byte 0x00000100
	.4byte 0x000001a8
	.4byte 0xfffffcff
	.4byte gUnknown_0813E4CC+0x300
	.4byte 0x00000400
	.4byte 0x00000500
	.4byte 0x000001a6
	.4byte 0x0000fffe
	.4byte gUnknown_0813E4CC+0x300
	.4byte 0x03000bd0
	.4byte gPlayerRecordPtrs
	.4byte gPlayerRecordPtrs
	.syntax unified
	.thumb
