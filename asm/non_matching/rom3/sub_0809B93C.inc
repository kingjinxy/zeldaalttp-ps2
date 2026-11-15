	THUMB_FUNC_START sub_0809B93C
sub_0809B93C: @ 0x0809B93C
	push {r4,r5,lr}
	ldr r4, _0809B9F4  @ =gRam
	ldr r1, _0809B9F8  @ =0x00001702
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _0809BA40
	ldr r2, _0809B9FC  @ =0x0000178A
	add r0, r4, r2
	mov r1, #0
	strb r1, [r0]
	add r2, r2, #130
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809BA00  @ =0x00000A58
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	mov r1, #191
	lsl r1, r1, #5
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809BA04  @ =0x00001796
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #73
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #174
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #169
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #119
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #152
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809BA08  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809BA0C  @ =0x000016C9
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809BA10  @ =0x000017F1
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809BA2C
	bl sub_08092BF4
	ldr r0, _0809BA14  @ =0x0000180D
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809BA18  @ =0x00001789
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809BA1C  @ =0x000016EB
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0809BA20  @ =0x000016D4
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809BA24  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #17
	bl sub_0809E49C
	ldr r2, _0809BA28  @ =0x00001718
	add r1, r4, r2
	mov r0, #7
	strb r0, [r1]
	bl sub_08098D20
	b _0809BBC8
_0809B9F4:
	.4byte gRam
_0809B9F8:
	.4byte 0x00001702
_0809B9FC:
	.4byte 0x0000178A
_0809BA00:
	.4byte 0x00000A58
_0809BA04:
	.4byte 0x00001796
_0809BA08:
	.4byte 0x00001705
_0809BA0C:
	.4byte 0x000016C9
_0809BA10:
	.4byte 0x000017F1
_0809BA14:
	.4byte 0x0000180D
_0809BA18:
	.4byte 0x00001789
_0809BA1C:
	.4byte 0x000016EB
_0809BA20:
	.4byte 0x000016D4
_0809BA24:
	.4byte 0x00001727
_0809BA28:
	.4byte 0x00001718
_0809BA2C:
	ldr r0, _0809BA3C  @ =0x00001718
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	bl sub_08099C90
	b _0809BBC8
	.byte 0x00
	.byte 0x00
_0809BA3C:
	.4byte 0x00001718
_0809BA40:
	ldr r0, _0809BAB8  @ =0x000016C8
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r0, _0809BABC  @ =0x000016C9
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r0, _0809BAC0  @ =0x000016CF
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r1, _0809BAC4  @ =0x0000174B
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #83
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _0809BAD0
	add r1, r1, #158
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #4
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #170
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #168
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #118
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _0809BAC8  @ =0x000016E8
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0809BAB0
	ldr r0, _0809BACC  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_0809BAB0:
	mov r0, #0
	bl sub_08099D98
	b _0809BBC8
_0809BAB8:
	.4byte 0x000016C8
_0809BABC:
	.4byte 0x000016C9
_0809BAC0:
	.4byte 0x000016CF
_0809BAC4:
	.4byte 0x0000174B
_0809BAC8:
	.4byte 0x000016E8
_0809BACC:
	.4byte 0x00001705
_0809BAD0:
	mov r0, #0
	bl sub_080A18F0
	ldr r1, _0809BB20  @ =0x00000545
	add r0, r4, r1
	ldrb r0, [r0]
	mov r3, #15
	and r3, r3, r0
	cmp r3, #0
	bne _0809BB38
	ldr r2, _0809BB24  @ =0x000016D6
	add r0, r4, r2
	strb r3, [r0]
	ldr r1, _0809BB28  @ =0x000016D7
	add r0, r4, r1
	strb r3, [r0]
	add r2, r2, #81
	add r0, r4, r2
	strb r3, [r0]
	sub r1, r1, #11
	add r0, r4, r1
	strb r3, [r0]
	sub r2, r2, #83
	add r0, r4, r2
	strb r3, [r0]
	ldr r0, _0809BB2C  @ =0x000016FA
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #246
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _0809BB30  @ =0x00001803
	add r1, r4, r2
	mov r0, #32
	strb r0, [r1]
	ldr r0, _0809BB34  @ =0x00001807
	add r1, r4, r0
	mov r0, #19
	strb r0, [r1]
	b _0809BB72
_0809BB20:
	.4byte 0x00000545
_0809BB24:
	.4byte 0x000016D6
_0809BB28:
	.4byte 0x000016D7
_0809BB2C:
	.4byte 0x000016FA
_0809BB30:
	.4byte 0x00001803
_0809BB34:
	.4byte 0x00001807
_0809BB38:
	ldr r1, _0809BBA0  @ =0x00001727
	add r0, r4, r1
	strb r3, [r0]
	ldr r0, _0809BBA4  @ =0x000016CC
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r3, r1
	beq _0809BB72
	ldr r1, _0809BBA8  @ =0x000016D0
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #90
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #49
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809BBAC  @ =0x00001803
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r0, _0809BBB0  @ =0x00001807
	add r1, r4, r0
	mov r0, #19
	strb r0, [r1]
	strb r3, [r2]
_0809BB72:
	bl sub_08096F30
	ldr r2, _0809BBB4  @ =gRam
	ldr r0, _0809BBB8  @ =0x0000178B
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0809BBBC  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809BBC8
	ldr r1, _0809BBC0  @ =0x0000172C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809BBC4
	bl sub_0809B0DC
	b _0809BBC8
	.byte 0x00
	.byte 0x00
_0809BBA0:
	.4byte 0x00001727
_0809BBA4:
	.4byte 0x000016CC
_0809BBA8:
	.4byte 0x000016D0
_0809BBAC:
	.4byte 0x00001803
_0809BBB0:
	.4byte 0x00001807
_0809BBB4:
	.4byte gRam
_0809BBB8:
	.4byte 0x0000178B
_0809BBBC:
	.4byte 0x000009B2
_0809BBC0:
	.4byte 0x0000172C
_0809BBC4:
	bl sub_0809B2AC
_0809BBC8:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809B93C

	.byte 0x00
	.byte 0x00
