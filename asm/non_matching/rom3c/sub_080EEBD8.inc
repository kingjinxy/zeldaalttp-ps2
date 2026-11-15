	THUMB_FUNC_START sub_080EEBD8
sub_080EEBD8: @ 0x080EEBD8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080EEE94
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EEC48
	add r0, r7, #0
	bl sub_080CA3A0
	add r0, r7, #0
	mov r1, #2
	bl sub_080C2DCC
	ldr r4, _080EEC54  @ =gRam
	ldr r0, _080EEC58  @ =0x00000F12
	add r6, r4, r0
	add r6, r7, r6
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r4
	mov r8, r1
	ldrb r0, [r1]
	strb r0, [r6]
	ldr r2, _080EEC5C  @ =0x00000F22
	add r5, r4, r2
	add r5, r7, r5
	ldr r0, _080EEC60  @ =0x00000961
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r5]
	add r0, r7, #0
	mov r1, #80
	bl sub_080C2DCC
	ldrb r1, [r5]
	mov r2, r8
	ldrb r0, [r2]
	sub r0, r0, r1
	strb r0, [r5]
	ldrb r0, [r6]
	mvn r0, r0
	strb r0, [r2]
	ldrb r1, [r4]
	sub r0, r0, r1
	strb r0, [r6]
	add r0, r7, #0
	bl sub_080EEC64
_080EEC48:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EEC54:
	.4byte gRam
_080EEC58:
	.4byte 0x00000F12
_080EEC5C:
	.4byte 0x00000F22
_080EEC60:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080EEBD8

