	THUMB_FUNC_START sub_080F0E3C
sub_080F0E3C: @ 0x080F0E3C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F0E74  @ =gRam
	ldr r3, _080F0E78  @ =0x00001082
	add r1, r2, r3
	add r1, r0, r1
	ldrb r4, [r1]
	ldr r1, _080F0E7C  @ =0x00000F22
	add r3, r2, r1
	add r3, r0, r3
	ldr r1, _080F0E80  @ =gUnknown_08178D93
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r3, _080F0E84  @ =0x00000F12
	add r2, r2, r3
	add r2, r0, r2
	ldr r1, _080F0E88  @ =gUnknown_08178D97
	add r4, r4, r1
	ldrb r1, [r4]
	strb r1, [r2]
	bl Sprite3_Move
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0E74:
	.4byte gRam
_080F0E78:
	.4byte 0x00001082
_080F0E7C:
	.4byte 0x00000F22
_080F0E80:
	.4byte gUnknown_08178D93
_080F0E84:
	.4byte 0x00000F12
_080F0E88:
	.4byte gUnknown_08178D97
	THUMB_FUNC_END sub_080F0E3C

