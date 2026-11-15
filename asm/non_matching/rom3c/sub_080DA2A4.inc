	THUMB_FUNC_START sub_080DA2A4
sub_080DA2A4: @ 0x080DA2A4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080DA300  @ =gRam
	ldr r1, _080DA304  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080DA2C2
	mov r0, #91
	mov r1, #0
	bl sub_0812A324
_080DA2C2:
	ldr r1, _080DA308  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #224
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_MoveVert
	ldr r1, _080DA30C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #47
	bhi _080DA2F4
	ldr r1, _080DA310  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #66
	strb r1, [r0]
	ldr r0, _080DA314  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DA2F4:
	add r0, r6, #0
	bl sub_080DA318
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA300:
	.4byte gRam
_080DA304:
	.4byte 0x00000FC2
_080DA308:
	.4byte 0x00000F12
_080DA30C:
	.4byte 0x00000ED2
_080DA310:
	.4byte 0x000010E2
_080DA314:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DA2A4

