	THUMB_FUNC_START sub_080EE3CC
sub_080EE3CC: @ 0x080EE3CC
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080EE440  @ =gRam
	ldr r0, _080EE444  @ =0x00000F62
	add r3, r5, r0
	add r3, r4, r3
	ldr r1, _080EE448  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r3]
	ldr r0, _080EE44C  @ =0x00001122
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080EE450  @ =gUnknown_08178A40
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EE454  @ =0x00001022
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080EE458  @ =gUnknown_08178A42
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EE45C  @ =0x00000EA5
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080EE460  @ =gUnknown_08178A44
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	ldr r1, _080EE464  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080EE468  @ =0x00000F52
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080EE440:
	.4byte gRam
_080EE444:
	.4byte 0x00000F62
_080EE448:
	.4byte 0x00000EE2
_080EE44C:
	.4byte 0x00001122
_080EE450:
	.4byte gUnknown_08178A40
_080EE454:
	.4byte 0x00001022
_080EE458:
	.4byte gUnknown_08178A42
_080EE45C:
	.4byte 0x00000EA5
_080EE460:
	.4byte gUnknown_08178A44
_080EE464:
	.4byte 0x00001152
_080EE468:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EE3CC

