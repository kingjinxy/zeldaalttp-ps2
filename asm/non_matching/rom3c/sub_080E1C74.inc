	THUMB_FUNC_START sub_080E1C74
sub_080E1C74: @ 0x080E1C74
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E263C
	ldr r6, _080E1D14  @ =gRam
	ldr r1, _080E1D18  @ =0x00001002
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #4
	bhi _080E1D4C
	ldr r3, _080E1D1C  @ =0x00000FC2
	add r0, r6, r3
	add r3, r4, r0
	ldrb r2, [r3]
	cmp r2, #0
	beq _080E1D44
	ldr r1, _080E1D20  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080E1CB2
	add r0, r2, #1
	strb r0, [r3]
_080E1CB2:
	ldr r3, _080E1D24  @ =0x00001042
	add r0, r6, r3
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080E1CDA
	ldr r0, _080E1D28  @ =0x00000FB2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
	ldr r1, _080E1D2C  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
_080E1CDA:
	ldr r3, _080E1D30  @ =0x00000F22
	add r1, r6, r3
	add r1, r4, r1
	ldr r2, _080E1D34  @ =gUnknown_08176910
	ldr r0, _080E1D28  @ =0x00000FB2
	add r3, r6, r0
	add r3, r4, r3
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1D38  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1D3C  @ =gUnknown_08176914
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E1D40  @ =0x00001082
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r3]
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E1E70
	b _080E1E34
	.byte 0x00
	.byte 0x00
_080E1D14:
	.4byte gRam
_080E1D18:
	.4byte 0x00001002
_080E1D1C:
	.4byte 0x00000FC2
_080E1D20:
	.4byte 0x00001052
_080E1D24:
	.4byte 0x00001042
_080E1D28:
	.4byte 0x00000FB2
_080E1D2C:
	.4byte 0x00000FD2
_080E1D30:
	.4byte 0x00000F22
_080E1D34:
	.4byte gUnknown_08176910
_080E1D38:
	.4byte 0x00000F12
_080E1D3C:
	.4byte gUnknown_08176914
_080E1D40:
	.4byte 0x00001082
_080E1D44:
	add r0, r4, #0
	bl sub_080E264C
	b _080E1E34
_080E1D4C:
	ldr r3, _080E1DA0  @ =0x00000F22
	add r1, r6, r3
	add r1, r4, r1
	ldr r2, _080E1DA4  @ =gUnknown_08176960
	add r3, r3, #80
	add r0, r6, r3
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1DA8  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1DAC  @ =gUnknown_08176968
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C79F8
	ldr r1, _080E1DB0  @ =0x00000FE2
	add r0, r6, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080E1DBC
	ldr r0, _080E1DB4  @ =0x00001042
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1DB8  @ =gUnknown_08176990
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080E1DCA
	mov r0, #88
	strb r0, [r3]
	b _080E1DCA
_080E1DA0:
	.4byte 0x00000F22
_080E1DA4:
	.4byte gUnknown_08176960
_080E1DA8:
	.4byte 0x00000F12
_080E1DAC:
	.4byte gUnknown_08176968
_080E1DB0:
	.4byte 0x00000FE2
_080E1DB4:
	.4byte 0x00001042
_080E1DB8:
	.4byte gUnknown_08176990
_080E1DBC:
	cmp r0, #44
	bne _080E1DCA
	ldr r0, _080E1E3C  @ =gUnknown_081769A0
	ldrb r1, [r5]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r5]
_080E1DCA:
	ldr r6, _080E1E40  @ =gRam
	ldr r1, _080E1E44  @ =0x00001042
	add r2, r6, r1
	add r2, r4, r2
	ldr r1, _080E1E48  @ =gUnknown_08176988
	ldr r3, _080E1E4C  @ =0x00000F72
	add r0, r6, r3
	add r3, r4, r0
	ldrb r5, [r3]
	add r1, r5, r1
	ldrb r2, [r2]
	ldrb r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080E1DF0
	ldr r0, _080E1E50  @ =gUnknown_08176998
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080E1DF0:
	ldr r0, _080E1E54  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1E58  @ =gUnknown_08176970
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1E5C  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1E60  @ =gUnknown_08176978
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1E64  @ =0x00000FB2
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E1E68  @ =gUnknown_08176980
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1E6C  @ =0x00001082
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E1E70
_080E1E34:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E1E3C:
	.4byte gUnknown_081769A0
_080E1E40:
	.4byte gRam
_080E1E44:
	.4byte 0x00001042
_080E1E48:
	.4byte gUnknown_08176988
_080E1E4C:
	.4byte 0x00000F72
_080E1E50:
	.4byte gUnknown_08176998
_080E1E54:
	.4byte 0x00000F22
_080E1E58:
	.4byte gUnknown_08176970
_080E1E5C:
	.4byte 0x00000F12
_080E1E60:
	.4byte gUnknown_08176978
_080E1E64:
	.4byte 0x00000FB2
_080E1E68:
	.4byte gUnknown_08176980
_080E1E6C:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080E1C74

