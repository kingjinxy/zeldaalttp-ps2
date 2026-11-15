	THUMB_FUNC_START sub_08105A58
sub_08105A58: @ 0x08105A58
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r6, r5, #0
	ldr r4, _08105B1C  @ =gRam
	ldr r1, _08105B20  @ =0x00000FC2
	add r0, r4, r1
	add r7, r5, r0
	ldrb r1, [r7]
	cmp r1, #0
	bne _08105A7A
	mov r0, #32
	strb r0, [r7]
	ldr r2, _08105B24  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
_08105A7A:
	ldrb r1, [r7]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08105A8A
	add r0, r5, #0
	bl sub_08105BD0
_08105A8A:
	ldr r1, _08105B28  @ =0x00001142
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08105AA0
	ldr r2, _08105B2C  @ =0x00001152
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
_08105AA0:
	ldr r1, _08105B30  @ =0x00001092
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08105B14
	ldr r2, _08105B34  @ =0x00000F62
	add r0, r4, r2
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _08105B38  @ =0x00000968
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08105B3C  @ =0x00000F72
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08105B40  @ =0x00000F82
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08105B44  @ =0x000010A2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r1, _08105B48  @ =0x00000F12
	add r0, r4, r1
	add r0, r6, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08105B4C  @ =0x00000F22
	add r0, r4, r1
	add r0, r6, r0
	add r2, r2, #1
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r6, #0
	bl Sprite3_Move
	mov r0, #12
	strb r0, [r7]
_08105B14:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105B1C:
	.4byte gRam
_08105B20:
	.4byte 0x00000FC2
_08105B24:
	.4byte 0x00000F52
_08105B28:
	.4byte 0x00001142
_08105B2C:
	.4byte 0x00001152
_08105B30:
	.4byte 0x00001092
_08105B34:
	.4byte 0x00000F62
_08105B38:
	.4byte 0x00000968
_08105B3C:
	.4byte 0x00000F72
_08105B40:
	.4byte 0x00000F82
_08105B44:
	.4byte 0x000010A2
_08105B48:
	.4byte 0x00000F12
_08105B4C:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_08105A58

