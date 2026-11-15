	THUMB_FUNC_START sub_080EE46C
sub_080EE46C: @ 0x080EE46C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080EE504  @ =gRam
	ldr r2, _080EE508  @ =0x00001092
	add r0, r1, r2
	add r5, r4, r0
	ldrb r2, [r5]
	add r3, r2, #0
	add r6, r1, #0
	cmp r3, #0
	bne _080EE520
	ldr r1, _080EE50C  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EE498
	ldr r2, _080EE510  @ =0x00000F92
	add r0, r6, r2
	add r0, r4, r0
	strb r3, [r0]
_080EE498:
	add r0, r4, #0
	bl sub_080EEFEC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EE55E
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080EE55E
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080CA2A4
	ldr r1, _080EE514  @ =0x00001152
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EE4EA
	strb r5, [r3]
	strb r5, [r2]
_080EE4EA:
	ldr r1, _080EE518  @ =gUnknown_08178A48
	ldr r2, _080EE51C  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080EE55E
	.byte 0x00
	.byte 0x00
_080EE504:
	.4byte gRam
_080EE508:
	.4byte 0x00001092
_080EE50C:
	.4byte 0x00000FD2
_080EE510:
	.4byte 0x00000F92
_080EE514:
	.4byte 0x00001152
_080EE518:
	.4byte gUnknown_08178A48
_080EE51C:
	.4byte 0x00000F52
_080EE520:
	ldr r1, _080EE564  @ =0x00001172
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080EE568  @ =0x000009AD
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #1
	beq _080EE546
	cmp r0, #11
	beq _080EE546
	ldrb r0, [r5]
	cmp r0, #1
	bne _080EE546
	ldr r1, _080EE56C  @ =0x00000D94
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
_080EE546:
	ldr r1, _080EE570  @ =gUnknown_08178A54
	ldr r2, _080EE574  @ =0x00001092
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EE55E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EE564:
	.4byte 0x00001172
_080EE568:
	.4byte 0x000009AD
_080EE56C:
	.4byte 0x00000D94
_080EE570:
	.4byte gUnknown_08178A54
_080EE574:
	.4byte 0x00001092
	THUMB_FUNC_END sub_080EE46C

