	THUMB_FUNC_START sub_08105B50
sub_08105B50: @ 0x08105B50
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _08105BB8  @ =gRam
	ldr r1, _08105BBC  @ =0x00001092
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08105BA4
	ldr r0, _08105BC0  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08105BC4  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C351C
	ldr r0, _08105BC8  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08105BCC  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
_08105BA4:
	add r0, r6, #0
	bl sub_08105BD0
	add r0, r6, #0
	bl sub_08105BD0
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105BB8:
	.4byte gRam
_08105BBC:
	.4byte 0x00001092
_08105BC0:
	.4byte 0x00000F22
_08105BC4:
	.4byte 0x00000F12
_08105BC8:
	.4byte 0x00000F52
_08105BCC:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_08105B50

