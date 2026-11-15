	THUMB_FUNC_START sub_080CAD30
sub_080CAD30: @ 0x080CAD30
	push {r4-r7,lr}
	mov r2, #15
	ldr r4, _080CAE1C  @ =gRam
	ldr r0, _080CAE20  @ =0x00000FA2
	add r7, r4, r0
	ldr r1, _080CAE24  @ =0x000009B2
	add r6, r4, r1
	add r0, r0, #80
	add r5, r4, r0
_080CAD42:
	lsl r0, r2, #24
	asr r1, r0, #24
	add r3, r1, r7
	ldrb r0, [r3]
	cmp r0, #0
	beq _080CAD62
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	bne _080CAD5E
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #108
	beq _080CAD62
_080CAD5E:
	mov r0, #0
	strb r0, [r3]
_080CAD62:
	lsl r0, r2, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CAD42
	mov r2, #9
	ldr r5, _080CAE28  @ =gUnknown_03003045
	mov r3, #0
_080CAD76:
	lsl r0, r2, #24
	asr r0, r0, #24
	add r1, r0, r5
	strb r3, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CAD76
	ldr r2, _080CAE2C  @ =0x0000177A
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	ldr r2, _080CAE30  @ =0x00000DA6
	add r1, r4, r2
	strb r0, [r1]
	add r2, r2, #17
	add r1, r4, r2
	strb r0, [r1]
	sub r2, r2, #3
	add r1, r4, r2
	strb r0, [r1]
	add r2, r2, #1
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _080CAE34  @ =0x000015F8
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _080CAE38  @ =0x00000DBA
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _080CAE3C  @ =0x00000EC7
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _080CAE40  @ =0x00001643
	add r1, r4, r2
	strb r0, [r1]
	sub r2, r2, #1
	add r1, r4, r2
	strb r0, [r1]
	add r2, r2, #6
	add r1, r4, r2
	strb r0, [r1]
	add r2, r2, #1
	add r1, r4, r2
	strb r0, [r1]
	add r2, r2, #1
	add r1, r4, r2
	strb r0, [r1]
	sub r2, r2, #58
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _080CAE44  @ =0x00001894
	add r1, r4, r2
	strb r0, [r1]
	mov r2, #7
	ldr r0, _080CAE48  @ =0x00000D1B
	add r4, r4, r0
	mov r3, #0
_080CADEC:
	lsl r0, r2, #24
	asr r0, r0, #24
	add r1, r0, r4
	strb r3, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CADEC
	mov r2, #29
	ldr r4, _080CAE4C  @ =gUnknown_03003402
	mov r3, #0
_080CAE04:
	lsl r0, r2, #24
	asr r0, r0, #24
	add r1, r0, r4
	strb r3, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CAE04
	pop {r4-r7}
	pop {r0}
	bx r0
_080CAE1C:
	.4byte gRam
_080CAE20:
	.4byte 0x00000FA2
_080CAE24:
	.4byte 0x000009B2
_080CAE28:
	.4byte gUnknown_03003045
_080CAE2C:
	.4byte 0x0000177A
_080CAE30:
	.4byte 0x00000DA6
_080CAE34:
	.4byte 0x000015F8
_080CAE38:
	.4byte 0x00000DBA
_080CAE3C:
	.4byte 0x00000EC7
_080CAE40:
	.4byte 0x00001643
_080CAE44:
	.4byte 0x00001894
_080CAE48:
	.4byte 0x00000D1B
_080CAE4C:
	.4byte gUnknown_03003402
	THUMB_FUNC_END sub_080CAD30

