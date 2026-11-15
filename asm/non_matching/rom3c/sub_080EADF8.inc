	THUMB_FUNC_START sub_080EADF8
sub_080EADF8: @ 0x080EADF8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080EAE38  @ =gRam
	ldr r2, _080EAE3C  @ =0x0000164C
	add r1, r3, r2
	ldrb r4, [r1]
	ldr r1, _080EAE40  @ =0x00000EA5
	add r2, r3, r1
	add r2, r0, r2
	ldr r1, _080EAE44  @ =gUnknown_08177D48
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080EAE48  @ =0x00001022
	add r2, r3, r1
	add r2, r0, r2
	ldr r1, _080EAE4C  @ =gUnknown_08177D4A
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _080EAE50  @ =0x000011B2
	add r3, r3, r2
	add r0, r0, r3
	ldr r1, _080EAE54  @ =gUnknown_08177D4C
	add r4, r4, r1
	ldrb r1, [r4]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EAE38:
	.4byte gRam
_080EAE3C:
	.4byte 0x0000164C
_080EAE40:
	.4byte 0x00000EA5
_080EAE44:
	.4byte gUnknown_08177D48
_080EAE48:
	.4byte 0x00001022
_080EAE4C:
	.4byte gUnknown_08177D4A
_080EAE50:
	.4byte 0x000011B2
_080EAE54:
	.4byte gUnknown_08177D4C
	THUMB_FUNC_END sub_080EADF8

