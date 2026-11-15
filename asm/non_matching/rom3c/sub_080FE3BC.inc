	THUMB_FUNC_START sub_080FE3BC
sub_080FE3BC: @ 0x080FE3BC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FE490  @ =gRam
	ldr r1, _080FE494  @ =0x000010A2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080FE3D2
	b _080FE534
_080FE3D2:
	sub r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080FEF2C
	ldr r2, _080FE498  @ =0x00000F62
	add r0, r5, r2
	add r3, r4, r0
	ldrb r0, [r3]
	mov r2, #1
	and r2, r2, r0
	ldr r6, _080FE49C  @ =0x00001152
	add r1, r5, r6
	add r1, r4, r1
	ldr r0, _080FE4A0  @ =gUnknown_0817AB50
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r1, _080FE4A4  @ =gUnknown_0817AB62
	add r1, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080FE40E
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080FE40E:
	ldr r1, _080FE4A8  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FE4DE
	ldr r2, _080FE4AC  @ =0x00000F82
	add r0, r5, r2
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r2, #0
	ldr r3, _080FE4B0  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE434
	mov r2, #1
_080FE434:
	cmp r2, #0
	beq _080FE448
	ldr r6, _080FE4B4  @ =0x00000ED2
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #71
	bhi _080FE448
	mov r0, #7
	strb r0, [r1]
_080FE448:
	ldr r5, _080FE490  @ =gRam
	ldr r1, _080FE4AC  @ =0x00000F82
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #7
	beq _080FE4C8
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	ldr r3, _080FE4B8  @ =0x00000F22
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _080FE4BC  @ =gUnknown_0817AB5A
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080FE4C0  @ =0x00000F12
	add r1, r5, r6
	add r1, r4, r1
	ldr r0, _080FE4C4  @ =gUnknown_0817AB52
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _080FE4A8  @ =0x00000FC2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #64
	strb r1, [r2]
	b _080FE4DE
	.byte 0x00
	.byte 0x00
_080FE490:
	.4byte gRam
_080FE494:
	.4byte 0x000010A2
_080FE498:
	.4byte 0x00000F62
_080FE49C:
	.4byte 0x00001152
_080FE4A0:
	.4byte gUnknown_0817AB50
_080FE4A4:
	.4byte gUnknown_0817AB62
_080FE4A8:
	.4byte 0x00000FC2
_080FE4AC:
	.4byte 0x00000F82
_080FE4B0:
	.4byte 0x000009DA
_080FE4B4:
	.4byte 0x00000ED2
_080FE4B8:
	.4byte 0x00000F22
_080FE4BC:
	.4byte gUnknown_0817AB5A
_080FE4C0:
	.4byte 0x00000F12
_080FE4C4:
	.4byte gUnknown_0817AB52
_080FE4C8:
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
	ldr r2, _080FE524  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
_080FE4DE:
	ldr r5, _080FE528  @ =gRam
	ldr r3, _080FE52C  @ =0x00001042
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FE4F2
	add r0, r4, #0
	bl Sprite3_Move
_080FE4F2:
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FE50E
	ldr r6, _080FE524  @ =0x00000FC2
	add r0, r5, r6
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080FE50E:
	add r0, r4, #0
	bl sub_080C5044
	ldr r0, _080FE530  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	b _080FE560
	.byte 0x00
	.byte 0x00
_080FE524:
	.4byte 0x00000FC2
_080FE528:
	.4byte gRam
_080FE52C:
	.4byte 0x00001042
_080FE530:
	.4byte 0x00001052
_080FE534:
	ldr r1, _080FE568  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	mov r0, #63
	strb r0, [r2]
	ldr r3, _080FE56C  @ =0x00000F52
	add r1, r5, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #0
	ldr r6, _080FE570  @ =0x000009DA
	add r0, r5, r6
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE558
	mov r1, #1
_080FE558:
	cmp r1, #0
	beq _080FE560
	mov r0, #111
	strb r0, [r2]
_080FE560:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE568:
	.4byte 0x00000FC2
_080FE56C:
	.4byte 0x00000F52
_080FE570:
	.4byte 0x000009DA
	THUMB_FUNC_END sub_080FE3BC

