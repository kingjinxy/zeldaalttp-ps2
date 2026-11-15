	THUMB_FUNC_START sub_080E1738
sub_080E1738: @ 0x080E1738
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	ldr r0, _080E1800  @ =gRam
	mov r8, r0
	ldr r0, _080E1804  @ =0x00000F82
	add r0, r0, r8
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080E175C
	b _080E1A18
_080E175C:
	mov r5, #0
	mov r10, r5
	mov r7, #1
	ldr r0, _080E1808  @ =0x00000F22
	add r0, r0, r8
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080E1772
	mov r5, #255
_080E1772:
	ldrb r1, [r1]
	ldr r3, _080E180C  @ =0x00000EE2
	add r3, r3, r8
	add r3, r4, r3
	ldrb r0, [r3]
	add r1, r1, r0
	ldr r2, _080E1810  @ =0x00000F02
	add r2, r2, r8
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r5, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	mov r5, #0
	ldr r0, _080E1814  @ =0x00000F12
	add r0, r0, r8
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080E17A6
	mov r5, #255
_080E17A6:
	ldrb r1, [r1]
	ldr r3, _080E1818  @ =0x00000ED2
	add r3, r3, r8
	add r3, r4, r3
	ldrb r0, [r3]
	add r1, r1, r0
	ldr r2, _080E181C  @ =0x00000EF2
	add r2, r2, r8
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r5, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldrb r0, [r6]
	add r0, r0, r8
	ldr r1, _080E1820  @ =0x00000FF1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #206
	bne _080E17D8
	b _080E18E4
_080E17D8:
	mov r5, #0
	add r0, r4, #0
	bl sub_080E2210
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E1834
	ldr r0, _080E1824  @ =0x000015E2
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #9
	beq _080E182C
	ldr r0, _080E1828  @ =0x00000FA2
	add r0, r0, r8
	add r0, r4, r0
	mov r2, r10
	strb r2, [r0]
	mov r7, #0
	b _080E182E
	.byte 0x00
	.byte 0x00
_080E1800:
	.4byte gRam
_080E1804:
	.4byte 0x00000F82
_080E1808:
	.4byte 0x00000F22
_080E180C:
	.4byte 0x00000EE2
_080E1810:
	.4byte 0x00000F02
_080E1814:
	.4byte 0x00000F12
_080E1818:
	.4byte 0x00000ED2
_080E181C:
	.4byte 0x00000EF2
_080E1820:
	.4byte 0x00000FF1
_080E1824:
	.4byte 0x000015E2
_080E1828:
	.4byte 0x00000FA2
_080E182C:
	mov r5, #1
_080E182E:
	cmp r5, #0
	bne _080E1834
	b _080E194A
_080E1834:
	ldr r3, _080E1850  @ =gRam
	ldr r4, _080E1854  @ =0x00001710
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E185C
	ldr r1, _080E1858  @ =0x00000FA2
	add r0, r3, r1
	add r0, r0, r9
	mov r1, #0
	strb r1, [r0]
	mov r7, #0
	b _080E194A
	.byte 0x00
	.byte 0x00
_080E1850:
	.4byte gRam
_080E1854:
	.4byte 0x00001710
_080E1858:
	.4byte 0x00000FA2
_080E185C:
	ldr r2, _080E18D0  @ =0x00001622
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r4, _080E18D4  @ =0x00001623
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r2, #162
	add r0, r3, r2
	ldrb r2, [r0]
	add r4, r4, #162
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #15
	bhi _080E194A
	ldr r1, _080E18D8  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080E18DC  @ =0x00001625
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r4, r4, #5
	add r0, r3, r4
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #15
	bhi _080E194A
	ldr r1, _080E18E0  @ =0x000010F2
	add r0, r3, r1
	add r0, r0, r9
	mov r2, #161
	lsl r2, r2, #4
	add r1, r3, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080E194A
	b _080E1950
	.byte 0x00
	.byte 0x00
_080E18D0:
	.4byte 0x00001622
_080E18D4:
	.4byte 0x00001623
_080E18D8:
	.4byte 0x00001624
_080E18DC:
	.4byte 0x00001625
_080E18E0:
	.4byte 0x000010F2
_080E18E4:
	ldr r0, _080E19DC  @ =0x00001622
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r0, _080E19E0  @ =0x00001623
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080E19E4  @ =0x000016C4
	add r0, r0, r8
	ldrb r2, [r0]
	ldr r0, _080E19E8  @ =0x000016C5
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080E194A
	ldr r0, _080E19EC  @ =0x00001624
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r0, _080E19F0  @ =0x00001625
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrb r2, [r0]
	ldr r0, _080E19F4  @ =0x000016C1
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080E194A
	mov r3, #1
	mov r10, r3
_080E194A:
	mov r4, r10
	cmp r4, #0
	beq _080E199E
_080E1950:
	ldr r1, _080E19F8  @ =gRam
	ldr r2, _080E19FC  @ =0x00000F82
	add r0, r1, r2
	add r0, r0, r9
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080E1A00  @ =0x00000F52
	add r0, r1, r3
	add r3, r2, r0
	ldrb r0, [r3]
	add r4, r1, #0
	cmp r0, #3
	beq _080E1992
	mov r0, #3
	strb r0, [r3]
	ldr r1, _080E1A04  @ =0x00000FF2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #206
	beq _080E1992
	ldr r3, _080E1A08  @ =0x00000FC2
	add r0, r4, r3
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080E1A0C  @ =0x00001052
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
_080E1992:
	ldr r2, _080E1A10  @ =0x00000FA2
	add r0, r4, r2
	add r0, r0, r9
	mov r1, #0
	strb r1, [r0]
	mov r7, #0
_080E199E:
	cmp r7, #0
	bne _080E19A4
	b _080E1BA2
_080E19A4:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080E19BA
	b _080E1BA2
_080E19BA:
	ldr r2, _080E19F8  @ =gRam
	ldr r4, _080E1A14  @ =0x00000961
	add r0, r2, r4
	add r4, r4, #4
	add r1, r2, r4
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080E19D0
	b _080E1BA2
_080E19D0:
	ldr r1, _080E1A10  @ =0x00000FA2
	add r0, r2, r1
	add r0, r0, r9
	strb r3, [r0]
	b _080E1BA2
	.byte 0x00
	.byte 0x00
_080E19DC:
	.4byte 0x00001622
_080E19E0:
	.4byte 0x00001623
_080E19E4:
	.4byte 0x000016C4
_080E19E8:
	.4byte 0x000016C5
_080E19EC:
	.4byte 0x00001624
_080E19F0:
	.4byte 0x00001625
_080E19F4:
	.4byte 0x000016C1
_080E19F8:
	.4byte gRam
_080E19FC:
	.4byte 0x00000F82
_080E1A00:
	.4byte 0x00000F52
_080E1A04:
	.4byte 0x00000FF2
_080E1A08:
	.4byte 0x00000FC2
_080E1A0C:
	.4byte 0x00001052
_080E1A10:
	.4byte 0x00000FA2
_080E1A14:
	.4byte 0x00000961
_080E1A18:
	ldr r0, _080E1A94  @ =0x00000F92
	add r0, r0, r8
	add r7, r4, r0
	ldrb r2, [r7]
	mov r10, r2
	ldr r0, _080E1A98  @ =0x00000FB2
	add r0, r0, r8
	add r6, r4, r0
	ldrb r5, [r6]
	ldr r0, _080E1A9C  @ =0x00000FD2
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E1A46
	ldr r0, _080E1AA0  @ =gUnknown_08176908
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r0, _080E1AA4  @ =gUnknown_0817690C
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r7]
_080E1A46:
	add r0, r4, #0
	bl sub_080E26E4
	strb r5, [r6]
	mov r3, r10
	strb r3, [r7]
	ldr r0, _080E1AA8  @ =0x00000FA2
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #5
	bne _080E1A60
	b _080E1B8C
_080E1A60:
	mov r5, #0
	mov r6, #0
	mov r7, #0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E1A74
	b _080E1BA2
_080E1A74:
	add r0, r4, #0
	bl sub_080C3964
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E1AB6
	ldr r0, _080E1AAC  @ =0x00001626
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E1AB0
	mov r6, #1
	b _080E1AB2
_080E1A94:
	.4byte 0x00000F92
_080E1A98:
	.4byte 0x00000FB2
_080E1A9C:
	.4byte 0x00000FD2
_080E1AA0:
	.4byte gUnknown_08176908
_080E1AA4:
	.4byte gUnknown_0817690C
_080E1AA8:
	.4byte 0x00000FA2
_080E1AAC:
	.4byte 0x00001626
_080E1AB0:
	mov r5, #1
_080E1AB2:
	cmp r5, #0
	beq _080E1AD2
_080E1AB6:
	ldr r0, _080E1B1C  @ =gRam
	ldr r4, _080E1B20  @ =0x00000F52
	add r0, r0, r4
	mov r2, r9
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #2
	bhi _080E1AD6
	mov r0, #3
	strb r0, [r1]
	mov r0, r9
	mov r1, #32
	bl sub_080E2814
_080E1AD2:
	cmp r6, #0
	beq _080E1AF6
_080E1AD6:
	ldr r1, _080E1B1C  @ =gRam
	ldr r3, _080E1B24  @ =0x00001072
	add r0, r1, r3
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #3
	bls _080E1AF6
	ldr r4, _080E1B20  @ =0x00000F52
	add r0, r1, r4
	add r0, r0, r9
	mov r1, #4
	strb r1, [r0]
	mov r0, r9
	mov r1, #128
	bl sub_080E2814
_080E1AF6:
	mov r0, r9
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E1BA2
	ldr r2, _080E1B1C  @ =gRam
	ldr r1, _080E1B28  @ =0x00001002
	add r0, r2, r1
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #4
	bls _080E1B2C
	mov r0, r9
	bl Sprite3_Move
	b _080E1B40
_080E1B1C:
	.4byte gRam
_080E1B20:
	.4byte 0x00000F52
_080E1B24:
	.4byte 0x00001072
_080E1B28:
	.4byte 0x00001002
_080E1B2C:
	ldr r3, _080E1B78  @ =0x00001042
	add r0, r2, r3
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E1B44
	mov r0, r9
	bl Sprite3_Move
	mov r7, #1
_080E1B40:
	cmp r7, #0
	beq _080E1B4A
_080E1B44:
	mov r0, r9
	bl sub_080C79F8
_080E1B4A:
	ldr r1, _080E1B7C  @ =gRam
	ldr r4, _080E1B80  @ =0x00000F52
	add r0, r1, r4
	mov r3, r9
	add r2, r3, r0
	ldrb r0, [r2]
	cmp r0, #4
	beq _080E1B64
	ldr r4, _080E1B84  @ =0x000010A2
	add r0, r1, r4
	add r0, r0, r9
	mov r1, #0
	strb r1, [r0]
_080E1B64:
	ldr r0, _080E1B88  @ =gUnknown_081769B0
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	mov r0, r9
	bl _call_via_r1
	b _080E1BA2
	.byte 0x00
	.byte 0x00
_080E1B78:
	.4byte 0x00001042
_080E1B7C:
	.4byte gRam
_080E1B80:
	.4byte 0x00000F52
_080E1B84:
	.4byte 0x000010A2
_080E1B88:
	.4byte gUnknown_081769B0
_080E1B8C:
	ldr r0, _080E1BB4  @ =0x000009AD
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E1BA2
	mov r0, r9
	bl sub_080E2858
	mov r0, r9
	bl sub_080E2858
_080E1BA2:
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
_080E1BB4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080E1738

