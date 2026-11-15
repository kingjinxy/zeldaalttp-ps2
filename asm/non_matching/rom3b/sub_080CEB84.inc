	THUMB_FUNC_START sub_080CEB84
sub_080CEB84: @ 0x080CEB84
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080CEC80
	ldr r3, _080CEC14  @ =gRam
	ldr r1, _080CEC18  @ =0x00000FF2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _080CEC1C  @ =0x00001012
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC20  @ =gUnknown_082275A4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC24  @ =0x00001022
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC28  @ =gUnknown_0822769D
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC2C  @ =0x00001132
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC30  @ =gUnknown_08227988
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC34  @ =0x000011B2
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC38  @ =gUnknown_08227B7A
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC3C  @ =0x00000E75
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC40  @ =gUnknown_08227C73
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC44  @ =0x00000EA5
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC48  @ =gUnknown_08227796
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CEC4C  @ =0x00000D84
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080CEC50  @ =gUnknown_08227A81
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080CEC54  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080CEC58
	mov r2, #171
	lsl r2, r2, #4
	add r0, r3, r2
	b _080CEC5C
	.byte 0x00
	.byte 0x00
_080CEC14:
	.4byte gRam
_080CEC18:
	.4byte 0x00000FF2
_080CEC1C:
	.4byte 0x00001012
_080CEC20:
	.4byte gUnknown_082275A4
_080CEC24:
	.4byte 0x00001022
_080CEC28:
	.4byte gUnknown_0822769D
_080CEC2C:
	.4byte 0x00001132
_080CEC30:
	.4byte gUnknown_08227988
_080CEC34:
	.4byte 0x000011B2
_080CEC38:
	.4byte gUnknown_08227B7A
_080CEC3C:
	.4byte 0x00000E75
_080CEC40:
	.4byte gUnknown_08227C73
_080CEC44:
	.4byte 0x00000EA5
_080CEC48:
	.4byte gUnknown_08227796
_080CEC4C:
	.4byte 0x00000D84
_080CEC50:
	.4byte gUnknown_08227A81
_080CEC54:
	.4byte 0x000009B2
_080CEC58:
	ldr r1, _080CEC74  @ =0x00000B36
	add r0, r3, r1
_080CEC5C:
	ldrb r1, [r0]
	ldr r0, _080CEC78  @ =gRam
	ldr r2, _080CEC7C  @ =0x00000E65
	add r0, r0, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite_LoadPalette
	pop {r4}
	pop {r0}
	bx r0
_080CEC74:
	.4byte 0x00000B36
_080CEC78:
	.4byte gRam
_080CEC7C:
	.4byte 0x00000E65
	THUMB_FUNC_END sub_080CEB84

