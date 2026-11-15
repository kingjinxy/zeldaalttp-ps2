	THUMB_FUNC_START sub_080EEA3C
sub_080EEA3C: @ 0x080EEA3C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_08109FE4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EEA58
	b _080EEB5E
_080EEA58:
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_0810A48C
	add r0, r4, #0
	bl Sprite3_Move
	ldr r5, _080EEB14  @ =gRam
	ldr r0, _080EEB18  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EEB1C  @ =0x000010A2
	add r2, r5, r1
	add r2, r4, r2
	ldr r3, _080EEB20  @ =gUnknown_08178B60
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #7
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strb r0, [r2]
	ldr r2, _080EEB24  @ =0x00000FC2
	add r7, r5, r2
	add r0, r4, r7
	ldrb r1, [r0]
	cmp r1, #0
	bne _080EEB48
	ldr r1, _080EEB28  @ =0x00000FB2
	add r0, r5, r1
	ldrb r3, [r0]
	sub r2, r2, #224
	add r0, r5, r2
	ldrb r2, [r0]
	sub r1, r1, #176
	add r0, r5, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080EEB2C  @ =gUnknown_08178B90
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080EEB30  @ =gUnknown_08178B92
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080EEB34  @ =0x00000968
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _080EEB38  @ =0x00000ED2
	add r0, r5, r2
	ldrb r1, [r0]
	add r2, r2, #32
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #16
	ldr r2, _080EEB3C  @ =0x0000096C
	add r0, r5, r2
	strh r1, [r0]
	bl sub_0810A3D0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EEB02
	ldr r1, _080EEB40  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080EEB44  @ =0x00000F52
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
	mov r0, #16
	strb r0, [r7]
_080EEB02:
	add r0, r4, #0
	mov r1, #32
	bl sub_080C2DCC
	add r0, r4, #0
	bl sub_080EEB64
	b _080EEB5E
	.byte 0x00
	.byte 0x00
_080EEB14:
	.4byte gRam
_080EEB18:
	.4byte 0x00001052
_080EEB1C:
	.4byte 0x000010A2
_080EEB20:
	.4byte gUnknown_08178B60
_080EEB24:
	.4byte 0x00000FC2
_080EEB28:
	.4byte 0x00000FB2
_080EEB2C:
	.4byte gUnknown_08178B90
_080EEB30:
	.4byte gUnknown_08178B92
_080EEB34:
	.4byte 0x00000968
_080EEB38:
	.4byte 0x00000ED2
_080EEB3C:
	.4byte 0x0000096C
_080EEB40:
	.4byte 0x00000FA2
_080EEB44:
	.4byte 0x00000F52
_080EEB48:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080EEB5E
	add r0, r6, #0
	mov r1, #32
	bl sub_080C2CB4
	add r0, r6, #0
	bl sub_080EEB64
_080EEB5E:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EEA3C

