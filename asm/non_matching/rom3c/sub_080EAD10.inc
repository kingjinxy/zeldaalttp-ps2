	THUMB_FUNC_START sub_080EAD10
sub_080EAD10: @ 0x080EAD10
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EAD44  @ =gRam
	ldr r1, _080EAD48  @ =0x00000FC2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	add r1, r2, #0
	cmp r1, #0
	bne _080EAD50
	ldr r2, _080EAD4C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	mov r0, #64
	strb r0, [r3]
	add r2, r2, #64
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E2614
	b _080EADC8
	.byte 0x00
	.byte 0x00
_080EAD44:
	.4byte gRam
_080EAD48:
	.4byte 0x00000FC2
_080EAD4C:
	.4byte 0x00000F52
_080EAD50:
	mov r0, #7
	and r0, r0, r2
	cmp r0, #0
	bne _080EAD88
	ldr r0, _080EADD0  @ =0x00000F62
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _080EADD4  @ =gUnknown_08177D52
	ldr r1, _080EADD8  @ =0x00000F72
	add r0, r5, r1
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _080EAD88
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080EAD88:
	ldr r3, _080EADDC  @ =gRam
	ldr r2, _080EADD0  @ =0x00000F62
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #15
	and r2, r2, r0
	ldr r0, _080EADE0  @ =0x00000F22
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080EADE4  @ =gUnknown_08177D54
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EADE8  @ =0x00000F12
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080EADEC  @ =gUnknown_08177D64
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080EADF0  @ =0x00000F92
	add r2, r3, r1
	add r2, r4, r2
	ldr r0, _080EADF4  @ =0x00000996
	add r3, r3, r0
	ldrb r0, [r3]
	lsr r0, r0, #2
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #1
	strb r0, [r2]
_080EADC8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EADD0:
	.4byte 0x00000F62
_080EADD4:
	.4byte gUnknown_08177D52
_080EADD8:
	.4byte 0x00000F72
_080EADDC:
	.4byte gRam
_080EADE0:
	.4byte 0x00000F22
_080EADE4:
	.4byte gUnknown_08177D54
_080EADE8:
	.4byte 0x00000F12
_080EADEC:
	.4byte gUnknown_08177D64
_080EADF0:
	.4byte 0x00000F92
_080EADF4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080EAD10

