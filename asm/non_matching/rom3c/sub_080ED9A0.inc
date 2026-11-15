	THUMB_FUNC_START sub_080ED9A0
sub_080ED9A0: @ 0x080ED9A0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080ED9BC  @ =gRam
	ldr r1, _080ED9C0  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ED9C4
	add r0, r4, #0
	bl sub_080EDA58
	b _080ED9CA
_080ED9BC:
	.4byte gRam
_080ED9C0:
	.4byte 0x00000F52
_080ED9C4:
	add r0, r4, #0
	bl sub_080C6240
_080ED9CA:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080EDA4C
	ldr r5, _080EDA2C  @ =gRam
	ldr r0, _080EDA30  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EDA34  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080EDA38  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080EDA40
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080EDA3C  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EDA4C
	add r0, r4, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EDA4C
	mov r0, #16
	strb r0, [r6]
	b _080EDA4C
_080EDA2C:
	.4byte gRam
_080EDA30:
	.4byte 0x00001052
_080EDA34:
	.4byte 0x00000F92
_080EDA38:
	.4byte 0x00000FC2
_080EDA3C:
	.4byte 0x00000FE2
_080EDA40:
	cmp r0, #1
	bne _080EDA4C
	ldr r1, _080EDA54  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
_080EDA4C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EDA54:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080ED9A0

