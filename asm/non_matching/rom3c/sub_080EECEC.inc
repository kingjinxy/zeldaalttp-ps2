	THUMB_FUNC_START sub_080EECEC
sub_080EECEC: @ 0x080EECEC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080EED64  @ =gRam
	ldr r2, _080EED68  @ =0x00000FB2
	add r1, r4, r2
	ldrb r5, [r1]
	ldr r3, _080EED6C  @ =gUnknown_02003040
	add r1, r0, r3
	ldrb r3, [r1]
	ldr r2, _080EED70  @ =gUnknown_02003050
	add r1, r0, r2
	ldrb r2, [r1]
	lsl r2, r2, #8
	ldr r1, _080EED74  @ =gUnknown_08178BA0
	add r1, r5, r1
	orr r3, r3, r2
	ldrb r1, [r1]
	add r3, r3, r1
	ldr r1, _080EED78  @ =gUnknown_08178BA2
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r3, r3, r1
	ldr r2, _080EED7C  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	strb r3, [r1]
	add r2, r2, #32
	add r1, r4, r2
	add r1, r0, r1
	lsr r3, r3, #8
	strb r3, [r1]
	ldr r3, _080EED80  @ =gUnknown_02003060
	add r1, r0, r3
	ldrb r2, [r1]
	add r3, r3, #16
	add r1, r0, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	ldr r3, _080EED84  @ =gUnknown_08178BA4
	add r5, r5, r3
	orr r2, r2, r1
	ldrb r5, [r5]
	add r2, r2, r5
	ldr r1, _080EED88  @ =0xFFFFFF00
	add r2, r2, r1
	ldr r3, _080EED8C  @ =0x00000ED2
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	ldr r1, _080EED90  @ =0x00000EF2
	add r4, r4, r1
	add r0, r0, r4
	lsr r2, r2, #8
	strb r2, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EED64:
	.4byte gRam
_080EED68:
	.4byte 0x00000FB2
_080EED6C:
	.4byte gUnknown_02003040
_080EED70:
	.4byte gUnknown_02003050
_080EED74:
	.4byte gUnknown_08178BA0
_080EED78:
	.4byte gUnknown_08178BA2
_080EED7C:
	.4byte 0x00000EE2
_080EED80:
	.4byte gUnknown_02003060
_080EED84:
	.4byte gUnknown_08178BA4
_080EED88:
	.4byte 0xFFFFFF00
_080EED8C:
	.4byte 0x00000ED2
_080EED90:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_080EECEC

