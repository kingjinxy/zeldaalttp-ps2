	THUMB_FUNC_START sub_080BBD34
sub_080BBD34: @ 0x080BBD34
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	bl sub_080BDB54
	mov r4, #3
	ldr r0, _080BBD50  @ =gRam
	ldr r1, _080BBD54  @ =0x00000FF5
	add r5, r0, r1
_080BBD46:
	cmp r4, #1
	ble _080BBD58
	mov r0, #25
	b _080BBD5A
	.byte 0x00
	.byte 0x00
_080BBD50:
	.4byte gRam
_080BBD54:
	.4byte 0x00000FF5
_080BBD58:
	mov r0, #196
_080BBD5A:
	strb r0, [r5]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	ldr r3, _080BBDA4  @ =gRam
	ldr r0, _080BBDA8  @ =0x00000E75
	add r1, r3, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1]
	ldrb r0, [r5]
	cmp r0, #196
	bne _080BBD84
	ldr r1, _080BBDAC  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
_080BBD84:
	sub r5, r5, #1
	sub r4, r4, #1
	cmp r4, #0
	bge _080BBD46
	add r0, r6, #0
	bl sub_080B9454
	mov r0, #2
	bl sub_080F2E4C
	mov r0, #3
	bl sub_080F2E4C
	pop {r4-r6}
	pop {r0}
	bx r0
_080BBDA4:
	.4byte gRam
_080BBDA8:
	.4byte 0x00000E75
_080BBDAC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080BBD34

