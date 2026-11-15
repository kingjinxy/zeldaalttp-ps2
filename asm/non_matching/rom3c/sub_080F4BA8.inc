	THUMB_FUNC_START sub_080F4BA8
sub_080F4BA8: @ 0x080F4BA8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080F4BE4  @ =gRam
	ldr r0, _080F4BE8  @ =0x00001172
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F4BEC  @ =0x000009C6
	add r0, r3, r1
	ldrh r5, [r0]
	cmp r5, #3
	bne _080F4BFC
	ldr r0, _080F4BF0  @ =gEtherMedallion
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F4C24
	ldr r1, _080F4BF4  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080F4BF8  @ =0x00000F52
	add r0, r3, r1
	add r0, r2, r0
	strb r5, [r0]
	b _080F4C24
_080F4BE4:
	.4byte gRam
_080F4BE8:
	.4byte 0x00001172
_080F4BEC:
	.4byte 0x000009C6
_080F4BF0:
	.4byte gEtherMedallion
_080F4BF4:
	.4byte 0x00000F92
_080F4BF8:
	.4byte 0x00000F52
_080F4BFC:
	ldr r0, _080F4C2C  @ =0x00000EE2
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	ldr r0, _080F4C30  @ =gBombosMedallion
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F4C24
	ldr r1, _080F4C34  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080F4C38  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080F4C24:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4C2C:
	.4byte 0x00000EE2
_080F4C30:
	.4byte gBombosMedallion
_080F4C34:
	.4byte 0x00000F92
_080F4C38:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F4BA8

