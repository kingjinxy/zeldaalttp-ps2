	THUMB_FUNC_START sub_080ECA20
sub_080ECA20: @ 0x080ECA20
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080ECB24  @ =gRam
	ldr r2, _080ECB28  @ =0x00000F62
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ECA48
	ldr r3, _080ECB2C  @ =0x00000F52
	add r0, r1, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ECA56
_080ECA48:
	ldr r7, _080ECB30  @ =0x00000D94
	add r0, r1, r7
	add r0, r5, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_080ECA56:
	add r0, r5, #0
	bl sub_080ED07C
	add r0, r5, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080ECA6C
	b _080ECD98
_080ECA6C:
	ldr r0, _080ECB24  @ =gRam
	ldr r2, _080ECB34  @ =0x00000FA2
	add r1, r0, r2
	add r1, r5, r1
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #9
	beq _080ECA7E
	b _080ECCE0
_080ECA7E:
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r3, _080ECB38  @ =0x00001152
	add r0, r6, r3
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #4
	strb r0, [r2]
	ldr r7, _080ECB3C  @ =0x00001142
	add r0, r6, r7
	add r3, r5, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080ECACC
	strb r4, [r2]
	strb r4, [r3]
	ldr r1, _080ECB40  @ =0x00001642
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _080ECACC
	ldr r3, _080ECB28  @ =0x00000F62
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ECACC
	mov r0, #48
	strb r0, [r2]
	add r0, r5, #0
	mov r1, #56
	bl sub_080CF140
_080ECACC:
	ldr r6, _080ECB24  @ =gRam
	ldr r7, _080ECB44  @ =0x00001072
	add r0, r6, r7
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ECAF2
	add r0, r5, #0
	bl sub_080E2614
	ldr r1, _080ECB2C  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080ECB48  @ =0x000010A2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
_080ECAF2:
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080ECB00
	b _080ECD98
_080ECB00:
	ldr r3, _080ECB28  @ =0x00000F62
	add r0, r6, r3
	add r2, r5, r0
	ldrb r1, [r2]
	add r7, r1, #0
	cmp r7, #0
	bne _080ECB10
	b _080ECC28
_080ECB10:
	ldr r7, _080ECB40  @ =0x00001642
	add r0, r6, r7
	ldrb r0, [r0]
	cmp r0, #1
	bne _080ECB4C
	add r0, r5, #0
	bl sub_080ECE4C
	b _080ECD98
	.byte 0x00
	.byte 0x00
_080ECB24:
	.4byte gRam
_080ECB28:
	.4byte 0x00000F62
_080ECB2C:
	.4byte 0x00000F52
_080ECB30:
	.4byte 0x00000D94
_080ECB34:
	.4byte 0x00000FA2
_080ECB38:
	.4byte 0x00001152
_080ECB3C:
	.4byte 0x00001142
_080ECB40:
	.4byte 0x00001642
_080ECB44:
	.4byte 0x00001072
_080ECB48:
	.4byte 0x000010A2
_080ECB4C:
	add r0, r5, #0
	bl sub_080C5044
	ldr r1, _080ECB98  @ =0x00000F52
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080ECBB8
	ldr r2, _080ECB9C  @ =0x00000EE2
	add r0, r6, r2
	add r0, r5, r0
	ldr r3, _080ECBA0  @ =gUnknown_02003040
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r7, _080ECBA4  @ =0x00000F02
	add r0, r6, r7
	add r0, r5, r0
	ldr r2, _080ECBA8  @ =gUnknown_02003050
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080ECBAC  @ =0x00000ED2
	add r0, r6, r3
	add r0, r5, r0
	ldr r7, _080ECBB0  @ =gUnknown_02003060
	add r1, r5, r7
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080ECBB4  @ =0x00000EF2
	add r0, r6, r1
	add r0, r5, r0
	add r2, r2, #32
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _080ECD98
_080ECB98:
	.4byte 0x00000F52
_080ECB9C:
	.4byte 0x00000EE2
_080ECBA0:
	.4byte gUnknown_02003040
_080ECBA4:
	.4byte 0x00000F02
_080ECBA8:
	.4byte gUnknown_02003050
_080ECBAC:
	.4byte 0x00000ED2
_080ECBB0:
	.4byte gUnknown_02003060
_080ECBB4:
	.4byte 0x00000EF2
_080ECBB8:
	add r0, r5, #0
	bl sub_080ECDC4
	add r0, r5, #0
	bl sub_080C1F70
	ldr r3, _080ECC14  @ =0x00000968
	add r2, r6, r3
	ldr r7, _080ECC18  @ =0x00001622
	add r0, r6, r7
	ldrb r1, [r0]
	ldr r3, _080ECC1C  @ =0x00001623
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bls _080ECBE8
	b _080ECD98
_080ECBE8:
	ldr r7, _080ECC20  @ =0x0000096C
	add r2, r6, r7
	ldr r1, _080ECC24  @ =0x00001624
	add r0, r6, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bls _080ECC0C
	b _080ECD98
_080ECC0C:
	ldrb r0, [r4]
	add r0, r0, #1
	b _080ECD96
	.byte 0x00
	.byte 0x00
_080ECC14:
	.4byte 0x00000968
_080ECC18:
	.4byte 0x00001622
_080ECC1C:
	.4byte 0x00001623
_080ECC20:
	.4byte 0x0000096C
_080ECC24:
	.4byte 0x00001624
_080ECC28:
	ldr r3, _080ECC90  @ =0x00000FC2
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080ECCA0
	cmp r0, #64
	bne _080ECC40
	mov r0, #45
	mov r1, #0
	bl sub_0812A324
_080ECC40:
	ldrb r0, [r4]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #63
	bhi _080ECC6E
	ldr r0, _080ECC94  @ =0x00000F22
	add r4, r6, r0
	add r4, r5, r4
	ldr r2, _080ECC98  @ =gUnknown_08178590
	lsr r0, r1, #25
	ldr r3, _080ECC9C  @ =0x000015DC
	add r1, r6, r3
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r4]
	add r0, r5, #0
	bl Sprite3_MoveHoriz
	strb r7, [r4]
_080ECC6E:
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080ECC84
	b _080ECD98
_080ECC84:
	bl sub_080AF16C
	bl sub_0809945C
	b _080ECD98
	.byte 0x00
	.byte 0x00
_080ECC90:
	.4byte 0x00000FC2
_080ECC94:
	.4byte 0x00000F22
_080ECC98:
	.4byte gUnknown_08178590
_080ECC9C:
	.4byte 0x000015DC
_080ECCA0:
	add r0, r1, #1
	strb r0, [r2]
	ldr r7, _080ECCD4  @ =0x00001012
	add r1, r6, r7
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	sub r0, r0, #2
	strb r0, [r1]
	ldr r0, _080ECCD8  @ =0x00000E75
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #251
	and r0, r0, r2
	strb r0, [r1]
	ldr r2, _080ECCDC  @ =0x00001032
	add r1, r6, r2
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	b _080ECD98
	.byte 0x00
	.byte 0x00
_080ECCD4:
	.4byte 0x00001012
_080ECCD8:
	.4byte 0x00000E75
_080ECCDC:
	.4byte 0x00001032
_080ECCE0:
	ldr r3, _080ECD00  @ =0x00000FC2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080ECD0C
	ldr r7, _080ECD04  @ =0x00000F92
	add r1, r6, r7
	add r1, r5, r1
	ldr r2, _080ECD08  @ =gUnknown_08178598
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080ECD98
_080ECD00:
	.4byte 0x00000FC2
_080ECD04:
	.4byte 0x00000F92
_080ECD08:
	.4byte gUnknown_08178598
_080ECD0C:
	ldr r0, _080ECDA8  @ =0x00001642
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080ECD5E
	mov r1, #5
	ldr r2, _080ECDAC  @ =0x00001022
	add r2, r2, r6
	mov r8, r2
	mov r2, #0
	ldr r3, _080ECDB0  @ =0x00000F22
	add r3, r3, r6
	mov r12, r3
	ldr r7, _080ECDB4  @ =0x00000F12
	add r7, r7, r6
	mov r9, r7
	mov r4, #48
	ldr r0, _080ECDB8  @ =0x00001152
	add r3, r6, r0
_080ECD3A:
	lsl r0, r1, #24
	asr r0, r0, #24
	mov r7, r8
	add r1, r0, r7
	strb r4, [r1]
	mov r7, r12
	add r1, r0, r7
	strb r2, [r1]
	mov r7, r9
	add r1, r0, r7
	strb r2, [r1]
	add r1, r0, r3
	strb r2, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ECD3A
_080ECD5E:
	ldr r1, _080ECDBC  @ =0x00000FA2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080ECDA8  @ =0x00001642
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ECD98
	mov r0, #234
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, _080ECDB8  @ =0x00001152
	add r0, r6, r3
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r7, _080ECDC0  @ =0x00000F62
	add r0, r6, r7
	add r4, r4, r0
	mov r0, #1
_080ECD96:
	strb r0, [r4]
_080ECD98:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ECDA8:
	.4byte 0x00001642
_080ECDAC:
	.4byte 0x00001022
_080ECDB0:
	.4byte 0x00000F22
_080ECDB4:
	.4byte 0x00000F12
_080ECDB8:
	.4byte 0x00001152
_080ECDBC:
	.4byte 0x00000FA2
_080ECDC0:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080ECA20

