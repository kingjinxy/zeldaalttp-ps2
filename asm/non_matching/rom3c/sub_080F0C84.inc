	THUMB_FUNC_START sub_080F0C84
sub_080F0C84: @ 0x080F0C84
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080F0CB8  @ =gRam
	ldr r1, _080F0CBC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F0CC8
	ldr r0, _080F0CC0  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080F0CC4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl Sprite3_Move
	b _080F0D3C
	.byte 0x00
	.byte 0x00
_080F0CB8:
	.4byte gRam
_080F0CBC:
	.4byte 0x00000FC2
_080F0CC0:
	.4byte 0x00000F92
_080F0CC4:
	.4byte 0x00000996
_080F0CC8:
	add r0, r4, #0
	bl sub_080F0E04
	add r0, r4, #0
	bl sub_080F0E3C
	ldr r1, _080F0CE8  @ =0x00000F62
	add r0, r6, r1
	add r3, r4, r0
	ldrb r0, [r3]
	add r5, r0, #0
	cmp r5, #0
	beq _080F0CEC
	sub r0, r0, #1
	strb r0, [r3]
	b _080F0D3C
_080F0CE8:
	.4byte 0x00000F62
_080F0CEC:
	ldr r1, _080F0D20  @ =0x00000F72
	add r0, r6, r1
	add r0, r4, r0
	ldrb r2, [r0]
	add r1, r2, #1
	strb r1, [r0]
	ldr r0, _080F0D24  @ =gUnknown_08178D8C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _080F0D28  @ =gUnknown_08178D8F
	add r2, r2, r0
	ldrb r2, [r2]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080F0D34
	ldr r1, _080F0D2C  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r1, _080F0D30  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	b _080F0D3C
_080F0D20:
	.4byte 0x00000F72
_080F0D24:
	.4byte gUnknown_08178D8C
_080F0D28:
	.4byte gUnknown_08178D8F
_080F0D2C:
	.4byte 0x00000F52
_080F0D30:
	.4byte 0x00001052
_080F0D34:
	ldr r1, _080F0D44  @ =0x00001082
	add r0, r6, r1
	add r0, r7, r0
	strb r2, [r0]
_080F0D3C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0D44:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080F0C84

