	THUMB_FUNC_START sub_080B577C
sub_080B577C: @ 0x080B577C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r3, _080B585C  @ =gRam
	ldr r1, _080B5860  @ =gUnknown_0816F702
	ldr r2, _080B5864  @ =0x00000AB2
	add r0, r3, r2
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #240
	and r0, r0, r1
	lsr r7, r0, #4
	ldr r4, _080B5868  @ =0x00000964
	add r5, r3, r4
	strb r7, [r5]
	mov r0, #15
	and r0, r0, r1
	ldr r1, _080B586C  @ =0x00000965
	add r2, r3, r1
	strb r0, [r2]
	mov r4, #7
	mov r1, #0
	ldrsb r1, [r5, r1]
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r1, r1, r0
	add r6, r3, #0
	ldr r2, _080B5870  @ =gUnknown_0816F094
	cmp r1, #8
	beq _080B581C
	cmp r7, #3
	bgt _080B581C
	ldrb r3, [r5]
	mov r4, #6
	ldr r0, _080B5874  @ =0x00000968
	add r1, r6, r0
	mov r0, #3
	strb r0, [r1]
	cmp r3, #3
	beq _080B57EE
_080B57D8:
	sub r4, r4, #1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B57EE
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r3, r0
	bne _080B57D8
_080B57EE:
	ldr r1, _080B586C  @ =0x00000965
	add r3, r6, r1
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r0, #4
	ble _080B581C
	ldrb r3, [r3]
	ldr r0, _080B5874  @ =0x00000968
	add r1, r6, r0
	mov r0, #5
	strb r0, [r1]
	cmp r3, #5
	beq _080B581C
_080B5808:
	add r4, r4, #1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	cmp r3, #8
	beq _080B581C
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r3, r0
	bne _080B5808
_080B581C:
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, #210
	ldr r1, _080B5874  @ =0x00000968
	add r3, r6, r1
	strb r0, [r3]
	ldr r4, _080B5868  @ =0x00000964
	add r2, r6, r4
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	ldr r0, _080B586C  @ =0x00000965
	add r1, r6, r0
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	add r4, r4, #42
	add r0, r6, r4
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bls _080B5852
	bl _080B5FC4
_080B5852:
	lsl r0, r0, #2
	ldr r1, _080B5878  @ =0x080B587C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080B585C:
	.4byte gRam
_080B5860:
	.4byte gUnknown_0816F702
_080B5864:
	.4byte 0x00000AB2
_080B5868:
	.4byte 0x00000964
_080B586C:
	.4byte 0x00000965
_080B5870:
	.4byte gUnknown_0816F094
_080B5874:
	.4byte 0x00000968
_080B5878:
	.4byte _080B5878+0x4
	.4byte _080B5890
	.4byte _080B59C8
	.4byte _080B5B58
	.4byte _080B5CDC
	.4byte _080B5E4C
_080B5890:
	ldr r0, _080B5920  @ =gUnknown_03002B94
	mov r8, r0
	mov r6, r8
	sub r6, r6, #4
	mov r7, r8
	add r7, r7, #4
	mov r1, #6
	mov r9, r1
	mov r5, #0
	ldr r2, _080B5924  @ =gUnknown_0816F0E0
	mov r10, r2
_080B58A6:
	mov r3, r8
	mov r1, #0
	ldrsb r1, [r3, r1]
	cmp r1, #0
	bge _080B592C
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r9
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r1, r8
	ldrb r0, [r1]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r10
	ldrb r0, [r0]
	mov r2, #128
	lsl r2, r2, #2
	add r4, r0, r2
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r9
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	ldr r3, _080B5928  @ =0x0000022D
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #3
	b _080B599C
	.byte 0x00
	.byte 0x00
_080B5920:
	.4byte gUnknown_03002B94
_080B5924:
	.4byte gUnknown_0816F0E0
_080B5928:
	.4byte 0x0000022D
_080B592C:
	cmp r1, #0
	bne _080B5950
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r1, [sp, #4]
	str r1, [sp, #8]
	str r1, [sp, #12]
	mov r1, #40
	ldr r3, _080B594C  @ =0x0000026F
	bl sub_080B35E0
	b _080B597C
_080B594C:
	.4byte 0x0000026F
_080B5950:
	mov r4, r8
	mov r0, #0
	ldrsb r0, [r4, r0]
	sub r0, r0, #1
	add r0, r0, r10
	ldrb r0, [r0]
	mov r1, #128
	lsl r1, r1, #2
	add r4, r0, r1
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #40
	add r3, r4, #0
	bl sub_080B35E0
_080B597C:
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r9
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #48
	ldr r3, _080B59C0  @ =0x0000022D
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #2
_080B599C:
	strb r0, [r6]
	ldrb r0, [r7]
	add r0, r0, #16
	strb r0, [r7]
	mov r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	ldr r2, _080B59C4  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B59BE
	b _080B58A6
_080B59BE:
	b _080B60C4
_080B59C0:
	.4byte 0x0000022D
_080B59C4:
	.4byte gUnknown_03002B95
_080B59C8:
	ldr r3, _080B5A54  @ =gUnknown_03002B94
	mov r9, r3
	mov r7, r9
	sub r7, r7, #4
	mov r6, r9
	add r6, r6, #4
	mov r4, #6
	mov r8, r4
	ldr r0, _080B5A58  @ =gUnknown_0816F0E0
	mov r10, r0
	mov r5, #0
_080B59DE:
	mov r1, r9
	ldrb r0, [r1]
	mov r4, #0
	ldrsb r4, [r1, r4]
	cmp r4, #0
	bge _080B5A5C
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r10
	ldrb r0, [r0]
	mov r2, #128
	lsl r2, r2, #2
	add r4, r0, r2
	mov r0, #0
	ldrsb r0, [r7, r0]
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r4, #155
	lsl r4, r4, #2
	mov r1, r8
	str r1, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	add r3, r4, #0
	bl sub_080B35E0
	b _080B5B24
	.byte 0x00
	.byte 0x00
_080B5A54:
	.4byte gUnknown_03002B94
_080B5A58:
	.4byte gUnknown_0816F0E0
_080B5A5C:
	cmp r4, #0
	bne _080B5AC0
	mov r0, #0
	ldrsb r0, [r7, r0]
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r1, r8
	str r1, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r3, r8
	str r3, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #44
	ldr r3, _080B5AB8  @ =0x0000026D
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r1, r8
	str r1, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #52
	ldr r3, _080B5ABC  @ =0x0000022D
	bl sub_080B35E0
	b _080B5B24
	.byte 0x00
	.byte 0x00
_080B5AB8:
	.4byte 0x0000026D
_080B5ABC:
	.4byte 0x0000022D
_080B5AC0:
	mov r2, r9
	mov r0, #0
	ldrsb r0, [r2, r0]
	sub r0, r0, #1
	add r0, r0, r10
	ldrb r0, [r0]
	mov r3, #128
	lsl r3, r3, #2
	add r4, r0, r3
	mov r0, #0
	ldrsb r0, [r7, r0]
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r1, r8
	str r1, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	ldr r3, _080B5B4C  @ =0x0000026E
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r7, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r6, r2]
	mov r4, r8
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	ldr r3, _080B5B50  @ =0x0000026F
	bl sub_080B35E0
_080B5B24:
	ldrb r0, [r7]
	add r0, r0, #3
	strb r0, [r7]
	ldrb r0, [r6]
	add r0, r0, #16
	strb r0, [r6]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	ldr r2, _080B5B54  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B5B4A
	b _080B59DE
_080B5B4A:
	b _080B60C4
_080B5B4C:
	.4byte 0x0000026E
_080B5B50:
	.4byte 0x0000026F
_080B5B54:
	.4byte gUnknown_03002B95
_080B5B58:
	ldr r3, _080B5BF4  @ =gRam
	mov r4, #150
	lsl r4, r4, #4
	add r3, r3, r4
	mov r10, r3
	mov r0, #0
	mov r9, r0
_080B5B66:
	ldr r1, _080B5BF8  @ =gUnknown_03002B94
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080B5C08
	mov r2, r10
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r3, _080B5BFC  @ =gUnknown_03002B98
	mov r2, #0
	ldrsb r2, [r3, r2]
	mov r4, #6
	str r4, [sp]
	mov r1, r9
	str r1, [sp, #4]
	str r1, [sp, #8]
	str r1, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r2, r10
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r0, r0, #1
	ldr r3, _080B5BFC  @ =gUnknown_03002B98
	mov r2, #0
	ldrsb r2, [r3, r2]
	str r4, [sp]
	mov r4, r9
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #44
	ldr r3, _080B5C00  @ =0x0000026E
	bl sub_080B35E0
	ldr r1, _080B5C04  @ =gUnknown_0816F0E0
	ldr r2, _080B5BF8  @ =gUnknown_03002B94
	ldrb r0, [r2]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r1
	ldrb r0, [r0]
	mov r3, #128
	lsl r3, r3, #2
	add r4, r0, r3
	mov r1, r10
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #2
	ldr r3, _080B5BFC  @ =gUnknown_03002B98
	mov r2, #0
	ldrsb r2, [r3, r2]
	mov r1, #6
	str r1, [sp]
	mov r3, r9
	str r3, [sp, #4]
	str r3, [sp, #8]
	str r3, [sp, #12]
	mov r1, #52
	add r3, r4, #0
	bl sub_080B35E0
	mov r4, r10
	ldrb r0, [r4]
	add r0, r0, #3
	strb r0, [r4]
	b _080B5CA8
_080B5BF4:
	.4byte gRam
_080B5BF8:
	.4byte gUnknown_03002B94
_080B5BFC:
	.4byte gUnknown_03002B98
_080B5C00:
	.4byte 0x0000026E
_080B5C04:
	.4byte gUnknown_0816F0E0
_080B5C08:
	ldr r0, _080B5C5C  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r6, r0, r1
	mov r0, #0
	ldrsb r0, [r6, r0]
	ldr r2, _080B5C5C  @ =gRam
	ldr r3, _080B5C60  @ =0x00000968
	add r7, r2, r3
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, #6
	mov r8, r4
	str r4, [sp]
	mov r5, #0
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #40
	ldr r3, _080B5C64  @ =0x0000026F
	bl sub_080B35E0
	ldr r1, _080B5C68  @ =gUnknown_03002B94
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _080B5C70
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #48
	ldr r3, _080B5C6C  @ =0x0000026E
	bl sub_080B35E0
	b _080B5CA0
	.byte 0x00
	.byte 0x00
_080B5C5C:
	.4byte gRam
_080B5C60:
	.4byte 0x00000968
_080B5C64:
	.4byte 0x0000026F
_080B5C68:
	.4byte gUnknown_03002B94
_080B5C6C:
	.4byte 0x0000026E
_080B5C70:
	ldr r1, _080B5CCC  @ =gUnknown_0816F0E0
	ldr r2, _080B5CD0  @ =gUnknown_03002B94
	mov r0, #0
	ldrsb r0, [r2, r0]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	mov r3, #128
	lsl r3, r3, #2
	add r4, r0, r3
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r1, r8
	str r1, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #48
	add r3, r4, #0
	bl sub_080B35E0
_080B5CA0:
	mov r2, r10
	ldrb r0, [r2]
	add r0, r0, #2
	strb r0, [r2]
_080B5CA8:
	ldr r3, _080B5CD4  @ =gUnknown_03002B98
	ldrb r0, [r3]
	add r0, r0, #16
	strb r0, [r3]
	ldr r4, _080B5CD0  @ =gUnknown_03002B94
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, #1
	ldr r2, _080B5CD8  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B5CCA
	b _080B5B66
_080B5CCA:
	b _080B60C4
_080B5CCC:
	.4byte gUnknown_0816F0E0
_080B5CD0:
	.4byte gUnknown_03002B94
_080B5CD4:
	.4byte gUnknown_03002B98
_080B5CD8:
	.4byte gUnknown_03002B95
_080B5CDC:
	ldr r3, _080B5D60  @ =gUnknown_03002B94
	mov r9, r3
	mov r6, r9
	sub r6, r6, #4
	mov r7, r9
	add r7, r7, #4
	mov r4, #6
	mov r8, r4
	ldr r0, _080B5D64  @ =gUnknown_0816F0E0
	mov r10, r0
	mov r5, #0
_080B5CF2:
	mov r1, r9
	ldrb r0, [r1]
	mov r4, #0
	ldrsb r4, [r1, r4]
	cmp r4, #0
	bge _080B5D6C
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r10
	ldrb r0, [r0]
	mov r2, #128
	lsl r2, r2, #2
	add r4, r0, r2
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r1, r8
	str r1, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	ldr r3, _080B5D68  @ =0x0000026E
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	add r3, r4, #0
	b _080B5E12
_080B5D60:
	.4byte gUnknown_03002B94
_080B5D64:
	.4byte gUnknown_0816F0E0
_080B5D68:
	.4byte 0x0000026E
_080B5D6C:
	cmp r4, #0
	bne _080B5DB4
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r1, r8
	str r1, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #40
	ldr r3, _080B5DAC  @ =0x0000022D
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #48
	ldr r3, _080B5DB0  @ =0x0000026E
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #2
	b _080B5E1A
_080B5DAC:
	.4byte 0x0000022D
_080B5DB0:
	.4byte 0x0000026E
_080B5DB4:
	mov r4, r9
	mov r0, #0
	ldrsb r0, [r4, r0]
	sub r0, r0, #1
	add r0, r0, r10
	ldrb r0, [r0]
	mov r1, #128
	lsl r1, r1, #2
	add r4, r0, r1
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r8
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	ldr r3, _080B5E40  @ =0x0000026E
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	ldr r3, _080B5E44  @ =0x0000026F
_080B5E12:
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #3
_080B5E1A:
	strb r0, [r6]
	ldrb r0, [r7]
	add r0, r0, #16
	strb r0, [r7]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	ldr r2, _080B5E48  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B5E3C
	b _080B5CF2
_080B5E3C:
	b _080B60C4
	.byte 0x00
	.byte 0x00
_080B5E40:
	.4byte 0x0000026E
_080B5E44:
	.4byte 0x0000026F
_080B5E48:
	.4byte gUnknown_03002B95
_080B5E4C:
	ldr r3, _080B5EDC  @ =gUnknown_03002B94
	mov r9, r3
	mov r6, r9
	sub r6, r6, #4
	mov r7, r9
	add r7, r7, #4
	mov r4, #6
	mov r8, r4
	ldr r0, _080B5EE0  @ =gUnknown_0816F0E0
	mov r10, r0
	mov r5, #0
_080B5E62:
	mov r1, r9
	ldrb r0, [r1]
	mov r4, #0
	ldrsb r4, [r1, r4]
	cmp r4, #0
	bge _080B5EE8
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r10
	ldrb r0, [r0]
	mov r2, #128
	lsl r2, r2, #2
	add r4, r0, r2
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r1, r8
	str r1, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	ldr r3, _080B5EE4  @ =0x0000026E
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	add r3, r4, #0
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #3
	strb r0, [r6]
	b _080B5F94
	.byte 0x00
	.byte 0x00
_080B5EDC:
	.4byte gUnknown_03002B94
_080B5EE0:
	.4byte gUnknown_0816F0E0
_080B5EE4:
	.4byte 0x0000026E
_080B5EE8:
	cmp r4, #0
	bne _080B5F30
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r1, r8
	str r1, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #40
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	mov r1, #48
	ldr r3, _080B5F2C  @ =0x0000022D
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #2
	strb r0, [r6]
	b _080B5F94
_080B5F2C:
	.4byte 0x0000022D
_080B5F30:
	mov r4, r9
	mov r0, #0
	ldrsb r0, [r4, r0]
	sub r0, r0, #1
	add r0, r0, r10
	ldrb r0, [r0]
	mov r1, #128
	lsl r1, r1, #2
	add r4, r0, r1
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r8
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r8
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	ldr r3, _080B5FBC  @ =0x0000026F
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
_080B5F94:
	ldrb r0, [r6]
	add r0, r0, #3
	strb r0, [r6]
	ldrb r0, [r7]
	add r0, r0, #16
	strb r0, [r7]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	ldr r2, _080B5FC0  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B5FBA
	b _080B5E62
_080B5FBA:
	b _080B60C4
_080B5FBC:
	.4byte 0x0000026F
_080B5FC0:
	.4byte gUnknown_03002B95
_080B5FC4:
	mov r8, r2
	mov r4, #150
	lsl r4, r4, #4
	add r6, r6, r4
	add r7, r3, #0
	mov r0, #6
	mov r9, r0
	mov r5, #0
	ldr r1, _080B6050  @ =gUnknown_0816F0E0
	mov r10, r1
_080B5FD8:
	mov r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _080B6058
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #36
	mov r3, #139
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r4, r8
	ldrb r0, [r4]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r10
	ldrb r0, [r0]
	mov r1, #128
	lsl r1, r1, #2
	add r4, r0, r1
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #44
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #2
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r9
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #52
	ldr r3, _080B6054  @ =0x0000022D
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #3
	b _080B60A2
_080B6050:
	.4byte gUnknown_0816F0E0
_080B6054:
	.4byte 0x0000022D
_080B6058:
	mov r1, r8
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r10
	ldrb r0, [r0]
	mov r2, #128
	lsl r2, r2, #2
	add r4, r0, r2
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r3, r9
	str r3, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #40
	add r3, r4, #0
	bl sub_080B35E0
	mov r0, #0
	ldrsb r0, [r6, r0]
	add r0, r0, #1
	mov r2, #0
	ldrsb r2, [r7, r2]
	mov r4, r9
	str r4, [sp]
	str r5, [sp, #4]
	str r5, [sp, #8]
	str r5, [sp, #12]
	mov r1, #48
	ldr r3, _080B60D4  @ =0x0000022D
	bl sub_080B35E0
	ldrb r0, [r6]
	add r0, r0, #2
_080B60A2:
	strb r0, [r6]
	ldrb r0, [r7]
	add r0, r0, #16
	strb r0, [r7]
	mov r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	ldr r2, _080B60D8  @ =gUnknown_03002B95
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r0, r1
	beq _080B60C4
	b _080B5FD8
_080B60C4:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B60D4:
	.4byte 0x0000022D
_080B60D8:
	.4byte gUnknown_03002B95
	THUMB_FUNC_END sub_080B577C

