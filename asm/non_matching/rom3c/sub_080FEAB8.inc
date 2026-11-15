	THUMB_FUNC_START sub_080FEAB8
sub_080FEAB8: @ 0x080FEAB8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, #95
	bl sub_080CF140
	mov r5, #2
_080FEACC:
	mov r0, #137
	mov r1, r8
	bl sub_080CA538
	add r4, r0, #0
	lsl r7, r5, #24
	cmp r4, #0
	blt _080FEB6E
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r5, _080FEB84  @ =gRam
	ldr r0, _080FEB88  @ =0x00000ED2
	add r3, r5, r0
	add r3, r4, r3
	ldr r1, _080FEB8C  @ =0x00000964
	add r0, r5, r1
	add r1, r1, #4
	add r2, r5, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	sub r1, r1, r0
	add r1, r1, #3
	mov r2, #0
	mov r12, r2
	strb r1, [r3]
	ldr r1, _080FEB90  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _080FEB94  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080FEB98  @ =0x00000EE2
	add r1, r5, r0
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r3, r5, r2
	ldr r0, _080FEB9C  @ =gUnknown_0817AB6A
	asr r6, r7, #24
	add r0, r6, r0
	ldrb r2, [r0]
	ldrb r3, [r3]
	add r0, r2, r3
	strb r0, [r1]
	ldr r1, _080FEBA0  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080FEBA4  @ =0x00000F12
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _080FEBA8  @ =gUnknown_0817AB6D
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FEBAC  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r12
	strb r2, [r0]
	mov r1, #0
	ldr r2, _080FEBB0  @ =0x000009DA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FEB5C
	mov r1, #1
_080FEB5C:
	cmp r1, #0
	beq _080FEB6E
	cmp r6, #1
	bne _080FEB6E
	ldr r1, _080FEBB4  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r12
	strb r2, [r0]
_080FEB6E:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r7, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _080FEACC
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080FEB84:
	.4byte gRam
_080FEB88:
	.4byte 0x00000ED2
_080FEB8C:
	.4byte 0x00000964
_080FEB90:
	.4byte 0x00000FC2
_080FEB94:
	.4byte 0x00001172
_080FEB98:
	.4byte 0x00000EE2
_080FEB9C:
	.4byte gUnknown_0817AB6A
_080FEBA0:
	.4byte 0x00000F22
_080FEBA4:
	.4byte 0x00000F12
_080FEBA8:
	.4byte gUnknown_0817AB6D
_080FEBAC:
	.4byte 0x00001142
_080FEBB0:
	.4byte 0x000009DA
_080FEBB4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FEAB8

