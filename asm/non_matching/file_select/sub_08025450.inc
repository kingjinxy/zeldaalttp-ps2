	THUMB_FUNC_START sub_08025450
sub_08025450: @ 0x08025450
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r5, r0, #0
	ldr r0, [r5, #100]
	ldrb r4, [r0, #8]
	cmp r4, #1
	bne _08025486
	bl sub_08003FB0
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08025476
	add r0, r5, #0
	add r0, r0, #69
	strb r1, [r0]
	b _08025692
_08025476:
	ldr r2, _0802553C  @ =gUnknown_03006A30
	ldr r0, [r5, #100]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	strb r4, [r0, #26]
_08025486:
	ldr r0, [r5, #88]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08025492
	b _08025638
_08025492:
	add r0, r5, #0
	add r0, r0, #43
	ldrb r1, [r0]
	sub r1, r1, #8
	strb r1, [r0]
	ldr r1, [r5, #84]
	mov r9, r1
	mov r2, #125
	add r2, r2, r9
	mov r12, r2
	ldrb r1, [r2]
	mov r3, #1
	mov r8, r3
	mov r4, r8
	and r4, r4, r1
	add r6, r0, #0
	cmp r4, #0
	bne _080254C0
	ldr r1, [r5, #100]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _080254C0
	b _080255C0
_080254C0:
	ldr r0, [r5, #56]
	ldr r7, _08025540  @ =0xFFFF8000
	add r0, r0, r7
	str r0, [r5, #56]
	ldr r4, [r5, #88]
	ldr r2, _08025544  @ =gUnknown_0813E4CC
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	mov r3, #0
	ldrsh r1, [r0, r3]
	lsl r1, r1, #8
	ldr r3, _08025548  @ =gUnknown_0813C3A4
	mov r7, #58
	ldrsh r0, [r5, r7]
	neg r0, r0
	asr r0, r0, #2
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r0, [r0]
	mul r1, r0, r1
	ldr r0, [r4, #48]
	add r0, r0, r1
	str r0, [r5, #48]
	ldrb r0, [r6]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r2
	mov r2, #0
	ldrsh r1, [r0, r2]
	lsl r1, r1, #8
	mov r7, #58
	ldrsh r0, [r5, r7]
	neg r0, r0
	asr r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	mul r1, r0, r1
	ldr r0, [r4, #52]
	sub r0, r0, r1
	sub r0, r0, #6
	str r0, [r5, #52]
	mov r0, r12
	ldrb r1, [r0]
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	beq _0802554C
	mov r2, #58
	ldrsh r1, [r5, r2]
	mov r0, #88
	neg r0, r0
	cmp r1, r0
	bge _08025568
	add r0, r5, #0
	bl sub_080256DC
	b _08025568
	.byte 0x00
	.byte 0x00
_0802553C:
	.4byte gUnknown_03006A30
_08025540:
	.4byte 0xFFFF8000
_08025544:
	.4byte gUnknown_0813E4CC
_08025548:
	.4byte gUnknown_0813C3A4
_0802554C:
	ldr r1, _080255B8  @ =gUnknown_0813C41C
	mov r0, r9
	add r0, r0, #124
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	mov r3, #58
	ldrsh r0, [r5, r3]
	cmp r1, r0
	ble _08025568
	add r0, r5, #0
	bl sub_080256DC
_08025568:
	ldr r1, [r5, #100]
	ldrb r0, [r1, #8]
	cmp r0, #1
	beq _08025572
	b _08025692
_08025572:
	mov r0, #255
	strb r0, [r1, #23]
	add r4, r5, #0
	add r4, r4, #116
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08025588
	b _08025692
_08025588:
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	add r0, r0, #24
	strh r0, [r4]
	ldr r0, [r5, #100]
	ldrb r5, [r0, #10]
	ldr r4, _080255BC  @ =gUnknown_084276B8
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r4
	ldrb r1, [r1]
	ldrb r2, [r6]
	add r2, r2, #4
	asr r2, r2, #3
	mov r0, #31
	and r2, r2, r0
	add r0, r5, #0
	bl sub_0803D520
	b _08025692
_080255B8:
	.4byte gUnknown_0813C41C
_080255BC:
	.4byte gUnknown_084276B8
_080255C0:
	mov r0, #255
	strb r0, [r1, #23]
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080255EE
	mov r0, #60
	strb r0, [r5, #23]
	ldr r0, [r5, #100]
	mov r1, #2
	neg r1, r1
	bl sub_0802C3F0
	ldr r0, [r5, #100]
	add r0, r0, #61
	mov r1, #30
	strb r1, [r0]
	ldr r0, [r5, #100]
	mov r1, #195
	bl sub_0800D1C0
_080255EE:
	ldr r1, _08025610  @ =gUnknown_03005E10
	ldr r0, [r5, #100]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0802561A
	add r0, r5, #0
	add r0, r0, #114
	ldrh r2, [r0]
	add r1, r0, #0
	cmp r2, #7
	bhi _08025614
	strh r4, [r1]
	b _08025624
	.byte 0x00
	.byte 0x00
_08025610:
	.4byte gUnknown_03005E10
_08025614:
	add r0, r2, #0
	sub r0, r0, #8
	b _08025622
_0802561A:
	add r1, r5, #0
	add r1, r1, #114
	ldrh r0, [r1]
	sub r0, r0, #1
_08025622:
	strh r0, [r1]
_08025624:
	ldrh r0, [r1]
	cmp r0, #0
	beq _08025638
	ldr r0, [r5, #100]
	mov r7, #58
	ldrsh r1, [r0, r7]
	mov r0, #8
	neg r0, r0
	cmp r1, r0
	bge _08025640
_08025638:
	add r0, r5, #0
	bl sub_080256DC
	b _08025692
_08025640:
	ldr r4, [r5, #88]
	ldr r2, _080256A0  @ =gUnknown_0813E4CC
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	mov r3, #0
	ldrsh r1, [r0, r3]
	lsl r1, r1, #8
	ldr r3, _080256A4  @ =gUnknown_0813C3A4
	mov r7, #58
	ldrsh r0, [r5, r7]
	neg r0, r0
	asr r0, r0, #2
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r0, [r0]
	mul r1, r0, r1
	ldr r0, [r4, #48]
	add r0, r0, r1
	str r0, [r5, #48]
	ldrb r0, [r6]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r2
	mov r2, #0
	ldrsh r1, [r0, r2]
	lsl r1, r1, #8
	mov r7, #58
	ldrsh r0, [r5, r7]
	neg r0, r0
	asr r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	mul r1, r0, r1
	ldr r0, [r4, #52]
	sub r0, r0, r1
	sub r0, r0, #6
	str r0, [r5, #52]
_08025692:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080256A0:
	.4byte gUnknown_0813E4CC
_080256A4:
	.4byte gUnknown_0813C3A4
	THUMB_FUNC_END sub_08025450

