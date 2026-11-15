	THUMB_FUNC_START sub_080425A0
sub_080425A0: @ 0x080425A0
	push {r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	ldr r0, _080425E0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #8]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #20]
	cmp r1, #2
	beq _080425E4
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08042A70
_080425E0:
	.4byte gUnknown_03006A30
_080425E4:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804260A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804260A:
	ldr r0, [r7]
	ldr r1, [r0, #12]
	cmp r1, #0
	bne _08042614
	b _080429EE
_08042614:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #66
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08042658
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #66
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08042658:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	cmp r1, #1
	beq _0804266A
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	cmp r1, #3
	beq _0804266A
	b _08042672
_0804266A:
	ldr r0, [r7]
	bl 0x08002E64
	b _080426D4
_08042672:
	ldr r0, _080426BC  @ =gUnknown_0813EBCC
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	lsr r2, r1, #2
	add r1, r2, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldr r0, _080426BC  @ =gUnknown_0813EBCC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	lsr r3, r2, #2
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r3, r2, #1
	add r0, r0, r3
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, [r7]
	bl 0x0800934C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #70
	bne _080426C0
	ldr r0, [r7]
	bl sub_0803CC20
	b _080426D4
	.byte 0x00
	.byte 0x00
_080426BC:
	.4byte gUnknown_0813EBCC
_080426C0:
	ldr r0, [r7]
	bl 0x080093A4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #38
	beq _080426D4
	ldr r0, [r7]
	bl 0x08002E64
_080426D4:
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	beq _080426E4
	b _08042948
_080426E4:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	str r2, [r0, #16]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7]
	mov r1, #0
	mov r2, #3
	bl 0x08009394
	add r1, r7, #0
	add r1, r1, #18
	strb r0, [r1]
	add r1, r7, #0
	add r1, r1, #18
	ldrb r0, [r1]
	cmp r0, #32
	bge _08042720
	b _080427DC
_08042720:
	cmp r0, #33
	ble _0804272E
	cmp r0, #37
	bgt _080427DC
	cmp r0, #36
	blt _080427DC
	b _0804272E
_0804272E:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	cmp r1, #1
	beq _080427A6
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	add r1, r7, #0
	add r1, r1, #18
	ldrb r0, [r1]
	cmp r0, #33
	beq _0804276C
	cmp r0, #33
	bgt _08042762
	cmp r0, #32
	beq _08042784
	b _08042790
_08042762:
	cmp r0, #36
	beq _08042784
	cmp r0, #37
	beq _08042778
	b _08042790
_0804276C:
	ldr r0, [r7]
	mov r1, #0
	mov r2, #0
	bl sub_0804CB38
	b _08042790
_08042778:
	ldr r0, [r7]
	mov r1, #12
	mov r2, #0
	bl sub_0804CB38
	b _08042790
_08042784:
	ldr r0, [r7]
	mov r1, #11
	mov r2, #0
	bl sub_0804CB38
	b _08042790
_08042790:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
	b _080427CE
_080427A6:
	add r1, r7, #0
	add r1, r1, #18
	ldrb r0, [r1]
	cmp r0, #33
	beq _080427B6
	cmp r0, #37
	beq _080427B8
	b _080427BA
_080427B6:
	b _080427BA
_080427B8:
	b _080427BA
_080427BA:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
_080427CE:
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08042946
_080427DC:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	ldr r0, [r7]
	cmp r1, r0
	bne _0804287E
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _08042870
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #15
	bne _08042804
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	ldr r0, [r7]
	mov r2, #128
	bl sub_0804CB38
	b _08042870
_08042804:
	bl sub_080123E8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08042870
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r0, #9]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #11]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #9]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #23]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r1, [r7, #4]
	mov r0, #6
	bl sub_08012728
_08042870:
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08042944
_0804287E:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08042898
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	cmp r1, #6
	bne _0804290E
	ldr r0, [r7, #8]
	ldrb r1, [r0, #9]
	cmp r1, #5
	beq _08042898
	b _0804290E
_08042898:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #1
	bne _080428AA
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #10
	bl 0x08003E10
_080428AA:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
	ldr r0, [r7]
	bl 0x08008DD8
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08042944
_0804290E:
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #10
	bl 0x08003E10
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #9
	str r1, [r0, #16]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	asr r1, r2, #1
	str r1, [r0, #12]
_08042944:
	b _08042946
_08042946:
	b _080429EC
_08042948:
	ldr r0, [r7]
	bl 0x0800402C
	ldr r0, [r7]
	bl sub_0803D010
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	str r2, [r0, #16]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080429EC:
	b _08042A70
_080429EE:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08042A2C
	ldr r0, _08042A28  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	mov r1, #194
	bl 0x08003E10
	ldr r0, [r7]
	bl sub_08042A90
	b _08042A70
_08042A28:
	.4byte gUnknown_03006A30
_08042A2C:
	ldr r0, _08042A50  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08042A54
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #113
	ldrb r0, [r1]
	cmp r0, #0
	bne _08042A54
	b _08042A70
_08042A50:
	.4byte gUnknown_03006A30
_08042A54:
	ldr r0, [r7]
	bl sub_08042A90
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #16]
_08042A70:
	add sp, sp, #20
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080425A0

