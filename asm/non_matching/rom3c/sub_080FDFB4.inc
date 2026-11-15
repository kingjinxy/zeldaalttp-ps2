	THUMB_FUNC_START sub_080FDFB4
sub_080FDFB4: @ 0x080FDFB4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r7, _080FE020  @ =gRam
	ldr r1, _080FE024  @ =0x00001142
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r1, _080FE028  @ =0x00001152
	add r0, r7, r1
	add r3, r5, r0
	ldrb r1, [r3]
	add r0, r1, #0
	add r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	bne _080FDFE8
	sub r0, r1, #3
	strb r0, [r3]
_080FDFE8:
	ldrb r1, [r6]
	eor r4, r4, r1
	mov r0, #128
	and r4, r4, r0
	cmp r4, #0
	beq _080FE018
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080FE018
	ldr r0, _080FE02C  @ =0x00000F52
	add r1, r7, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r1]
	strb r2, [r6]
	strb r2, [r3]
	ldr r1, _080FE030  @ =0x00000FC2
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #63
	strb r1, [r0]
_080FE018:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE020:
	.4byte gRam
_080FE024:
	.4byte 0x00001142
_080FE028:
	.4byte 0x00001152
_080FE02C:
	.4byte 0x00000F52
_080FE030:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080FDFB4

