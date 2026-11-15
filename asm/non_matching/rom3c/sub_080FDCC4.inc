	THUMB_FUNC_START sub_080FDCC4
sub_080FDCC4: @ 0x080FDCC4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FDD38  @ =gRam
	ldr r1, _080FDD3C  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r6, _080FDD40  @ =0x00000F22
	add r1, r5, r6
	add r1, r4, r1
	ldr r0, _080FDD44  @ =gUnknown_0817AA1C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FDD48  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080FDD4C  @ =gUnknown_0817AA14
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A20
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080FDD50  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FDD1E
	ldr r6, _080FDD54  @ =0x00001042
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FDD5C
_080FDD1E:
	ldr r1, _080FDD58  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	cmp r2, r6
	beq _080FDD5C
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080FDDA8
_080FDD38:
	.4byte gRam
_080FDD3C:
	.4byte 0x00000FB2
_080FDD40:
	.4byte 0x00000F22
_080FDD44:
	.4byte gUnknown_0817AA1C
_080FDD48:
	.4byte 0x00000F12
_080FDD4C:
	.4byte gUnknown_0817AA14
_080FDD50:
	.4byte 0x00000FC2
_080FDD54:
	.4byte 0x00001042
_080FDD58:
	.4byte 0x00000F62
_080FDD5C:
	ldr r5, _080FDDB0  @ =gRam
	ldr r6, _080FDDB4  @ =0x00000F72
	add r0, r5, r6
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FDD82
	mov r0, #14
	strb r0, [r2]
	ldr r0, _080FDDB8  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FDD82:
	ldr r1, _080FDDBC  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	ldr r3, _080FDDC0  @ =gUnknown_0817AA24
	ldr r6, _080FDDB8  @ =0x00001052
	add r0, r5, r6
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #2
	mov r0, #4
	and r1, r1, r0
	sub r6, r6, #240
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
_080FDDA8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FDDB0:
	.4byte gRam
_080FDDB4:
	.4byte 0x00000F72
_080FDDB8:
	.4byte 0x00001052
_080FDDBC:
	.4byte 0x00000F92
_080FDDC0:
	.4byte gUnknown_0817AA24
	THUMB_FUNC_END sub_080FDCC4

