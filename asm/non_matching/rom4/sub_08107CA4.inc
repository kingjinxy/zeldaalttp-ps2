	THUMB_FUNC_START sub_08107CA4
sub_08107CA4: @ 0x08107CA4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _08107CE0  @ =gRam
	ldr r1, _08107CE4  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r3, [r5]
	cmp r3, #0
	beq _08107CF0
	cmp r3, #32
	bne _08107D34
	ldr r6, _08107CE8  @ =0x00000F22
	add r1, r2, r6
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08107CEC  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	b _08107D34
_08107CE0:
	.4byte gRam
_08107CE4:
	.4byte 0x00000FC2
_08107CE8:
	.4byte 0x00000F22
_08107CEC:
	.4byte 0x00000F12
_08107CF0:
	ldr r6, _08107D3C  @ =0x00000EE2
	add r1, r2, r6
	add r1, r4, r1
	add r6, r6, #128
	add r0, r2, r6
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08107D40  @ =0x00000F82
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r6, _08107D44  @ =0x000010A2
	add r0, r2, r6
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #12
	ldr r6, _08107D48  @ =0x00000ED2
	add r0, r2, r6
	add r0, r4, r0
	strb r1, [r0]
	add r6, r6, #32
	add r0, r2, r6
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _08107D4C  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	mov r0, #48
	strb r0, [r5]
_08107D34:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08107D3C:
	.4byte 0x00000EE2
_08107D40:
	.4byte 0x00000F82
_08107D44:
	.4byte 0x000010A2
_08107D48:
	.4byte 0x00000ED2
_08107D4C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08107CA4

