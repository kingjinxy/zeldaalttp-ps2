	THUMB_FUNC_START sub_080EED94
sub_080EED94: @ 0x080EED94
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl Sprite3_Move
	ldr r5, _080EEDD4  @ =gRam
	ldr r1, _080EEDD8  @ =0x00000E75
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080EEDDC  @ =0x00000FD2
	add r0, r5, r2
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080EEE1C
	ldr r1, _080EEDE0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #0
	bne _080EEDE8
	ldr r2, _080EEDE4  @ =0x00001052
	add r1, r5, r2
	b _080EEE34
	.byte 0x00
	.byte 0x00
_080EEDD4:
	.4byte gRam
_080EEDD8:
	.4byte 0x00000E75
_080EEDDC:
	.4byte 0x00000FD2
_080EEDE0:
	.4byte 0x00000FC2
_080EEDE4:
	.4byte 0x00001052
_080EEDE8:
	cmp r1, #1
	beq _080EEE08
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080EEE04  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #26
	strb r0, [r2]
	b _080EEE84
_080EEE04:
	.4byte 0x00000F92
_080EEE08:
	mov r0, #35
	strb r0, [r3]
	ldr r3, _080EEE18  @ =0x00000F92
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	b _080EEE84
	.byte 0x00
	.byte 0x00
_080EEE18:
	.4byte 0x00000F92
_080EEE1C:
	cmp r2, #1
	bne _080EEE74
	add r0, r4, #0
	mov r1, #48
	bl sub_080C35FC
	add r0, r4, #0
	mov r1, #100
	bl sub_080CF140
	ldr r0, _080EEE68  @ =0x00001052
	add r1, r5, r0
_080EEE34:
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _080EEE6C  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	ldr r4, _080EEE70  @ =gUnknown_08178BA6
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r3, #3
	and r0, r0, r3
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r2]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #26
	and r0, r0, r3
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r2]
	b _080EEE84
	.byte 0x00
	.byte 0x00
_080EEE68:
	.4byte 0x00001052
_080EEE6C:
	.4byte 0x00000F92
_080EEE70:
	.4byte gUnknown_08178BA6
_080EEE74:
	ldr r2, _080EEE8C  @ =0x00000F92
	add r1, r5, r2
	add r1, r6, r1
	ldr r2, _080EEE90  @ =gUnknown_08178BAA
	lsr r0, r0, #26
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EEE84:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EEE8C:
	.4byte 0x00000F92
_080EEE90:
	.4byte gUnknown_08178BAA
	THUMB_FUNC_END sub_080EED94

