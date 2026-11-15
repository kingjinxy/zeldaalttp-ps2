	THUMB_FUNC_START sub_080CE9A8
sub_080CE9A8: @ 0x080CE9A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r2, r1, #0
	cmp r1, #63
	bls _080CE9DA
	cmp r1, #111
	bls _080CE9CC
	add r0, r4, #0
	bl SpriteActive_MainLong
	b _080CE9DA
_080CE9CC:
	mov r0, #1
	and r2, r2, r0
	cmp r2, #0
	bne _080CE9DA
	add r0, r4, #0
	bl SpriteActive_MainLong
_080CE9DA:
	ldr r5, _080CEB08  @ =gRam
	ldr r0, _080CEB0C  @ =0x0000097C
	add r7, r5, r0
	mov r1, #7
	mov r10, r1
	mov r2, r10
	strb r2, [r7]
	ldr r1, _080CEB10  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080CEB14  @ =0x0000097D
	add r2, r2, r5
	mov r9, r2
	strb r1, [r2]
	ldrb r0, [r0]
	cmp r0, #146
	bne _080CEA02
	mov r0, #3
	strb r0, [r7]
_080CEA02:
	ldr r0, _080CEB18  @ =gUnknown_030031F2
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #191
	bhi _080CEAFA
	mov r2, #3
	mov r8, r2
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	bne _080CEA20
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
_080CEA20:
	ldrb r0, [r6]
	mov r1, #0
	ldrsb r1, [r7, r1]
	and r0, r0, r1
	cmp r0, #0
	bne _080CEAFA
	mov r0, #28
	add r1, r4, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080CEAFA
	ldr r0, _080CEB1C  @ =0x00000CA2
	add r1, r5, r0
	mov r0, #11
	strh r0, [r1]
	ldr r1, _080CEB20  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r2, _080CEB24  @ =0x00001012
	add r0, r5, r2
	add r0, r4, r0
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080CEB28  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
	bl GetRandomInt
	mov r2, r10
	and r2, r2, r0
	mov r1, r9
	ldrb r0, [r1]
	cmp r0, #146
	bne _080CEA74
	mov r0, #8
	orr r2, r2, r0
_080CEA74:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	ldr r7, _080CEB2C  @ =gUnknown_08172F9C
	add r0, r2, r7
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r6, _080CEB30  @ =gUnknown_08172FAC
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080CEB34  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	bl GetRandomInt
	mov r2, r10
	and r2, r2, r0
	mov r1, r9
	ldrb r0, [r1]
	cmp r0, #146
	bne _080CEAB8
	mov r0, #8
	orr r2, r2, r0
	lsl r0, r2, #24
	lsr r2, r0, #24
_080CEAB8:
	ldr r0, _080CEB38  @ =0x00000964
	add r1, r5, r0
	add r0, r2, r7
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080CEB3C  @ =0x00000968
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r1, r1, r0
	ldr r2, _080CEB40  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080CEB18  @ =gUnknown_030031F2
	add r0, r4, r1
	mov r1, #31
	strb r1, [r0]
	add r2, r2, #112
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080CEAFA:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080CEB08:
	.4byte gRam
_080CEB0C:
	.4byte 0x0000097C
_080CEB10:
	.4byte 0x00000FF2
_080CEB14:
	.4byte 0x0000097D
_080CEB18:
	.4byte gUnknown_030031F2
_080CEB1C:
	.4byte 0x00000CA2
_080CEB20:
	.4byte 0x00000FA2
_080CEB24:
	.4byte 0x00001012
_080CEB28:
	.4byte 0x00001122
_080CEB2C:
	.4byte gUnknown_08172F9C
_080CEB30:
	.4byte gUnknown_08172FAC
_080CEB34:
	.4byte 0x00000EE2
_080CEB38:
	.4byte 0x00000964
_080CEB3C:
	.4byte 0x00000968
_080CEB40:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080CE9A8

