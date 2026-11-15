	THUMB_FUNC_START sub_08078840
sub_08078840: @ 0x08078840
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	mov r0, sp
	mov r6, #0
	strh r6, [r0]
	ldr r1, _080788EC  @ =gUnknown_02000800
	ldr r2, _080788F0  @ =0x01000200
	bl CpuSet
	ldr r4, _080788F4  @ =gRam
	ldr r0, _080788F8  @ =0x00001651
	add r0, r0, r4
	mov r9, r0
	mov r5, #0
	strb r6, [r0]
	ldr r1, _080788FC  @ =0x00000514
	add r3, r4, r1
	ldrh r2, [r3]
	ldr r1, _08078900  @ =0x0000FFFC
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #3
	orr r0, r0, r2
	strh r0, [r3]
	mov r3, #163
	lsl r3, r3, #3
	add r2, r4, r3
	ldrh r0, [r2]
	and r1, r1, r0
	mov r7, #1
	mov r8, r7
	mov r0, r8
	orr r1, r1, r0
	strh r1, [r2]
	ldr r2, _08078904  @ =0x0000051E
	add r1, r4, r2
	mov r0, #63
	strh r0, [r1]
	ldr r3, _08078908  @ =0x0000099A
	add r1, r4, r3
	mov r0, #31
	strb r0, [r1]
	ldr r7, _0807890C  @ =0x00000998
	add r0, r4, r7
	strb r6, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r6, [r0]
	ldr r1, _08078910  @ =0x000009B2
	add r0, r4, r1
	mov r2, r8
	strb r2, [r0]
	add r3, r3, #126
	add r2, r4, r3
	ldrh r0, [r2]
	cmp r0, #0
	bne _080788C4
	add r1, r1, #20
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r3, _08078914  @ =0x0000165A
	add r0, r4, r3
	strh r1, [r0]
_080788C4:
	ldr r1, _08078918  @ =0x00000A28
	add r0, r4, r1
	strh r5, [r0]
	ldr r3, _0807891C  @ =0x00000A2A
	add r0, r4, r3
	strh r5, [r0]
	strh r5, [r2]
	ldr r5, _08078920  @ =0x00001663
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #4
	beq _080788E6
	ldr r1, _08078924  @ =0x00000B52
	add r0, r4, r1
	ldrh r5, [r0]
	cmp r5, #0
	beq _08078928
_080788E6:
	bl sub_08078F64
	b _08078E64
_080788EC:
	.4byte gUnknown_02000800
_080788F0:
	.4byte 0x01000200
_080788F4:
	.4byte gRam
_080788F8:
	.4byte 0x00001651
_080788FC:
	.4byte 0x00000514
_08078900:
	.4byte 0x0000FFFC
_08078904:
	.4byte 0x0000051E
_08078908:
	.4byte 0x0000099A
_0807890C:
	.4byte 0x00000998
_08078910:
	.4byte 0x000009B2
_08078914:
	.4byte 0x0000165A
_08078918:
	.4byte 0x00000A28
_0807891C:
	.4byte 0x00000A2A
_08078920:
	.4byte 0x00001663
_08078924:
	.4byte 0x00000B52
_08078928:
	ldr r2, _08078A60  @ =0x00000A1C
	add r3, r4, r2
	ldrh r0, [r3]
	cmp r0, r7
	beq _08078934
	b _08078AC8
_08078934:
	ldr r3, _08078A64  @ =0x000009DA
	add r0, r4, r3
	mov r1, #200
	strh r1, [r0]
	ldr r7, _08078A68  @ =0x00000B36
	add r0, r4, r7
	strh r1, [r0]
	ldr r1, _08078A6C  @ =0x00000958
	add r0, r4, r1
	ldr r3, _08078A70  @ =0x00001950
	strh r3, [r0]
	sub r2, r2, #198
	add r0, r4, r2
	strh r3, [r0]
	mov r7, #163
	lsl r7, r7, #4
	add r0, r4, r7
	strh r3, [r0]
	add r1, r1, #218
	add r0, r4, r1
	strh r3, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	ldr r2, _08078A74  @ =0x00001108
	strh r2, [r0]
	sub r7, r7, #224
	add r0, r4, r7
	strh r2, [r0]
	sub r1, r1, #6
	add r0, r4, r1
	strh r2, [r0]
	add r7, r7, #222
	add r0, r4, r7
	strh r2, [r0]
	ldr r0, _08078A78  @ =0x00000B8C
	add r1, r4, r0
	ldr r0, _08078A7C  @ =0x000001A7
	strh r0, [r1]
	add r0, r0, #2
	ldr r7, _08078A80  @ =0x00000B8E
	add r1, r4, r7
	strh r0, [r1]
	mov r0, #185
	lsl r0, r0, #4
	add r1, r4, r0
	ldr r0, _08078A84  @ =0x0000017F
	strh r0, [r1]
	add r0, r0, #2
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	ldr r0, _08078A88  @ =0x00000A0E
	add r1, r4, r0
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r1, _08078A8C  @ =0x00000B84
	add r0, r4, r1
	strh r5, [r0]
	sub r7, r7, #12
	add r1, r4, r7
	mov r0, #168
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r0, _08078A90  @ =0x00000B88
	add r1, r4, r0
	mov r0, #8
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	mov r0, #132
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r0, _08078A94  @ =0x00000B74
	add r1, r4, r0
	mov r0, #200
	lsl r0, r0, #5
	strh r0, [r1]
	sub r7, r7, #20
	add r1, r4, r7
	mov r0, #192
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r1, _08078A98  @ =0x00000B78
	add r0, r4, r1
	strh r3, [r0]
	add r7, r7, #4
	add r0, r4, r7
	strh r3, [r0]
	add r1, r1, #4
	add r0, r4, r1
	strh r2, [r0]
	ldr r3, _08078A9C  @ =0x00000B7E
	add r1, r4, r3
	ldr r0, _08078AA0  @ =0x00001008
	strh r0, [r1]
	add r7, r7, #6
	add r0, r4, r7
	strh r2, [r0]
	ldr r1, _08078AA4  @ =0x00000B82
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _08078AA8  @ =0x000016D5
	add r0, r4, r2
	strb r6, [r0]
	ldr r3, _08078AAC  @ =0x000009DE
	add r0, r4, r3
	strh r5, [r0]
	sub r7, r7, #206
	add r1, r4, r7
	mov r0, #4
	strh r0, [r1]
	ldr r1, _08078AB0  @ =0x0000172C
	add r0, r4, r1
	strb r6, [r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r4, r2
	strb r6, [r0]
	ldr r3, _08078AB4  @ =0x00000B1E
	add r0, r4, r3
	strh r5, [r0]
	mov r5, #158
	lsl r5, r5, #4
	add r0, r4, r5
	strb r6, [r0]
	sub r7, r7, #209
	add r0, r4, r7
	strb r6, [r0]
	ldr r1, _08078AB8  @ =0x000009E3
	add r0, r4, r1
	mov r2, r8
	strb r2, [r0]
	ldr r3, _08078ABC  @ =0x000009E4
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	mov r5, #182
	lsl r5, r5, #5
	add r1, r4, r5
	mov r0, #206
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r6, _08078AC0  @ =0x000016C4
	add r1, r4, r6
	ldr r0, _08078AC4  @ =0x00001178
	strh r0, [r1]
	bl sub_08078EAC
	b _08078E30
_08078A60:
	.4byte 0x00000A1C
_08078A64:
	.4byte 0x000009DA
_08078A68:
	.4byte 0x00000B36
_08078A6C:
	.4byte 0x00000958
_08078A70:
	.4byte 0x00001950
_08078A74:
	.4byte 0x00001108
_08078A78:
	.4byte 0x00000B8C
_08078A7C:
	.4byte 0x000001A7
_08078A80:
	.4byte 0x00000B8E
_08078A84:
	.4byte 0x0000017F
_08078A88:
	.4byte 0x00000A0E
_08078A8C:
	.4byte 0x00000B84
_08078A90:
	.4byte 0x00000B88
_08078A94:
	.4byte 0x00000B74
_08078A98:
	.4byte 0x00000B78
_08078A9C:
	.4byte 0x00000B7E
_08078AA0:
	.4byte 0x00001008
_08078AA4:
	.4byte 0x00000B82
_08078AA8:
	.4byte 0x000016D5
_08078AAC:
	.4byte 0x000009DE
_08078AB0:
	.4byte 0x0000172C
_08078AB4:
	.4byte 0x00000B1E
_08078AB8:
	.4byte 0x000009E3
_08078ABC:
	.4byte 0x000009E4
_08078AC0:
	.4byte 0x000016C4
_08078AC4:
	.4byte 0x00001178
_08078AC8:
	ldrh r1, [r3]
	mov r0, #44
	mul r1, r0, r1
	ldr r0, _08078B60  @ =gUnknown_08150EC4
	add r1, r1, r0
	mov r12, r1
	ldrh r1, [r1]
	ldr r7, _08078B64  @ =0x000009DA
	add r0, r4, r7
	strh r1, [r0]
	mov r0, r12
	ldrh r2, [r0]
	ldr r5, _08078B68  @ =0x00000B36
	add r0, r4, r5
	strh r2, [r0]
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #136
	bne _08078AF4
	mov r7, r8
	mov r6, r9
	strb r7, [r6]
_08078AF4:
	mov r0, r12
	ldrh r1, [r0, #20]
	ldr r2, _08078B6C  @ =0x00000958
	add r0, r4, r2
	strh r1, [r0]
	ldr r5, _08078B70  @ =0x00000956
	add r0, r4, r5
	strh r1, [r0]
	mov r6, #163
	lsl r6, r6, #4
	add r0, r4, r6
	strh r1, [r0]
	ldr r7, _08078B74  @ =0x00000A32
	add r0, r4, r7
	strh r1, [r0]
	mov r0, r12
	ldrh r1, [r0, #18]
	sub r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	sub r5, r5, #6
	add r0, r4, r5
	strh r1, [r0]
	sub r6, r6, #4
	add r0, r4, r6
	strh r1, [r0]
	sub r7, r7, #4
	add r0, r4, r7
	strh r1, [r0]
	mov r0, r12
	ldrh r1, [r0, #22]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	strh r1, [r0]
	mov r5, r12
	ldrh r1, [r5, #24]
	ldr r6, _08078B78  @ =0x000016C4
	add r0, r4, r6
	strh r1, [r0]
	ldrh r1, [r5, #20]
	mov r0, #128
	lsl r0, r0, #6
	cmp r1, r0
	beq _08078C3C
	ldrh r0, [r3]
	add r1, r0, #0
	cmp r1, #89
	bne _08078B80
	ldrh r0, [r5, #26]
	add r0, r0, #64
	ldr r7, _08078B7C  @ =0x00000B8C
	add r1, r4, r7
	b _08078C46
_08078B60:
	.4byte gUnknown_08150EC4
_08078B64:
	.4byte 0x000009DA
_08078B68:
	.4byte 0x00000B36
_08078B6C:
	.4byte 0x00000958
_08078B70:
	.4byte 0x00000956
_08078B74:
	.4byte 0x00000A32
_08078B78:
	.4byte 0x000016C4
_08078B7C:
	.4byte 0x00000B8C
_08078B80:
	sub r0, r0, #92
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #2
	bls _08078B92
	cmp r1, #99
	beq _08078B92
	cmp r1, #113
	bne _08078BA8
_08078B92:
	ldr r0, _08078BA0  @ =gRam
	mov r2, r12
	ldrh r1, [r2, #26]
	add r1, r1, #48
	ldr r3, _08078BA4  @ =0x00000B8C
	add r2, r0, r3
	b _08078C1C
_08078BA0:
	.4byte gRam
_08078BA4:
	.4byte 0x00000B8C
_08078BA8:
	cmp r1, #60
	beq _08078C10
	cmp r1, #107
	beq _08078C10
	cmp r1, #76
	beq _08078C10
	cmp r1, #101
	beq _08078C10
	cmp r1, #13
	beq _08078C10
	cmp r1, #14
	beq _08078C10
	cmp r1, #63
	beq _08078C10
	cmp r1, #62
	beq _08078C10
	cmp r1, #75
	beq _08078C10
	cmp r1, #64
	beq _08078C10
	cmp r1, #68
	beq _08078C10
	cmp r1, #70
	beq _08078C10
	cmp r1, #100
	beq _08078C10
	cmp r1, #1
	beq _08078C10
	cmp r1, #73
	beq _08078C10
	cmp r1, #103
	beq _08078C10
	cmp r1, #15
	beq _08078C10
	cmp r1, #16
	beq _08078C10
	cmp r1, #114
	beq _08078C10
	cmp r1, #81
	beq _08078C10
	cmp r1, #109
	beq _08078C10
	cmp r1, #88
	beq _08078C10
	cmp r1, #111
	beq _08078C10
	cmp r1, #87
	beq _08078C10
	cmp r1, #96
	beq _08078C10
	cmp r1, #136
	bne _08078C2C
_08078C10:
	ldr r0, _08078C24  @ =gRam
	mov r4, r12
	ldrh r1, [r4, #26]
	add r1, r1, #48
	ldr r5, _08078C28  @ =0x00000B8C
	add r2, r0, r5
_08078C1C:
	strh r1, [r2]
	add r3, r0, #0
	b _08078C4A
	.byte 0x00
	.byte 0x00
_08078C24:
	.4byte gRam
_08078C28:
	.4byte 0x00000B8C
_08078C2C:
	mov r6, r12
	ldrh r0, [r6, #26]
	add r0, r0, #32
	ldr r7, _08078C38  @ =0x00000B8C
	add r1, r4, r7
	b _08078C46
_08078C38:
	.4byte 0x00000B8C
_08078C3C:
	mov r1, r12
	ldrh r0, [r1, #26]
	sub r0, r0, #16
	ldr r2, _08078D2C  @ =0x00000B8C
	add r1, r4, r2
_08078C46:
	strh r0, [r1]
	add r3, r4, #0
_08078C4A:
	ldr r4, _08078D2C  @ =0x00000B8C
	add r0, r3, r4
	ldrh r0, [r0]
	add r0, r0, #2
	ldr r5, _08078D30  @ =0x00000B8E
	add r1, r3, r5
	mov r2, #0
	strh r0, [r1]
	mov r6, r12
	ldrh r0, [r6, #28]
	mov r7, #185
	lsl r7, r7, #4
	add r1, r3, r7
	strh r0, [r1]
	add r0, r0, #2
	add r4, r4, #6
	add r1, r3, r4
	strh r0, [r1]
	ldr r5, _08078D34  @ =0x00000A0E
	add r1, r3, r5
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r1]
	ldrh r1, [r6, #38]
	ldr r6, _08078D38  @ =0x00000C08
	add r0, r3, r6
	strh r1, [r0]
	add r7, r7, #122
	add r0, r3, r7
	strh r2, [r0]
	ldr r1, _08078D3C  @ =0x00000B84
	add r0, r3, r1
	strh r2, [r0]
	ldr r2, _08078D40  @ =0x00000B86
	add r1, r3, r2
	mov r0, #168
	lsl r0, r0, #1
	strh r0, [r1]
	sub r4, r4, #10
	add r1, r3, r4
	mov r0, #8
	strh r0, [r1]
	ldr r5, _08078D44  @ =0x00000B8A
	add r1, r3, r5
	mov r0, #132
	lsl r0, r0, #1
	strh r0, [r1]
	mov r6, r12
	ldrh r1, [r6, #2]
	sub r7, r7, #150
	add r0, r3, r7
	strh r1, [r0]
	ldrh r1, [r6, #4]
	sub r2, r2, #16
	add r0, r3, r2
	strh r1, [r0]
	ldrh r1, [r6, #6]
	sub r4, r4, #16
	add r0, r3, r4
	strh r1, [r0]
	ldrh r1, [r6, #8]
	sub r5, r5, #16
	add r0, r3, r5
	strh r1, [r0]
	ldrh r1, [r6, #10]
	ldr r6, _08078D48  @ =0x00000B7C
	add r0, r3, r6
	strh r1, [r0]
	mov r7, r12
	ldrh r1, [r7, #12]
	add r2, r2, #8
	add r0, r3, r2
	strh r1, [r0]
	ldrh r1, [r7, #14]
	add r4, r4, #8
	add r0, r3, r4
	strh r1, [r0]
	ldrh r1, [r7, #16]
	add r5, r5, #8
	add r0, r3, r5
	strh r1, [r0]
	mov r1, #2
	ldr r6, _08078D4C  @ =0x00000A1C
	add r0, r3, r6
	ldrh r0, [r0]
	cmp r0, #0
	beq _08078CFE
	cmp r0, #103
	beq _08078CFE
	mov r1, #0
_08078CFE:
	ldr r7, _08078D50  @ =0x000016D5
	add r0, r3, r7
	strb r1, [r0]
	mov r0, r12
	ldrb r1, [r0, #30]
	ldr r2, _08078D54  @ =0x00000C99
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _08078D4C  @ =0x00000A1C
	add r0, r3, r4
	ldrh r0, [r0]
	cmp r0, #1
	bne _08078D60
	ldr r5, _08078D58  @ =0x0000165E
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _08078D60
	ldr r6, _08078D5C  @ =0x00000A46
	add r1, r3, r6
	mov r0, #3
	b _08078DA6
	.byte 0x00
	.byte 0x00
_08078D2C:
	.4byte 0x00000B8C
_08078D30:
	.4byte 0x00000B8E
_08078D34:
	.4byte 0x00000A0E
_08078D38:
	.4byte 0x00000C08
_08078D3C:
	.4byte 0x00000B84
_08078D40:
	.4byte 0x00000B86
_08078D44:
	.4byte 0x00000B8A
_08078D48:
	.4byte 0x00000B7C
_08078D4C:
	.4byte 0x00000A1C
_08078D50:
	.4byte 0x000016D5
_08078D54:
	.4byte 0x00000C99
_08078D58:
	.4byte 0x0000165E
_08078D5C:
	.4byte 0x00000A46
_08078D60:
	ldr r7, _08078D7C  @ =0x0000165E
	add r0, r3, r7
	ldrb r0, [r0]
	cmp r0, #1
	bne _08078D88
	ldr r1, _08078D80  @ =0x00001661
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #7
	bne _08078D88
	ldr r2, _08078D84  @ =0x00000A46
	add r1, r3, r2
	mov r0, #3
	b _08078DA6
_08078D7C:
	.4byte 0x0000165E
_08078D80:
	.4byte 0x00001661
_08078D84:
	.4byte 0x00000A46
_08078D88:
	mov r4, r12
	ldrh r0, [r4, #40]
	ldr r5, _08078E74  @ =0x00000A46
	add r1, r3, r5
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bne _08078DA8
	ldr r6, _08078E78  @ =0x0000165E
	add r0, r3, r6
	ldrb r0, [r0]
	cmp r0, #1
	bls _08078DA8
	mov r0, #4
_08078DA6:
	strh r0, [r1]
_08078DA8:
	ldr r3, _08078E7C  @ =gRam
	mov r7, r12
	mov r0, #31
	ldrsb r0, [r7, r0]
	ldr r1, _08078E80  @ =0x000009DE
	add r5, r3, r1
	strh r0, [r5]
	mov r0, r12
	add r0, r0, #32
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldr r2, _08078E84  @ =0x00000AB2
	add r0, r3, r2
	strh r1, [r0]
	mov r0, r12
	add r0, r0, #33
	ldrb r1, [r0]
	ldr r4, _08078E88  @ =0x0000172C
	add r0, r3, r4
	strb r1, [r0]
	mov r2, r12
	add r2, r2, #34
	ldrb r0, [r2]
	lsr r0, r0, #4
	mov r6, #161
	lsl r6, r6, #4
	add r1, r3, r6
	strb r0, [r1]
	ldrb r1, [r2]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r1
	ldr r7, _08078E8C  @ =0x00000B1E
	add r1, r3, r7
	strh r0, [r1]
	mov r4, r12
	add r4, r4, #35
	ldrb r0, [r4]
	lsr r0, r0, #4
	sub r6, r6, #48
	add r1, r3, r6
	strb r0, [r1]
	ldrb r1, [r4]
	add r0, r2, #0
	and r0, r0, r1
	ldr r7, _08078E90  @ =0x000009E1
	add r1, r3, r7
	strb r0, [r1]
	add r4, r4, #1
	ldrb r0, [r4]
	lsr r0, r0, #4
	add r6, r6, #3
	add r1, r3, r6
	strb r0, [r1]
	ldrb r0, [r4]
	and r2, r2, r0
	add r7, r7, #3
	add r0, r3, r7
	strb r2, [r0]
	ldr r0, _08078E94  @ =0x000009DA
	add r3, r3, r0
	ldrh r0, [r3]
	cmp r0, #255
	bls _08078E2C
	mov r0, #0
	strh r0, [r5]
_08078E2C:
	bl sub_08078EAC
_08078E30:
	ldr r4, _08078E7C  @ =gRam
	ldr r1, _08078E98  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	sub r0, r0, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _08078E64
	ldr r2, _08078E9C  @ =0x00000A1C
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r3, _08078EA0  @ =0x00001672
	add r0, r4, r3
	strh r1, [r0]
	bl sub_080BE078
	ldr r5, _08078E74  @ =0x00000A46
	add r0, r4, r5
	ldrh r1, [r0]
	ldr r0, _08078EA4  @ =0x0000FFEF
	cmp r1, r0
	bhi _08078E64
	ldr r6, _08078EA8  @ =0x000016AE
	add r0, r4, r6
	strh r1, [r0]
_08078E64:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08078E74:
	.4byte 0x00000A46
_08078E78:
	.4byte 0x0000165E
_08078E7C:
	.4byte gRam
_08078E80:
	.4byte 0x000009DE
_08078E84:
	.4byte 0x00000AB2
_08078E88:
	.4byte 0x0000172C
_08078E8C:
	.4byte 0x00000B1E
_08078E90:
	.4byte 0x000009E1
_08078E94:
	.4byte 0x000009DA
_08078E98:
	.4byte 0x000009AC
_08078E9C:
	.4byte 0x00000A1C
_08078EA0:
	.4byte 0x00001672
_08078EA4:
	.4byte 0x0000FFEF
_08078EA8:
	.4byte 0x000016AE
	THUMB_FUNC_END sub_08078840

