	THUMB_FUNC_START sub_080EE0D8
sub_080EE0D8: @ 0x080EE0D8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080EE104  @ =gRam
	ldr r3, _080EE108  @ =0x00000FC2
	add r0, r1, r3
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080EE114
	ldr r5, _080EE10C  @ =0x00000F92
	add r1, r1, r5
	add r1, r2, r1
	ldr r2, _080EE110  @ =gUnknown_08178760
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080EE120
	.byte 0x00
	.byte 0x00
_080EE104:
	.4byte gRam
_080EE108:
	.4byte 0x00000FC2
_080EE10C:
	.4byte 0x00000F92
_080EE110:
	.4byte gUnknown_08178760
_080EE114:
	ldr r5, _080EE128  @ =0x00000F52
	add r0, r1, r5
	add r0, r2, r0
	strb r3, [r0]
	mov r0, #96
	strb r0, [r4]
_080EE120:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE128:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EE0D8

