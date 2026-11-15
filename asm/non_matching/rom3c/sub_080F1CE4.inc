	THUMB_FUNC_START sub_080F1CE4
sub_080F1CE4: @ 0x080F1CE4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C3138
	add r0, r5, #0
	bl sub_080CA2A4
	add r0, r5, #0
	bl sub_080C99DC
	ldr r3, _080F1D30  @ =gRam
	ldr r0, _080F1D34  @ =0x00001152
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	mov r4, #0
	strb r0, [r1]
	ldr r1, _080F1D38  @ =0x00001142
	add r0, r3, r1
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F1DA0
	strb r4, [r2]
	ldr r2, _080F1D3C  @ =0x000015E2
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #9
	bne _080F1D40
	add r0, r5, #0
	bl sub_080C969C
	b _080F1D52
_080F1D30:
	.4byte gRam
_080F1D34:
	.4byte 0x00001152
_080F1D38:
	.4byte 0x00001142
_080F1D3C:
	.4byte 0x000015E2
_080F1D40:
	cmp r0, #8
	bne _080F1D52
	ldr r6, _080F1E0C  @ =0x00000FA2
	add r0, r3, r6
	add r0, r5, r0
	strb r4, [r0]
	add r0, r5, #0
	bl sub_080C969C
_080F1D52:
	bl GetRandomInt
	ldr r4, _080F1E10  @ =gRam
	ldr r1, _080F1E14  @ =0x00001152
	add r2, r4, r1
	add r2, r5, r2
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r2]
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	ldr r6, _080F1E18  @ =0x00000F22
	add r1, r4, r6
	add r1, r5, r1
	ldr r0, _080F1E1C  @ =gUnknown_08178F5A
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F1E20  @ =0x00000F12
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _080F1E24  @ =gUnknown_08178F62
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r2, _080F1E28  @ =0x00000FB2
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r6, _080F1E2C  @ =0x00001052
	add r4, r4, r6
	add r4, r5, r4
	mov r0, #3
	strb r0, [r4]
_080F1DA0:
	ldr r2, _080F1E10  @ =gRam
	ldr r1, _080F1E2C  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #7
	and r1, r1, r0
	add r4, r2, #0
	cmp r1, #0
	bne _080F1DE0
	ldr r2, _080F1E30  @ =0x00000F62
	add r0, r4, r2
	add r6, r5, r0
	ldr r1, _080F1E34  @ =gUnknown_08178F55
	add r2, r2, #80
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r2, #1
	and r2, r2, r0
	add r1, r2, r1
	ldrb r3, [r6]
	ldrb r1, [r1]
	cmp r3, r1
	beq _080F1DE0
	ldr r0, _080F1E38  @ =gUnknown_08178F6A
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r3, r0
	strb r0, [r6]
_080F1DE0:
	ldr r6, _080F1E3C  @ =0x00000F92
	add r2, r4, r6
	add r2, r5, r2
	ldr r1, _080F1E40  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	lsr r1, r1, #3
	mov r0, #1
	and r1, r1, r0
	ldr r3, _080F1E44  @ =gUnknown_08178F57
	sub r6, r6, #48
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	add r0, r0, r1
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1E0C:
	.4byte 0x00000FA2
_080F1E10:
	.4byte gRam
_080F1E14:
	.4byte 0x00001152
_080F1E18:
	.4byte 0x00000F22
_080F1E1C:
	.4byte gUnknown_08178F5A
_080F1E20:
	.4byte 0x00000F12
_080F1E24:
	.4byte gUnknown_08178F62
_080F1E28:
	.4byte 0x00000FB2
_080F1E2C:
	.4byte 0x00001052
_080F1E30:
	.4byte 0x00000F62
_080F1E34:
	.4byte gUnknown_08178F55
_080F1E38:
	.4byte gUnknown_08178F6A
_080F1E3C:
	.4byte 0x00000F92
_080F1E40:
	.4byte 0x00000996
_080F1E44:
	.4byte gUnknown_08178F57
	THUMB_FUNC_END sub_080F1CE4

