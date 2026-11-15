	THUMB_FUNC_START sub_080EDE0C
sub_080EDE0C: @ 0x080EDE0C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EDE34  @ =gRam
	ldr r1, _080EDE38  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EDE44
	ldr r2, _080EDE3C  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080EDE40  @ =gUnknown_0817873C
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080EDE6E
_080EDE34:
	.4byte gRam
_080EDE38:
	.4byte 0x00000FC2
_080EDE3C:
	.4byte 0x00000F92
_080EDE40:
	.4byte gUnknown_0817873C
_080EDE44:
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080EDE74  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r0, _080EDE78  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	ldr r2, _080EDE7C  @ =gUnknown_08178744
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r6]
_080EDE6E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EDE74:
	.4byte 0x00000FB2
_080EDE78:
	.4byte 0x00000F52
_080EDE7C:
	.4byte gUnknown_08178744
	THUMB_FUNC_END sub_080EDE0C

