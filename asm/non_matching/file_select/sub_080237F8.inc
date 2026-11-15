	THUMB_FUNC_START sub_080237F8
sub_080237F8: @ 0x080237F8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r6, r0, #0
	ldr r1, _08023864  @ =gUnknown_03006A30
	ldrb r3, [r6, #11]
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r1, r1, #40
	add r0, r0, r1
	ldr r5, [r0]
	ldr r0, _08023868  @ =gUnknown_0813BE50
	mov r1, #117
	add r1, r1, r6
	mov r8, r1
	ldrb r1, [r1]
	add r0, r1, r0
	ldrb r0, [r0]
	mov r9, r0
	add r0, r6, #0
	add r0, r0, #114
	ldrb r0, [r0]
	cmp r0, #47
	bhi _080238B2
	ldrh r4, [r5, #50]
	ldrh r7, [r5, #54]
	add r0, r5, #0
	mov r1, #64
	mov r2, r9
	bl 0x08002E70
	lsl r4, r4, #16
	asr r4, r4, #16
	ldrh r2, [r5, #50]
	mov r3, #50
	ldrsh r0, [r5, r3]
	cmp r4, r0
	bne _08023856
	lsl r0, r7, #16
	asr r0, r0, #16
	mov r3, #54
	ldrsh r1, [r5, r3]
	cmp r0, r1
	bne _08023856
	b _080239B2
_08023856:
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	beq _0802386C
	sub r0, r2, r4
	b _0802386E
	.byte 0x00
	.byte 0x00
_08023864:
	.4byte gUnknown_03006A30
_08023868:
	.4byte gUnknown_0813BE50
_0802386C:
	sub r0, r4, r2
_0802386E:
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r0, #16
	asr r1, r1, #8
	add r0, r6, #0
	mov r2, r9
	bl 0x08002E70
	add r0, r6, #0
	bl sub_080239C0
	add r0, r6, #0
	add r0, r0, #114
	ldrb r0, [r0]
	cmp r0, #47
	bls _08023898
	add r1, r6, #0
	add r1, r1, #119
	mov r0, #0
	strb r0, [r1]
	b _080239B2
_08023898:
	ldrb r0, [r6, #24]
	sub r0, r0, #1
	strb r0, [r6, #24]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080238A6
	b _080239B2
_080238A6:
	mov r0, #8
	strb r0, [r6, #24]
	mov r0, #139
	bl 0x08003DFC
	b _080239B2
_080238B2:
	ldr r0, _080238D8  @ =gUnknown_0813BE56
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r1, _080238DC  @ =gUnknown_03000940
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	beq _080239AC
	add r1, r6, #0
	add r1, r1, #119
	ldrb r0, [r1]
	cmp r0, #14
	bhi _080238E0
	add r0, r0, #1
	strb r0, [r1]
	b _080239B2
	.byte 0x00
	.byte 0x00
_080238D8:
	.4byte gUnknown_0813BE56
_080238DC:
	.4byte gUnknown_03000940
_080238E0:
	ldr r2, [r6, #124]
	add r2, r2, #110
	add r0, r6, #0
	add r0, r0, #118
	ldrb r0, [r0]
	ldrh r1, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, [r6, #84]
	ldrb r0, [r0, #20]
	cmp r0, #6
	bne _08023906
	ldr r0, [r6, #124]
	add r0, r0, #110
	ldrh r1, [r0]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #192
	bne _080239B2
_08023906:
	mov r0, #4
	strb r0, [r6, #20]
	mov r0, #60
	strb r0, [r6, #23]
	ldr r1, _080239A0  @ =gUnknown_0813BE52
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r6, #50]
	add r0, r0, r3
	strh r0, [r6, #50]
	mov r0, #18
	bl 0x08003DFC
	mov r0, #15
	mov r1, #3
	mov r2, #32
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _08023950
	ldr r0, _080239A4  @ =gUnknown_0813BE54
	mov r2, r8
	ldrb r1, [r2]
	add r1, r1, r0
	mov r2, #0
	ldrsb r2, [r1, r2]
	lsl r2, r2, #16
	add r0, r6, #0
	add r1, r5, #0
	mov r3, #0
	bl sub_0803D4A4
_08023950:
	ldr r4, _080239A8  @ =gUnknown_0813BE58
	bl 0x0800099C
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r4
	ldrb r1, [r1]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _080239B2
	mov r3, r8
	ldrb r0, [r3]
	mov r1, #1
	eor r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, #8
	mov r2, #128
	neg r2, r2
	add r1, r2, #0
	orr r0, r0, r1
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r1, _080239A4  @ =gUnknown_0813BE54
	ldrb r0, [r3]
	add r0, r0, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #16
	add r0, r6, #0
	add r1, r5, #0
	mov r3, #0
	bl sub_0803D4A4
	b _080239B2
	.byte 0x00
	.byte 0x00
_080239A0:
	.4byte gUnknown_0813BE52
_080239A4:
	.4byte gUnknown_0813BE54
_080239A8:
	.4byte gUnknown_0813BE58
_080239AC:
	add r0, r6, #0
	add r0, r0, #119
	strb r2, [r0]
_080239B2:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080237F8

	.byte 0x00
	.byte 0x00
