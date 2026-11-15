	THUMB_FUNC_START sub_080B0AA4
sub_080B0AA4: @ 0x080B0AA4
	push {r4-r6,lr}
	ldr r2, _080B0AE4  @ =gRam
	ldr r0, _080B0AE8  @ =gCurrentHealth
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strb r0, [r1]
	ldr r0, _080B0AEC  @ =gMaxHealth
	ldrb r3, [r0]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r3, r0
	beq _080B0AC4
	cmp r3, #56
	bne _080B0B80
_080B0AC4:
	ldr r1, _080B0AF0  @ =0x00000A56
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B0B80
	ldr r3, _080B0AF4  @ =0x000017D4
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B0AFC
	ldr r1, _080B0AF8  @ =0x000017CE
	add r0, r2, r1
	mov r1, #4
	strb r1, [r0]
	sub r3, r3, #188
	b _080B0B26
_080B0AE4:
	.4byte gRam
_080B0AE8:
	.4byte gCurrentHealth
_080B0AEC:
	.4byte gMaxHealth
_080B0AF0:
	.4byte 0x00000A56
_080B0AF4:
	.4byte 0x000017D4
_080B0AF8:
	.4byte 0x000017CE
_080B0AFC:
	ldr r1, _080B0B18  @ =0x00001711
	add r0, r2, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _080B0B24
	ldr r3, _080B0B1C  @ =0x0000176C
	add r1, r2, r3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080B0B20  @ =0x00001718
	add r1, r2, r0
	mov r0, #23
	strb r0, [r1]
	b _080B0B2A
_080B0B18:
	.4byte 0x00001711
_080B0B1C:
	.4byte 0x0000176C
_080B0B20:
	.4byte 0x00001718
_080B0B24:
	ldr r3, _080B0B70  @ =0x00001718
_080B0B26:
	add r0, r2, r3
	strb r1, [r0]
_080B0B2A:
	ldr r1, _080B0B74  @ =0x00001702
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080B0B78  @ =0x000017FD
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #103
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #3
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #203
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #48
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080B0B7C  @ =0x00000E15
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	b _080B0C0C
	.byte 0x00
	.byte 0x00
_080B0B70:
	.4byte 0x00001718
_080B0B74:
	.4byte 0x00001702
_080B0B78:
	.4byte 0x000017FD
_080B0B7C:
	.4byte 0x00000E15
_080B0B80:
	ldr r4, _080B0BC8  @ =gRam
	mov r0, #226
	lsl r0, r0, #4
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080B0BD8
	ldr r2, _080B0BCC  @ =0x00001833
	add r1, r4, r2
	ldrb r2, [r1]
	sub r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B0BFE
	strb r2, [r1]
	ldr r3, _080B0BD0  @ =0x00000A89
	add r6, r4, r3
	mov r0, #4
	strb r0, [r6]
	mov r0, #1
	mov r1, #0
	bl sub_080BF804
	ldr r1, _080B0BD4  @ =0x00000A93
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #15
	bhi _080B0BFE
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #2
	strb r0, [r6]
	b _080B0BFE
	.byte 0x00
	.byte 0x00
_080B0BC8:
	.4byte gRam
_080B0BCC:
	.4byte 0x00001833
_080B0BD0:
	.4byte 0x00000A89
_080B0BD4:
	.4byte 0x00000A93
_080B0BD8:
	ldr r2, _080B0C14  @ =0x00001814
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B0BF6
	mov r0, #32
	strb r0, [r1]
	ldr r3, _080B0C18  @ =0x00000A89
	add r1, r4, r3
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_080B0BF6:
	mov r0, #1
	mov r1, #0
	bl sub_080BF804
_080B0BFE:
	ldr r0, _080B0C1C  @ =gRam
	ldr r2, _080B0C20  @ =0x00000A92
	add r1, r0, r2
	add r1, r1, #1
	ldrb r1, [r1]
	ldr r3, _080B0C24  @ =0x000016C8
	add r0, r0, r3
_080B0C0C:
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080B0C14:
	.4byte 0x00001814
_080B0C18:
	.4byte 0x00000A89
_080B0C1C:
	.4byte gRam
_080B0C20:
	.4byte 0x00000A92
_080B0C24:
	.4byte 0x000016C8
	THUMB_FUNC_END sub_080B0AA4

