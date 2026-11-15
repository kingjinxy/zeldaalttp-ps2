	THUMB_FUNC_START sub_080BAA54
sub_080BAA54: @ 0x080BAA54
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r0, #6
	mov r8, r0
	ldr r7, _080BAAEC  @ =gRam
	ldr r1, _080BAAF0  @ =0x000015DC
	add r1, r1, r7
	mov r9, r1
_080BAA68:
	mov r2, r8
	lsl r0, r2, #24
	asr r5, r0, #24
	add r6, r0, #0
	cmp r5, #4
	ble _080BAB10
	ldr r3, _080BAAF4  @ =0x00000FF2
	add r0, r7, r3
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	lsr r4, r6, #24
	mov r1, #1
	ldr r2, _080BAAF8  @ =0x00001012
	add r0, r7, r2
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #64
	add r0, r7, r3
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r0, _080BAAFC  @ =0x00000F92
	add r2, r7, r0
	add r2, r5, r2
	ldr r1, _080BAB00  @ =0x00000996
	add r0, r7, r1
	ldrb r0, [r0]
	add r0, r0, r5
	mov r1, #8
	and r0, r0, r1
	asr r0, r0, #3
	strb r0, [r2]
	ldr r2, _080BAB04  @ =0x00001142
	add r0, r7, r2
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080B925C
	ldr r3, _080BAB08  @ =0x00001122
	add r2, r7, r3
	add r2, r5, r2
	ldr r1, _080BAB0C  @ =0x00000F22
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #64
	and r0, r0, r1
	mov r1, #15
	eor r0, r0, r1
	strb r0, [r2]
	mov r0, #8
	bl sub_080CF370
	mov r2, r9
	strb r4, [r2]
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl SpriteActive_MainLong
	b _080BAC06
_080BAAEC:
	.4byte gRam
_080BAAF0:
	.4byte 0x000015DC
_080BAAF4:
	.4byte 0x00000FF2
_080BAAF8:
	.4byte 0x00001012
_080BAAFC:
	.4byte 0x00000F92
_080BAB00:
	.4byte 0x00000996
_080BAB04:
	.4byte 0x00001142
_080BAB08:
	.4byte 0x00001122
_080BAB0C:
	.4byte 0x00000F22
_080BAB10:
	ldr r3, _080BAB6C  @ =gRam
	ldr r1, _080BAB70  @ =0x00000FF2
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #13
	strb r1, [r0]
	cmp r5, #1
	bne _080BAB26
	ldr r2, _080BAB74  @ =0x00001083
	add r0, r3, r2
	strb r1, [r0]
_080BAB26:
	lsr r1, r6, #24
	mov r4, #3
	ldr r2, _080BAB78  @ =0x00001012
	add r0, r3, r2
	add r0, r1, r0
	strb r4, [r0]
	add r2, r2, #32
	add r0, r3, r2
	add r1, r1, r0
	mov r0, #16
	strb r0, [r1]
	ldr r1, _080BAB7C  @ =0x00001122
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #43
	strb r1, [r0]
	sub r2, r2, #112
	add r0, r3, r2
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080BAB56
	mov r0, #192
	strb r0, [r1]
_080BAB56:
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r2, r1, #0
	cmp r2, #0
	bne _080BAB84
	ldr r2, _080BAB80  @ =0x00000F12
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	add r2, r2, #16
	b _080BABC0
_080BAB6C:
	.4byte gRam
_080BAB70:
	.4byte 0x00000FF2
_080BAB74:
	.4byte 0x00001083
_080BAB78:
	.4byte 0x00001012
_080BAB7C:
	.4byte 0x00001122
_080BAB80:
	.4byte 0x00000F12
_080BAB84:
	ldr r1, _080BAC3C  @ =gUnknown_08171011
	sub r0, r5, #1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r2, r0
	bcs _080BABC6
	ldr r1, _080BAC40  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080BABC6
	ldr r2, _080BAC44  @ =0x00000F12
	add r0, r3, r2
	add r2, r5, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _080BABC6
	sub r0, r1, #1
	strb r0, [r2]
	add r0, r0, #252
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r5, #2
	bgt _080BABBE
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080BABBE:
	ldr r2, _080BAC48  @ =0x00000F22
_080BABC0:
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
_080BABC6:
	mov r0, r8
	mov r3, r9
	strb r0, [r3]
	lsr r4, r6, #24
	add r0, r4, #0
	bl sub_080CA58C
	ldr r1, _080BAC40  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	lsr r1, r1, #3
	mov r0, #3
	and r1, r1, r0
	asr r2, r6, #24
	ldr r3, _080BAC4C  @ =0x00000F92
	add r0, r7, r3
	add r2, r2, r0
	ldr r0, _080BAC50  @ =gUnknown_0817100D
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	mov r0, #16
	bl sub_080CF370
	mov r0, r9
	strb r4, [r0]
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl SpriteActive_MainLong
_080BAC06:
	mov r1, r8
	lsl r0, r1, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r0, r0, #24
	mov r8, r0
	lsl r4, r0, #24
	cmp r4, #0
	beq _080BAC1C
	b _080BAA68
_080BAC1C:
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #24
	mov r2, #3
	bl sub_080BD874
	add r0, r4, #0
	mov r1, #32
	bl sub_080B9154
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080BAC3C:
	.4byte gUnknown_08171011
_080BAC40:
	.4byte 0x00000996
_080BAC44:
	.4byte 0x00000F12
_080BAC48:
	.4byte 0x00000F22
_080BAC4C:
	.4byte 0x00000F92
_080BAC50:
	.4byte gUnknown_0817100D
	THUMB_FUNC_END sub_080BAA54

