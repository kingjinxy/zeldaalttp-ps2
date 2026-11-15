	THUMB_FUNC_START sub_080FFB18
sub_080FFB18: @ 0x080FFB18
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080FFA44
	cmp r0, #0
	beq _080FFB2E
	b _080FFD98
_080FFB2E:
	ldr r3, _080FFB84  @ =gRam
	ldr r1, _080FFB88  @ =0x00001002
	add r0, r3, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FFB58
	mov r0, #2
	strb r0, [r2]
	ldr r5, _080FFB8C  @ =0x00001082
	add r2, r3, r5
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2]
_080FFB58:
	ldr r7, _080FFB90  @ =0x00000FC2
	add r0, r3, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FFB66
	b _080FFD98
_080FFB66:
	mov r6, #1
	neg r6, r6
	mov r1, #0
	ldr r2, _080FFB94  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #236
	bne _080FFB78
	mov r1, #1
_080FFB78:
	cmp r1, #0
	beq _080FFB98
	add r0, r4, #0
	bl sub_080FF9B8
	b _080FFB9E
_080FFB84:
	.4byte gRam
_080FFB88:
	.4byte 0x00001002
_080FFB8C:
	.4byte 0x00001082
_080FFB90:
	.4byte 0x00000FC2
_080FFB94:
	.4byte 0x000009DA
_080FFB98:
	add r0, r4, #0
	bl sub_080C5044
_080FFB9E:
	ldr r3, _080FFBDC  @ =gRam
	ldr r5, _080FFBE0  @ =0x00001052
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r2, #0
	ldr r7, _080FFBE4  @ =0x000009DA
	add r0, r3, r7
	ldrh r0, [r0]
	cmp r0, #236
	bne _080FFBBA
	mov r2, #1
_080FFBBA:
	cmp r2, #0
	beq _080FFBF6
	ldr r0, _080FFBE8  @ =gUnknown_02010990
	ldrb r0, [r0, #1]
	cmp r0, #0
	bne _080FFBF0
	mov r0, #127
	and r1, r1, r0
	cmp r1, #0
	bne _080FFC00
	ldr r1, _080FFBEC  @ =0x00000FD2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #88
	strb r1, [r0]
	b _080FFC00
	.byte 0x00
	.byte 0x00
_080FFBDC:
	.4byte gRam
_080FFBE0:
	.4byte 0x00001052
_080FFBE4:
	.4byte 0x000009DA
_080FFBE8:
	.4byte gUnknown_02010990
_080FFBEC:
	.4byte 0x00000FD2
_080FFBF0:
	add r0, r4, #0
	mov r1, #127
	b _080FFBFA
_080FFBF6:
	add r0, r4, #0
	mov r1, #31
_080FFBFA:
	bl sub_08101648
	add r6, r0, #0
_080FFC00:
	cmp r6, #0
	blt _080FFC44
	ldr r5, _080FFC74  @ =gRam
	ldr r2, _080FFC78  @ =0x00001162
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FFC44
	mov r0, #4
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #32
	bl sub_080C2CB4
	ldr r3, _080FFC7C  @ =0x00000F12
	add r0, r5, r3
	add r0, r6, r0
	mov r7, #150
	lsl r7, r7, #4
	add r1, r5, r7
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FFC80  @ =0x00000F22
	add r0, r5, r1
	add r0, r6, r0
	ldr r2, _080FFC84  @ =0x00000961
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080FFC44:
	mov r2, #0
	ldr r0, _080FFC74  @ =gRam
	ldr r3, _080FFC88  @ =0x000009DA
	add r1, r0, r3
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #236
	bne _080FFC56
	mov r2, #1
_080FFC56:
	cmp r2, #0
	beq _080FFC94
	ldr r5, _080FFC8C  @ =0x00000FD2
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FFC94
	ldr r7, _080FFC90  @ =0x00001052
	add r0, r6, r7
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080FFD98
	.byte 0x00
	.byte 0x00
_080FFC74:
	.4byte gRam
_080FFC78:
	.4byte 0x00001162
_080FFC7C:
	.4byte 0x00000F12
_080FFC80:
	.4byte 0x00000F22
_080FFC84:
	.4byte 0x00000961
_080FFC88:
	.4byte 0x000009DA
_080FFC8C:
	.4byte 0x00000FD2
_080FFC90:
	.4byte 0x00001052
_080FFC94:
	ldr r1, _080FFDA4  @ =0x000010A2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r3, #1
	and r3, r3, r0
	ldr r2, _080FFDA8  @ =0x00000F22
	add r0, r6, r2
	add r0, r0, r4
	mov r12, r0
	ldr r0, _080FFDAC  @ =gUnknown_0817AD7C
	add r2, r3, r0
	mov r5, r12
	ldrb r5, [r5]
	mov r8, r5
	mov r5, r8
	ldrb r7, [r2]
	cmp r5, r7
	beq _080FFCEA
	mov r1, #0
	ldr r7, _080FFDB0  @ =0x000009DA
	add r0, r6, r7
	ldrh r0, [r0]
	cmp r0, #236
	bne _080FFCC8
	mov r1, #1
_080FFCC8:
	cmp r1, #0
	beq _080FFCDE
	mov r0, #0
	ldrsb r0, [r2, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r5, r0
	beq _080FFCEA
_080FFCDE:
	ldr r0, _080FFDB4  @ =gUnknown_0817AD78
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, r8
	mov r1, r12
	strb r0, [r1]
_080FFCEA:
	ldr r2, _080FFDB8  @ =0x00000EE2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #254
	ldr r0, _080FFDBC  @ =gUnknown_0817AD7E
	add r0, r3, r0
	and r1, r1, r2
	ldrb r0, [r0]
	cmp r1, r0
	bne _080FFD0C
	ldr r3, _080FFDA4  @ =0x000010A2
	add r1, r6, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FFD0C:
	ldr r5, _080FFDC0  @ =0x00001092
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	mov r3, #1
	and r3, r3, r0
	ldr r7, _080FFDC4  @ =0x00000F12
	add r0, r6, r7
	add r0, r0, r4
	mov r12, r0
	ldr r0, _080FFDC8  @ =gUnknown_0817AD80
	add r2, r3, r0
	mov r0, r12
	ldrb r0, [r0]
	mov r8, r0
	mov r5, r8
	ldrb r1, [r2]
	cmp r5, r1
	beq _080FFD62
	mov r1, #0
	ldr r7, _080FFDB0  @ =0x000009DA
	add r0, r6, r7
	ldrh r0, [r0]
	cmp r0, #236
	bne _080FFD40
	mov r1, #1
_080FFD40:
	cmp r1, #0
	beq _080FFD56
	mov r0, #0
	ldrsb r0, [r2, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r5, r0
	beq _080FFD62
_080FFD56:
	ldr r0, _080FFDB4  @ =gUnknown_0817AD78
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, r8
	mov r1, r12
	strb r0, [r1]
_080FFD62:
	add r5, r6, #0
	ldr r2, _080FFDCC  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #254
	ldr r0, _080FFDD0  @ =gUnknown_0817AD82
	add r0, r3, r0
	and r1, r1, r2
	ldrb r0, [r0]
	cmp r1, r0
	bne _080FFD86
	ldr r3, _080FFDC0  @ =0x00001092
	add r1, r5, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FFD86:
	ldr r5, _080FFDD4  @ =0x00001072
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FFD98
	add r0, r4, #0
	bl Sprite3_Move
_080FFD98:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FFDA4:
	.4byte 0x000010A2
_080FFDA8:
	.4byte 0x00000F22
_080FFDAC:
	.4byte gUnknown_0817AD7C
_080FFDB0:
	.4byte 0x000009DA
_080FFDB4:
	.4byte gUnknown_0817AD78
_080FFDB8:
	.4byte 0x00000EE2
_080FFDBC:
	.4byte gUnknown_0817AD7E
_080FFDC0:
	.4byte 0x00001092
_080FFDC4:
	.4byte 0x00000F12
_080FFDC8:
	.4byte gUnknown_0817AD80
_080FFDCC:
	.4byte 0x00000ED2
_080FFDD0:
	.4byte gUnknown_0817AD82
_080FFDD4:
	.4byte 0x00001072
	THUMB_FUNC_END sub_080FFB18
