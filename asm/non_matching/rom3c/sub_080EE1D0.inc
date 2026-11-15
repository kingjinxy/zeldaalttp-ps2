	THUMB_FUNC_START sub_080EE1D0
sub_080EE1D0: @ 0x080EE1D0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080EE338
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EE1EA
	b _080EE2F0
_080EE1EA:
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r7, r0, #0
	cmp r7, #0
	beq _080EE202
	bl sub_080AF16C
	bl sub_0809945C
_080EE202:
	ldr r4, _080EE2F8  @ =gRam
	ldr r1, _080EE2FC  @ =0x00000FC2
	add r0, r4, r1
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080EE2F0
	ldr r2, _080EE300  @ =0x00000F52
	add r0, r4, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080EE2F0
	cmp r1, #0
	bne _080EE23C
	ldr r1, _080EE304  @ =0x0000177E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EE2F0
	strb r0, [r2]
	strb r6, [r3]
	ldr r2, _080EE308  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #5
	strb r0, [r1]
_080EE23C:
	cmp r7, #0
	beq _080EE270
	ldr r3, _080EE30C  @ =0x000016F8
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #0
	bne _080EE270
	mov r0, #16
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #32
	bl sub_080C35FC
	ldr r1, _080EE310  @ =0x00000961
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080EE314  @ =0x000016CE
	add r0, r4, r2
	strb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	ldrb r1, [r0]
	sub r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
_080EE270:
	ldr r6, _080EE2F8  @ =gRam
	ldr r3, _080EE318  @ =0x00000F22
	add r1, r6, r3
	add r1, r5, r1
	ldr r2, _080EE31C  @ =gUnknown_08178A14
	add r3, r3, #144
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EE320  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080EE324  @ =gUnknown_08178A18
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EE2B4
	ldr r0, _080EE328  @ =gUnknown_08178A1C
	ldrb r1, [r4]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r4]
_080EE2B4:
	ldr r1, _080EE32C  @ =0x00001770
	add r4, r6, r1
	mov r0, #1
	strb r0, [r4]
	ldr r2, _080EE330  @ =0x00001052
	add r1, r6, r2
	add r1, r5, r1
	ldrb r2, [r1]
	add r2, r2, #1
	strb r2, [r1]
	add r3, r0, #0
	and r3, r3, r2
	cmp r3, #0
	bne _080EE2F0
	ldr r0, _080EE334  @ =0x000010A2
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #130
	bne _080EE2F0
	ldr r1, _080EE300  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #128
	strb r1, [r0]
	strb r3, [r4]
_080EE2F0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE2F8:
	.4byte gRam
_080EE2FC:
	.4byte 0x00000FC2
_080EE300:
	.4byte 0x00000F52
_080EE304:
	.4byte 0x0000177E
_080EE308:
	.4byte 0x00000A3E
_080EE30C:
	.4byte 0x000016F8
_080EE310:
	.4byte 0x00000961
_080EE314:
	.4byte 0x000016CE
_080EE318:
	.4byte 0x00000F22
_080EE31C:
	.4byte gUnknown_08178A14
_080EE320:
	.4byte 0x00000F12
_080EE324:
	.4byte gUnknown_08178A18
_080EE328:
	.4byte gUnknown_08178A1C
_080EE32C:
	.4byte 0x00001770
_080EE330:
	.4byte 0x00001052
_080EE334:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080EE1D0

