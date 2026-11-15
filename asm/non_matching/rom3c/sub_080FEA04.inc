	THUMB_FUNC_START sub_080FEA04
sub_080FEA04: @ 0x080FEA04
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r7, #0
	mov r6, #3
_080FEA0E:
	add r0, r5, #0
	bl sub_080D0E24
	add r3, r0, #0
	cmp r3, #0
	blt _080FEA78
	ldr r4, _080FEA98  @ =gRam
	ldr r1, _080FEA9C  @ =0x00001082
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080FEAA0  @ =0x00000F62
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080FEAA4  @ =0x00000EA5
	add r2, r4, r0
	add r2, r3, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #5
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080FEAA8  @ =0x00000E75
	add r1, r4, r0
	add r1, r3, r1
	ldrb r2, [r1]
	mov r0, #253
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080FEAAC  @ =0x00000F22
	add r0, r4, r1
	add r1, r3, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080FEA60
	add r0, r0, #3
_080FEA60:
	asr r0, r0, #2
	strb r0, [r1]
	ldr r1, _080FEAB0  @ =0x00000F12
	add r0, r4, r1
	add r1, r3, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080FEA74
	add r0, r0, #3
_080FEA74:
	asr r0, r0, #2
	strb r0, [r1]
_080FEA78:
	sub r6, r6, #1
	cmp r6, #0
	bge _080FEA0E
	add r0, r5, #0
	bl sub_080CBBEC
	ldr r0, _080FEA98  @ =gRam
	ldr r1, _080FEAB4  @ =0x00000FA2
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FEA98:
	.4byte gRam
_080FEA9C:
	.4byte 0x00001082
_080FEAA0:
	.4byte 0x00000F62
_080FEAA4:
	.4byte 0x00000EA5
_080FEAA8:
	.4byte 0x00000E75
_080FEAAC:
	.4byte 0x00000F22
_080FEAB0:
	.4byte 0x00000F12
_080FEAB4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FEA04

