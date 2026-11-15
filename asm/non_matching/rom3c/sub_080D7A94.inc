	THUMB_FUNC_START sub_080D7A94
sub_080D7A94: @ 0x080D7A94
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #59
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	ldr r2, _080D7AEC  @ =gRam
	ldr r1, _080D7AF0  @ =0x00000F92
	add r0, r2, r1
	add r0, r5, r0
	mov r3, #2
	strb r3, [r0]
	ldr r1, _080D7AF4  @ =0x00001152
	add r0, r2, r1
	add r1, r5, r0
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldr r1, _080D7AF8  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080D7AFC  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _080D7B00  @ =0x00000FC2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #8
	strb r0, [r2]
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080D7AEC:
	.4byte gRam
_080D7AF0:
	.4byte 0x00000F92
_080D7AF4:
	.4byte 0x00001152
_080D7AF8:
	.4byte 0x00001052
_080D7AFC:
	.4byte 0x00000F52
_080D7B00:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D7A94

