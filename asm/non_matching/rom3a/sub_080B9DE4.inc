	THUMB_FUNC_START sub_080B9DE4
sub_080B9DE4: @ 0x080B9DE4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _080B9E10  @ =gRam
	ldr r2, _080B9E14  @ =0x00000A02
	add r1, r0, r2
	ldrb r4, [r1]
	ldr r3, _080B9E18  @ =0x00000A03
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r4, r4, r0
	mov r0, #128
	lsl r0, r0, #2
	cmp r4, r0
	bne _080B9E1C
	mov r0, #103
	mov r1, #0
	bl sub_0812A324
	b _080B9E2C
	.byte 0x00
	.byte 0x00
_080B9E10:
	.4byte gRam
_080B9E14:
	.4byte 0x00000A02
_080B9E18:
	.4byte 0x00000A03
_080B9E1C:
	mov r0, #130
	lsl r0, r0, #2
	cmp r4, r0
	bne _080B9E2C
	mov r0, #15
	mov r1, #0
	bl sub_0812A324
_080B9E2C:
	ldr r1, _080B9EE8  @ =0xFFFFFDF7
	add r0, r4, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #46
	bhi _080B9E48
	add r2, r4, #0
	sub r2, r2, #8
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r5, #0
	mov r1, #2
	bl sub_080B93A8
_080B9E48:
	ldr r0, _080B9EEC  @ =0x000001FF
	ldr r6, _080B9EF0  @ =gRam
	cmp r4, r0
	bls _080B9E58
	ldr r2, _080B9EF4  @ =0x00000F95
	add r1, r6, r2
	mov r0, #1
	strb r0, [r1]
_080B9E58:
	ldr r3, _080B9EF8  @ =0x00001125
	add r1, r6, r3
	mov r4, #0
	mov r0, #49
	strb r0, [r1]
	mov r0, #3
	mov r1, #8
	mov r2, #4
	bl sub_080BD874
	ldr r1, _080B9EFC  @ =0x00001015
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _080B9F00  @ =0x00001035
	add r0, r6, r2
	mov r5, #16
	strb r5, [r0]
	mov r0, #4
	bl sub_080CF370
	mov r0, #3
	bl sub_080C6230
	ldr r3, _080B9F04  @ =0x00000F94
	add r1, r6, r3
	ldr r2, _080B9EF4  @ =0x00000F95
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r2, [r1]
	ldr r3, _080B9F08  @ =0x00001742
	add r0, r6, r3
	strb r4, [r0]
	ldr r0, _080B9F0C  @ =gUnknown_08170FAC
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r6, r3
	strb r1, [r0]
	ldr r0, _080B9F10  @ =0x00001124
	add r1, r6, r0
	mov r0, #48
	strb r0, [r1]
	ldr r1, _080B9F14  @ =gUnknown_08170FAE
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	sub r3, r3, #7
	add r0, r6, r3
	strh r1, [r0]
	ldr r0, _080B9F18  @ =gUnknown_08170FB2
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #2
	mov r2, #5
	bl sub_080BD874
	ldr r1, _080B9F1C  @ =0x00001014
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _080B9F20  @ =0x00001034
	add r0, r6, r2
	strb r5, [r0]
	mov r0, #4
	bl sub_080CF370
	mov r0, #2
	bl sub_080C6230
	pop {r4-r6}
	pop {r0}
	bx r0
_080B9EE8:
	.4byte 0xFFFFFDF7
_080B9EEC:
	.4byte 0x000001FF
_080B9EF0:
	.4byte gRam
_080B9EF4:
	.4byte 0x00000F95
_080B9EF8:
	.4byte 0x00001125
_080B9EFC:
	.4byte 0x00001015
_080B9F00:
	.4byte 0x00001035
_080B9F04:
	.4byte 0x00000F94
_080B9F08:
	.4byte 0x00001742
_080B9F0C:
	.4byte gUnknown_08170FAC
_080B9F10:
	.4byte 0x00001124
_080B9F14:
	.4byte gUnknown_08170FAE
_080B9F18:
	.4byte gUnknown_08170FB2
_080B9F1C:
	.4byte 0x00001014
_080B9F20:
	.4byte 0x00001034
	THUMB_FUNC_END sub_080B9DE4

