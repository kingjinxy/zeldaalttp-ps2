	THUMB_FUNC_START sub_080DEC48
sub_080DEC48: @ 0x080DEC48
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DEC68
	b _080DEF0A
_080DEC68:
	add r0, r4, #0
	bl sub_080DF1D0
	ldr r5, _080DECAC  @ =gRam
	ldr r0, _080DECB0  @ =0x00001122
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #127
	and r1, r1, r0
	ldr r3, _080DECB4  @ =0x00001082
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080DED00
	mov r6, #0
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080DECB8
	mov r6, #1
	b _080DECC6
	.byte 0x00
	.byte 0x00
_080DECAC:
	.4byte gRam
_080DECB0:
	.4byte 0x00001122
_080DECB4:
	.4byte 0x00001082
_080DECB8:
	ldr r0, _080DED98  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_080DECC6:
	ldr r0, _080DED9C  @ =gRam
	ldr r1, _080DEDA0  @ =0x00001062
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DECDE
	add r0, r4, #0
	bl sub_080DF3EC
	cmp r6, #0
	beq _080DED00
_080DECDE:
	ldr r2, _080DED9C  @ =gRam
	ldr r3, _080DEDA4  @ =0x00000F22
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r6, _080DEDA0  @ =0x00001062
	add r2, r2, r6
	add r2, r4, r2
	ldrb r0, [r2]
	cmp r0, #0
	beq _080DED00
	add r0, r4, #0
	bl sub_080DF3EC
_080DED00:
	ldr r1, _080DED9C  @ =gRam
	ldr r2, _080DEDA8  @ =0x00001152
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	ldr r3, _080DEDAC  @ =0x00001142
	add r1, r1, r3
	add r3, r4, r1
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DED44
	mov r0, #0
	strb r0, [r3]
	ldrb r0, [r2]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	asr r0, r0, #2
	strb r0, [r2]
	mov r1, #252
	and r0, r0, r1
	cmp r0, #0
	beq _080DED3E
	add r0, r4, #0
	bl sub_080DF3EC
_080DED3E:
	add r0, r4, #0
	bl sub_080DEF1C
_080DED44:
	ldr r5, _080DED9C  @ =gRam
	ldr r6, _080DEDA0  @ =0x00001062
	add r0, r5, r6
	add r2, r4, r0
	ldrb r6, [r2]
	cmp r6, #0
	beq _080DEDBC
	ldr r0, _080DEDA4  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080DED98  @ =0x00000F12
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080DED6A
	b _080DEE8C
_080DED6A:
	ldr r6, _080DEDB0  @ =0x00000996
	add r0, r5, r6
	ldrb r0, [r0]
	add r1, r4, #0
	eor r1, r1, r0
	lsl r1, r1, #24
	ldr r0, _080DEDB4  @ =0x00000F92
	add r3, r5, r0
	add r3, r4, r3
	lsr r0, r1, #26
	mov r2, #1
	and r0, r0, r2
	strb r0, [r3]
	ldr r3, _080DEDB8  @ =0x00001082
	add r2, r5, r3
	add r2, r4, r2
	lsr r1, r1, #22
	mov r6, #128
	neg r6, r6
	add r0, r6, #0
	and r1, r1, r0
	strb r1, [r2]
	b _080DEF0A
_080DED98:
	.4byte 0x00000F12
_080DED9C:
	.4byte gRam
_080DEDA0:
	.4byte 0x00001062
_080DEDA4:
	.4byte 0x00000F22
_080DEDA8:
	.4byte 0x00001152
_080DEDAC:
	.4byte 0x00001142
_080DEDB0:
	.4byte 0x00000996
_080DEDB4:
	.4byte 0x00000F92
_080DEDB8:
	.4byte 0x00001082
_080DEDBC:
	ldr r1, _080DEE90  @ =0x00001082
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080DEDCA
	b _080DEECC
_080DEDCA:
	add r0, r4, #0
	bl sub_080DF340
	ldr r2, _080DEE94  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	add r3, r4, #0
	eor r3, r3, r0
	lsl r3, r3, #24
	ldr r6, _080DEE98  @ =0x00000F92
	add r2, r5, r6
	add r2, r4, r2
	lsr r0, r3, #27
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #252
	lsl r0, r0, #22
	and r0, r0, r3
	cmp r0, #0
	bne _080DEE6C
	bl GetRandomInt
	ldr r2, _080DEE9C  @ =0x00000968
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _080DEEA0  @ =0x000016C5
	add r0, r5, r3
	ldrb r1, [r0]
	ldr r6, _080DEEA4  @ =0x00000969
	add r0, r5, r6
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _080DEEA8  @ =0x0000096C
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _080DEEAC  @ =0x000016C1
	add r0, r5, r3
	ldrb r1, [r0]
	add r6, r6, #4
	add r0, r5, r6
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #8
	bl sub_080C2DCC
	ldr r1, _080DEEB0  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DEEB4  @ =0x00000961
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080DEEB8  @ =0x00000F62
	add r1, r5, r3
	add r1, r4, r1
	sub r6, r6, #13
	add r0, r5, r6
	ldrb r0, [r0]
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DEE6C
	ldr r0, _080DEEBC  @ =0x00001122
	add r2, r5, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r3, #64
	orr r1, r1, r3
	mov r0, #0
	orr r1, r1, r0
	strb r1, [r2]
	ldr r6, _080DEEC0  @ =0x00000F22
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	and r0, r0, r3
	eor r1, r1, r0
	strb r1, [r2]
_080DEE6C:
	ldr r1, _080DEEC4  @ =gRam
	ldr r0, _080DEEC0  @ =0x00000F22
	add r2, r1, r0
	add r2, r4, r2
	ldr r3, _080DEEB0  @ =0x00000F72
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r6, _080DEEC8  @ =0x00000F12
	add r2, r1, r6
	add r2, r4, r2
	ldr r0, _080DEEB8  @ =0x00000F62
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
_080DEE8C:
	strb r0, [r2]
	b _080DEF0A
_080DEE90:
	.4byte 0x00001082
_080DEE94:
	.4byte 0x00000996
_080DEE98:
	.4byte 0x00000F92
_080DEE9C:
	.4byte 0x00000968
_080DEEA0:
	.4byte 0x000016C5
_080DEEA4:
	.4byte 0x00000969
_080DEEA8:
	.4byte 0x0000096C
_080DEEAC:
	.4byte 0x000016C1
_080DEEB0:
	.4byte 0x00000F72
_080DEEB4:
	.4byte 0x00000961
_080DEEB8:
	.4byte 0x00000F62
_080DEEBC:
	.4byte 0x00001122
_080DEEC0:
	.4byte 0x00000F22
_080DEEC4:
	.4byte gRam
_080DEEC8:
	.4byte 0x00000F12
_080DEECC:
	add r0, r4, #0
	bl sub_080DF340
	ldr r1, _080DEEE8  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DEEEC
	strb r6, [r7]
	b _080DEF0A
	.byte 0x00
	.byte 0x00
_080DEEE8:
	.4byte 0x00000996
_080DEEEC:
	ldr r3, _080DEF10  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080DEF14  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r2, _080DEF18  @ =0x00000F12
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
_080DEF0A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080DEF10:
	.4byte 0x00000F92
_080DEF14:
	.4byte 0x00000F22
_080DEF18:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080DEC48

