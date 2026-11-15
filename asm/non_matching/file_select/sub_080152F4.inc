	THUMB_FUNC_START sub_080152F4
sub_080152F4: @ 0x080152F4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r5, r0, #0
	add r6, r1, #0
	add r0, r0, #80
	str r0, [sp]
	ldrh r0, [r0]
	bl sub_08015DC0
	mov r10, r0
	mov r1, #42
	add r1, r1, r5
	mov r9, r1
	ldrb r1, [r1]
	mov r0, #6
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _0801537C  @ =gUnknown_0813817C
	add r7, r0, r1
	mov r2, #50
	ldrsh r1, [r5, r2]
	mov r4, #0
	ldrsh r0, [r7, r4]
	add r1, r1, r0
	ldr r3, _08015380  @ =gUnknown_03000450
	ldrh r0, [r3, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r2, #54
	ldrsh r0, [r5, r2]
	mov r4, #2
	ldrsh r2, [r7, r4]
	add r0, r0, r2
	ldrh r2, [r3, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r8, r1
	ldr r0, [sp]
	ldrh r1, [r0]
	mov r0, r8
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r4, #0
	bl 0x080094BC
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #58
	beq _0801544C
	cmp r1, #58
	bgt _08015384
	cmp r1, #41
	bne _08015374
	b _08015520
_08015374:
	cmp r1, #57
	bne _0801537A
	b _080154C6
_0801537A:
	b _080156A8
_0801537C:
	.4byte gUnknown_0813817C
_08015380:
	.4byte gUnknown_03000450
_08015384:
	ldr r0, _08015398  @ =0x00004002
	cmp r1, r0
	beq _080153AC
	cmp r1, r0
	bgt _0801539C
	cmp r1, #91
	bne _08015394
	b _080154F4
_08015394:
	b _080156A8
	.byte 0x00
	.byte 0x00
_08015398:
	.4byte 0x00004002
_0801539C:
	ldr r0, _080153A8  @ =0x00004009
	cmp r1, r0
	bne _080153A4
	b _08015564
_080153A4:
	b _080156A8
	.byte 0x00
	.byte 0x00
_080153A8:
	.4byte 0x00004009
_080153AC:
	add r0, r6, #0
	add r0, r0, #53
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _080153C0
	b _080156A8
_080153C0:
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	bne _080153CC
	b _080156A8
_080153CC:
	ldr r0, _08015440  @ =gUnknown_08137B90
	mov r2, r9
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r0
	mov r4, #0
	ldrsh r2, [r1, r4]
	add r2, r2, r8
	ldr r0, _08015444  @ =0x00002004
	add r0, r0, r10
	add r0, r0, r2
	ldrb r4, [r0]
	ldrh r0, [r1]
	add r0, r0, r8
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, [sp]
	ldrh r1, [r2]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl 0x080094BC
	lsl r0, r0, #16
	lsr r1, r0, #16
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #30
	bls _080154F0
	cmp r1, #87
	beq _080154F0
	mov r4, r8
	lsl r0, r4, #1
	mov r1, r10
	add r1, r1, #4
	add r1, r1, r0
	mov r2, r9
	ldrb r0, [r2]
	lsr r0, r0, #1
	ldr r4, _08015448  @ =0x00004003
	add r0, r0, r4
	strh r0, [r1]
	mov r0, #160
	strb r0, [r6, #6]
	mov r0, #5
	strb r0, [r6, #12]
	ldrh r1, [r6, #54]
	mov r0, #1
	orr r0, r0, r1
	strh r0, [r6, #54]
	strh r7, [r5, #48]
	strh r7, [r5, #52]
	ldrb r0, [r2]
	b _080155F0
	.byte 0x00
	.byte 0x00
_08015440:
	.4byte gUnknown_08137B90
_08015444:
	.4byte 0x00002004
_08015448:
	.4byte 0x00004003
_0801544C:
	add r0, r6, #0
	add r0, r0, #53
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801545C
	b _080156A8
_0801545C:
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	bne _08015468
	b _080156A8
_08015468:
	add r0, r5, #0
	bl sub_0802C6E8
	lsl r0, r0, #24
	cmp r0, #0
	bne _08015476
	b _080156A8
_08015476:
	ldr r1, [sp]
	ldrh r0, [r1]
	lsr r0, r0, #14
	cmp r0, #2
	beq _0801548E
	mov r2, #128
	lsl r2, r2, #7
	mov r0, #47
	mov r1, r8
	bl sub_08014658
	b _0801549A
_0801548E:
	mov r2, #128
	lsl r2, r2, #8
	mov r0, #88
	mov r1, r8
	bl sub_08014658
_0801549A:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	bne _080154AC
	b _080156A8
_080154AC:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldrh r0, [r7]
	ldrh r2, [r4, #50]
	add r0, r0, r2
	strh r0, [r4, #50]
	ldrh r0, [r7, #2]
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
	b _080156A8
_080154C6:
	add r0, r6, #0
	add r0, r0, #53
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080154D6
	b _080156A8
_080154D6:
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	bne _080154E2
	b _080156A8
_080154E2:
	lsl r1, r1, #26
	lsr r1, r1, #24
	add r0, r5, #0
	add r2, r4, #0
	mov r3, r8
	bl sub_080157F8
_080154F0:
	mov r0, #2
	b _080156AA
_080154F4:
	add r0, r6, #0
	add r0, r0, #53
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08015504
	b _080156A8
_08015504:
	add r0, r5, #0
	bl sub_0802C6E8
	lsl r0, r0, #24
	cmp r0, #0
	bne _08015512
	b _080156A8
_08015512:
	add r0, r5, #0
	add r1, r6, #0
	mov r2, r10
	bl sub_08015964
	mov r0, #1
	b _080156AA
_08015520:
	ldr r0, _08015558  @ =gNewKeys
	ldrh r1, [r0]
	ldr r0, _0801555C  @ =0x00000101
	and r0, r0, r1
	cmp r0, #0
	bne _0801552E
	b _080156A8
_0801552E:
	mov r2, r9
	ldrb r0, [r2]
	cmp r0, #0
	beq _08015538
	b _080156A8
_08015538:
	ldr r2, _08015560  @ =gUnknown_03006A30
	ldrb r1, [r5, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #1
	strb r1, [r0, #26]
	ldr r4, [sp]
	ldrh r2, [r4]
	add r0, r5, #0
	mov r1, r8
	bl sub_08013E0C
	mov r0, #1
	b _080156AA
_08015558:
	.4byte gNewKeys
_0801555C:
	.4byte 0x00000101
_08015560:
	.4byte gUnknown_03006A30
_08015564:
	ldr r1, _080155FC  @ =gUnknown_08137B90
	mov r2, r9
	ldrb r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r7, [r0]
	add r0, r6, #0
	add r0, r0, #53
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0801560C
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801560C
	mov r4, r8
	add r0, r4, r7
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r0, [sp]
	ldrh r1, [r0]
	add r0, r4, #0
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl 0x080094BC
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r2, _08015600  @ =0xFFB90000
	add r0, r0, r2
	lsr r0, r0, #16
	cmp r0, #1
	bls _080156A8
	cmp r1, #87
	beq _080156A8
	ldr r0, _08015604  @ =0x00002004
	add r0, r0, r10
	add r0, r0, r4
	ldrb r4, [r0]
	cmp r4, #0
	bne _080156A8
	mov r1, r8
	lsl r0, r1, #1
	mov r1, r10
	add r1, r1, #4
	add r1, r1, r0
	mov r2, r9
	ldrb r0, [r2]
	lsr r0, r0, #1
	ldr r2, _08015608  @ =0x0000400A
	add r0, r0, r2
	strh r0, [r1]
	mov r0, #160
	strb r0, [r6, #6]
	mov r0, #5
	strb r0, [r6, #12]
	ldrh r1, [r6, #54]
	mov r0, #1
	orr r0, r0, r1
	strh r0, [r6, #54]
	strh r4, [r5, #48]
	strh r4, [r5, #52]
	mov r4, r9
	ldrb r0, [r4]
_080155F0:
	lsl r0, r0, #2
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	b _080154F0
	.byte 0x00
	.byte 0x00
_080155FC:
	.4byte gUnknown_08137B90
_08015600:
	.4byte 0xFFB90000
_08015604:
	.4byte 0x00002004
_08015608:
	.4byte 0x0000400A
_0801560C:
	ldrb r0, [r6, #5]
	cmp r0, #1
	bne _080156A8
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _080156A8
	mov r1, r8
	sub r0, r1, r7
	lsl r0, r0, #16
	lsr r4, r0, #16
	sub r0, r4, r7
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r5, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r4, #0
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl 0x080094BC
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r2, _0801569C  @ =0xFFB90000
	add r0, r0, r2
	lsr r0, r0, #16
	cmp r0, #1
	bls _080156A8
	cmp r1, #87
	beq _080156A8
	ldr r0, _080156A0  @ =0x00002004
	add r0, r0, r10
	add r1, r0, r4
	ldrb r4, [r1]
	add r0, r0, r7
	ldrb r0, [r0]
	cmp r4, #0
	bne _080156A8
	cmp r0, #0
	bne _080156A8
	mov r1, r8
	lsl r0, r1, #1
	mov r1, r10
	add r1, r1, #4
	add r1, r1, r0
	ldr r2, _080156A4  @ =gUnknown_0813818C
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #16
	strb r0, [r6, #12]
	add r1, r6, #0
	add r1, r1, #56
	mov r0, #32
	strb r0, [r1]
	ldrh r1, [r6, #54]
	mov r0, #1
	orr r0, r0, r1
	strh r0, [r6, #54]
	strh r4, [r5, #48]
	strh r4, [r5, #52]
	b _080154F0
	.byte 0x00
	.byte 0x00
_0801569C:
	.4byte 0xFFB90000
_080156A0:
	.4byte 0x00002004
_080156A4:
	.4byte gUnknown_0813818C
_080156A8:
	mov r0, #0
_080156AA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080152F4

	.byte 0x00
	.byte 0x00
