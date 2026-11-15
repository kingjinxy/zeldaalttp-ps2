	THUMB_FUNC_START sub_08014958
sub_08014958: @ 0x08014958
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	mov r1, #0
	mov r8, r1
	ldm r0!, {r2}
	lsr r4, r2, #16
	mov r1, #7
	and r4, r4, r1
	lsl r4, r4, #24
	lsr r3, r4, #24
	str r3, [sp, #4]
	ldr r7, _080149A8  @ =0x00000FFF
	and r7, r7, r2
	mov r1, #192
	lsl r1, r1, #8
	and r1, r1, r2
	str r1, [sp, #8]
	ldr r0, [r0]
	str r0, [sp]
	add r0, r1, #0
	bl sub_08015DC0
	mov r10, r0
	lsl r0, r7, #1
	add r0, r0, #4
	mov r2, r10
	add r5, r2, r0
	lsr r4, r4, #25
	cmp r4, #1
	beq _08014A88
	cmp r4, #1
	bgt _080149AC
	cmp r4, #0
	beq _080149BA
	b _08014CF8
	.byte 0x00
	.byte 0x00
_080149A8:
	.4byte 0x00000FFF
_080149AC:
	cmp r4, #2
	bne _080149B2
	b _08014B5C
_080149B2:
	cmp r4, #3
	bne _080149B8
	b _08014C34
_080149B8:
	b _08014CF8
_080149BA:
	ldrh r0, [r5]
	ldr r4, [sp]
	add r4, r4, #80
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r6, _08014A78  @ =0x00000141
	cmp r0, r6
	beq _080149F6
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _080149F6
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _080149F6
	sub r5, r5, #2
_080149F6:
	mov r3, #1
	mov r9, r3
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _08014A7C  @ =0x00000145
	cmp r6, r0
	bne _08014A2A
	mov r0, #2
	mov r9, r0
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	bne _08014A2A
	mov r1, #3
	mov r9, r1
	sub r5, r5, #128
_08014A2A:
	sub r0, r5, #4
	mov r2, r10
	sub r0, r0, r2
	lsl r0, r0, #15
	lsr r7, r0, #16
	add r0, r7, #0
	ldr r1, [sp, #8]
	bl 0x0800932C
	lsl r0, r0, #16
	ldr r3, _08014A80  @ =0xFEC60000
	add r0, r0, r3
	lsr r0, r0, #16
	cmp r0, #1
	bls _08014A4A
	b _08014E4E
_08014A4A:
	ldr r1, _08014A84  @ =0x00001FC4
	add r0, r7, r1
	mov r2, r10
	add r1, r2, r0
	mov r2, #0
	mov r3, r9
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r2, r0
	bhi _08014A74
	add r3, r0, #0
_08014A60:
	ldrb r0, [r1]
	cmp r0, #0
	beq _08014A68
	b _08014E4E
_08014A68:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r1, r1, #1
	cmp r2, r3
	bls _08014A60
_08014A74:
	mov r0, #1
	b _08014CF6
_08014A78:
	.4byte 0x00000141
_08014A7C:
	.4byte 0x00000145
_08014A80:
	.4byte 0xFEC60000
_08014A84:
	.4byte 0x00001FC4
_08014A88:
	ldrh r0, [r5]
	ldr r4, [sp]
	add r4, r4, #80
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r6, _08014B50  @ =0x00000141
	cmp r0, r6
	beq _08014AC4
	add r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014AC4
	add r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014AC4
	add r5, r5, #128
_08014AC4:
	mov r1, #1
	mov r9, r1
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _08014B54  @ =0x00000145
	cmp r6, r0
	bne _08014AF8
	mov r2, #2
	mov r9, r2
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	bne _08014AF8
	mov r3, #3
	mov r9, r3
	sub r5, r5, #128
_08014AF8:
	sub r0, r5, #4
	mov r1, r10
	sub r0, r0, r1
	lsl r0, r0, #15
	lsr r7, r0, #16
	add r0, r7, #0
	ldr r1, [sp, #8]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #159
	lsl r0, r0, #1
	cmp r1, r0
	beq _08014B1E
	sub r0, r0, #4
	cmp r1, r0
	beq _08014B1E
	b _08014E4E
_08014B1E:
	mov r2, r9
	add r0, r7, r2
	ldr r3, _08014B58  @ =0x00002005
	add r0, r0, r3
	mov r2, r10
	add r1, r2, r0
	mov r2, #0
	mov r3, r9
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r2, r0
	bhi _08014B4C
	add r3, r0, #0
_08014B38:
	ldrb r0, [r1]
	cmp r0, #0
	beq _08014B40
	b _08014E4E
_08014B40:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r1, r1, #64
	cmp r2, r3
	bls _08014B38
_08014B4C:
	mov r0, #2
	b _08014CF6
_08014B50:
	.4byte 0x00000141
_08014B54:
	.4byte 0x00000145
_08014B58:
	.4byte 0x00002005
_08014B5C:
	ldrh r0, [r5]
	ldr r4, [sp]
	add r4, r4, #80
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r6, #160
	lsl r6, r6, #1
	cmp r0, r6
	beq _08014B9A
	add r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014B9A
	add r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014B9A
	add r5, r5, #2
_08014B9A:
	mov r1, #1
	mov r9, r1
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _08014C2C  @ =0x00000143
	cmp r6, r0
	bne _08014BCE
	mov r2, #2
	mov r9, r2
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	bne _08014BCE
	mov r3, #3
	mov r9, r3
	sub r5, r5, #2
_08014BCE:
	sub r0, r5, #4
	mov r1, r10
	sub r0, r0, r1
	lsl r0, r0, #15
	lsr r7, r0, #16
	add r0, r7, #0
	ldr r1, [sp, #8]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #158
	lsl r0, r0, #1
	cmp r1, r0
	beq _08014BF4
	sub r0, r0, #2
	cmp r1, r0
	beq _08014BF4
	b _08014E4E
_08014BF4:
	mov r0, r9
	add r0, r0, #1
	lsl r0, r0, #6
	add r0, r7, r0
	ldr r2, _08014C30  @ =0x00002004
	add r0, r0, r2
	mov r3, r10
	add r1, r3, r0
	mov r2, #0
	mov r3, r9
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r2, r0
	bhi _08014C26
	add r3, r0, #0
_08014C12:
	ldrb r0, [r1]
	cmp r0, #0
	beq _08014C1A
	b _08014E4E
_08014C1A:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r1, r1, #1
	cmp r2, r3
	bls _08014C12
_08014C26:
	mov r0, #3
	b _08014CF6
	.byte 0x00
	.byte 0x00
_08014C2C:
	.4byte 0x00000143
_08014C30:
	.4byte 0x00002004
_08014C34:
	ldrh r0, [r5]
	ldr r4, [sp]
	add r4, r4, #80
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r6, #160
	lsl r6, r6, #1
	cmp r0, r6
	beq _08014C72
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014C72
	sub r5, r5, #128
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	beq _08014C72
	sub r5, r5, #128
_08014C72:
	mov r1, #1
	mov r9, r1
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _08014D44  @ =0x00000143
	cmp r6, r0
	bne _08014CA6
	mov r2, #2
	mov r9, r2
	sub r5, r5, #2
	ldrh r0, [r5]
	ldrh r1, [r4]
	bl 0x080094CC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, r6
	bne _08014CA6
	mov r3, #3
	mov r9, r3
	sub r5, r5, #2
_08014CA6:
	sub r0, r5, #4
	mov r1, r10
	sub r0, r0, r1
	lsl r0, r0, #15
	lsr r7, r0, #16
	add r0, r7, #0
	ldr r1, [sp, #8]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r0, _08014D48  @ =0x0000013D
	cmp r1, r0
	beq _08014CCA
	sub r0, r0, #3
	cmp r1, r0
	beq _08014CCA
	b _08014E4E
_08014CCA:
	ldr r2, _08014D4C  @ =0x00002003
	add r0, r7, r2
	mov r3, r10
	add r1, r3, r0
	mov r2, #0
	mov r3, r9
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r2, r0
	bhi _08014CF4
	add r3, r0, #0
_08014CE0:
	ldrb r0, [r1]
	cmp r0, #0
	beq _08014CE8
	b _08014E4E
_08014CE8:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r1, r1, #64
	cmp r2, r3
	bls _08014CE0
_08014CF4:
	mov r0, #4
_08014CF6:
	mov r8, r0
_08014CF8:
	mov r3, #0
	ldr r6, _08014D50  @ =gUnknown_0202A030
	mov r2, #0
	ldr r0, _08014D54  @ =gUnknown_02016324
	add r5, r6, #0
	add r4, r0, #0
	ldrb r1, [r4]
	cmp r3, r1
	bcs _08014D32
	ldrb r0, [r6]
	cmp r8, r0
	bne _08014D16
	ldrh r1, [r6, #6]
	cmp r7, r1
	beq _08014D36
_08014D16:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r6, r6, #24
	ldrb r0, [r4]
	cmp r2, r0
	bcs _08014D32
	ldrb r1, [r6]
	cmp r8, r1
	bne _08014D16
	ldrh r0, [r6, #6]
	cmp r7, r0
	bne _08014D16
	mov r3, #1
_08014D32:
	cmp r3, #0
	beq _08014E18
_08014D36:
	ldr r0, [r6, #12]
	cmp r0, #0
	bne _08014D58
	ldr r1, [sp]
	str r1, [r6, #12]
	b _08014D6E
	.byte 0x00
	.byte 0x00
_08014D44:
	.4byte 0x00000143
_08014D48:
	.4byte 0x0000013D
_08014D4C:
	.4byte 0x00002003
_08014D50:
	.4byte gUnknown_0202A030
_08014D54:
	.4byte gUnknown_02016324
_08014D58:
	ldr r0, [r6, #16]
	cmp r0, #0
	bne _08014D64
	ldr r2, [sp]
	str r2, [r6, #16]
	b _08014D6E
_08014D64:
	ldr r0, [r6, #20]
	cmp r0, #0
	bne _08014D6E
	ldr r3, [sp]
	str r3, [r6, #20]
_08014D6E:
	ldrb r0, [r6, #3]
	add r0, r0, #1
	strb r0, [r6, #3]
	ldrb r1, [r6, #2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r1, r0
	bne _08014E4E
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _08014E4E
	mov r0, #6
	strb r0, [r5, #8]
	mov r0, #7
	strb r0, [r5, #9]
	mov r0, r9
	strb r0, [r5, #10]
	ldr r1, [sp, #4]
	lsl r4, r1, #2
	add r0, r5, #0
	add r0, r0, #43
	strb r4, [r0]
	mov r0, #63
	and r0, r0, r7
	lsl r0, r0, #4
	add r0, r0, #8
	strh r0, [r5, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r7
	lsr r0, r0, #2
	add r0, r0, #8
	strh r0, [r5, #54]
	add r0, r5, #0
	add r0, r0, #80
	mov r2, sp
	ldrh r2, [r2, #8]
	strh r2, [r0]
	add r0, r7, #0
	ldr r1, [sp, #8]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [r5, #96]
	mov r0, #6
	add r1, r5, #0
	bl sub_08012728
	mov r2, #0
	add r6, r6, #8
	mov r3, #0
_08014DDA:
	lsl r0, r2, #2
	add r0, r6, r0
	ldr r5, [r0]
	cmp r5, #0
	beq _08014E08
	ldrb r0, [r5, #8]
	cmp r0, #1
	bne _08014E08
	ldrb r1, [r5, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	ldr r1, _08014E14  @ =gUnknown_03006A30
	add r0, r0, r1
	mov r1, #161
	strb r1, [r0, #6]
	mov r1, #5
	strb r1, [r0, #12]
	strh r3, [r5, #48]
	strh r3, [r5, #52]
	add r0, r5, #0
	add r0, r0, #43
	strb r4, [r0]
_08014E08:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #3
	bls _08014DDA
	b _08014E4E
_08014E14:
	.4byte gUnknown_03006A30
_08014E18:
	ldrb r0, [r4]
	add r1, r0, #0
	cmp r1, #7
	bhi _08014E4E
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #3
	add r6, r0, r5
	mov r0, r8
	strb r0, [r6]
	mov r1, sp
	ldrb r1, [r1, #4]
	strb r1, [r6, #1]
	mov r2, r9
	strb r2, [r6, #2]
	strb r3, [r6, #3]
	mov r0, sp
	ldrh r0, [r0, #8]
	strh r0, [r6, #4]
	strh r7, [r6, #6]
	ldr r1, [sp]
	str r1, [r6, #8]
	str r3, [r6, #12]
	str r3, [r6, #16]
	str r3, [r6, #20]
_08014E4E:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08014958

	.byte 0x00
	.byte 0x00
