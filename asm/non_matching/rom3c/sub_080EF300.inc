	THUMB_FUNC_START sub_080EF300
sub_080EF300: @ 0x080EF300
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080C5044
	add r0, r7, #0
	bl sub_080C2C4C
	ldr r4, _080EF364  @ =gRam
	ldr r1, _080EF368  @ =0x00001092
	add r0, r4, r1
	add r2, r7, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080EF380
	ldr r2, _080EF36C  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080EF398
	ldr r3, _080EF370  @ =0x000010A2
	add r0, r4, r3
	add r3, r7, r0
	ldrb r0, [r3]
	and r2, r2, r0
	ldr r0, _080EF374  @ =0x00001152
	add r1, r4, r0
	add r1, r7, r1
	ldr r0, _080EF378  @ =gUnknown_08178C00
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r4, [r1]
	add r0, r0, r4
	strb r0, [r1]
	ldr r1, _080EF37C  @ =gUnknown_08178C02
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _080EF398
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	b _080EF398
	.byte 0x00
	.byte 0x00
_080EF364:
	.4byte gRam
_080EF368:
	.4byte 0x00001092
_080EF36C:
	.4byte 0x00000996
_080EF370:
	.4byte 0x000010A2
_080EF374:
	.4byte 0x00001152
_080EF378:
	.4byte gUnknown_08178C00
_080EF37C:
	.4byte gUnknown_08178C02
_080EF380:
	ldr r0, _080EF464  @ =0x00001152
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EF398
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080EF398:
	ldr r6, _080EF468  @ =gRam
	ldr r1, _080EF46C  @ =0x00000F72
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r2, _080EF470  @ =0x00000968
	add r2, r2, r6
	mov r12, r2
	strb r0, [r2]
	ldr r4, _080EF474  @ =0x00000F02
	add r3, r6, r4
	add r3, r7, r3
	ldrb r1, [r3]
	ldr r2, _080EF478  @ =0x00000969
	add r0, r6, r2
	strb r1, [r0]
	add r4, r4, #128
	add r0, r6, r4
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r1, _080EF47C  @ =0x0000096C
	add r5, r6, r1
	strb r0, [r5]
	sub r4, r4, #144
	add r2, r6, r4
	add r2, r7, r2
	ldrb r1, [r2]
	ldr r4, _080EF480  @ =0x0000096D
	add r0, r6, r4
	strb r1, [r0]
	ldr r1, _080EF484  @ =0x00000EE2
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r4, r6, r1
	strb r0, [r4]
	ldrb r1, [r3]
	ldr r3, _080EF488  @ =0x00000961
	add r0, r6, r3
	strb r1, [r0]
	ldr r1, _080EF48C  @ =0x00000ED2
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r1, _080EF490  @ =0x00000964
	add r3, r6, r1
	strb r0, [r3]
	ldrb r1, [r2]
	ldr r2, _080EF494  @ =0x00000965
	add r0, r6, r2
	strb r1, [r0]
	ldrh r0, [r4]
	mov r4, r12
	ldrh r1, [r4]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _080EF430
	ldrh r0, [r3]
	ldrh r1, [r5]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _080EF430
	ldr r0, _080EF498  @ =0x00000F52
	add r1, r6, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EF430:
	add r0, r7, #0
	mov r1, #10
	bl sub_080C2DCC
	ldr r2, _080EF468  @ =gRam
	ldr r1, _080EF49C  @ =0x00000F12
	add r0, r2, r1
	add r0, r7, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r4, _080EF4A0  @ =0x00000F22
	add r0, r2, r4
	add r0, r7, r0
	ldr r1, _080EF488  @ =0x00000961
	add r2, r2, r1
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #0
	bl Sprite3_Move
	pop {r4-r7}
	pop {r0}
	bx r0
_080EF464:
	.4byte 0x00001152
_080EF468:
	.4byte gRam
_080EF46C:
	.4byte 0x00000F72
_080EF470:
	.4byte 0x00000968
_080EF474:
	.4byte 0x00000F02
_080EF478:
	.4byte 0x00000969
_080EF47C:
	.4byte 0x0000096C
_080EF480:
	.4byte 0x0000096D
_080EF484:
	.4byte 0x00000EE2
_080EF488:
	.4byte 0x00000961
_080EF48C:
	.4byte 0x00000ED2
_080EF490:
	.4byte 0x00000964
_080EF494:
	.4byte 0x00000965
_080EF498:
	.4byte 0x00000F52
_080EF49C:
	.4byte 0x00000F12
_080EF4A0:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080EF300

