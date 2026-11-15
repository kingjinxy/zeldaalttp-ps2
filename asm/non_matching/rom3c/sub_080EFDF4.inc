	THUMB_FUNC_START sub_080EFDF4
sub_080EFDF4: @ 0x080EFDF4
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F0224
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080EFE12
	b _080EFF84
_080EFE12:
	ldr r5, _080EFECC  @ =gRam
	ldr r2, _080EFED0  @ =0x00000F92
	add r0, r5, r2
	add r6, r4, r0
	strb r1, [r6]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080EFED4  @ =0x00000FC2
	add r0, r5, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080EFE56
	ldr r3, _080EFED8  @ =0x0000097C
	add r0, r5, r3
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080EFEAE
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _080EFEAE
	mov r0, #32
	strb r0, [r1]
_080EFE56:
	ldr r0, _080EFEDC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EFEE0  @ =gUnknown_08178C90
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080EFEE4  @ =0x00000F12
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _080EFEE8  @ =gUnknown_08178C94
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EFEEC  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EFE84
	add r0, r4, #0
	bl Sprite3_Move
_080EFE84:
	add r0, r4, #0
	bl sub_080C6F48
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r2, _080EFEF0  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080EFEF4  @ =gUnknown_08178C8C
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r6]
_080EFEAE:
	ldr r0, _080EFECC  @ =gRam
	ldr r3, _080EFEF8  @ =0x00000FF2
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #62
	bne _080EFF00
	ldr r0, _080EFEFC  @ =gGloves
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EFF06
	add r0, r4, #0
	bl sub_080C3138
	b _080EFF06
_080EFECC:
	.4byte gRam
_080EFED0:
	.4byte 0x00000F92
_080EFED4:
	.4byte 0x00000FC2
_080EFED8:
	.4byte 0x0000097C
_080EFEDC:
	.4byte 0x00000F22
_080EFEE0:
	.4byte gUnknown_08178C90
_080EFEE4:
	.4byte 0x00000F12
_080EFEE8:
	.4byte gUnknown_08178C94
_080EFEEC:
	.4byte 0x00001042
_080EFEF0:
	.4byte 0x00001052
_080EFEF4:
	.4byte gUnknown_08178C8C
_080EFEF8:
	.4byte 0x00000FF2
_080EFEFC:
	.4byte gGloves
_080EFF00:
	add r0, r4, #0
	bl sub_080C3138
_080EFF06:
	ldr r5, _080EFF8C  @ =gRam
	ldr r1, _080EFF90  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080EFF84
	ldr r2, _080EFF94  @ =0x00000F82
	add r0, r5, r2
	add r6, r4, r0
	ldr r3, _080EFF98  @ =0x00000FF2
	add r0, r5, r3
	add r2, r4, r0
	ldrb r0, [r2]
	mov r1, #2
	cmp r0, #23
	beq _080EFF2A
	mov r1, #1
_080EFF2A:
	mov r3, #0
	strb r1, [r6]
	mov r0, #236
	strb r0, [r2]
	ldr r0, _080EFF9C  @ =0x00001122
	add r6, r5, r0
	add r2, r4, r6
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080EFFA0  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	mov r0, #62
	add r1, r4, #0
	bl sub_080CA538
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	blt _080EFF84
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080EFFA4  @ =0x00001012
	add r1, r5, r2
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	strb r0, [r1]
	ldr r3, _080EFFA8  @ =0x00000FE2
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	add r0, r4, r6
	mov r1, #9
	strb r1, [r0]
	ldr r2, _080EFFAC  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080EFF84:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080EFF8C:
	.4byte gRam
_080EFF90:
	.4byte 0x00000FA2
_080EFF94:
	.4byte 0x00000F82
_080EFF98:
	.4byte 0x00000FF2
_080EFF9C:
	.4byte 0x00001122
_080EFFA0:
	.4byte 0x00000F92
_080EFFA4:
	.4byte 0x00001012
_080EFFA8:
	.4byte 0x00000FE2
_080EFFAC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EFDF4

