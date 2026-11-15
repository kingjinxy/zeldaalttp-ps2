	THUMB_FUNC_START sub_080F1FBC
sub_080F1FBC: @ 0x080F1FBC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F1FF0  @ =gRam
	ldr r1, _080F1FF4  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F1FEC
	ldr r0, _080F1FF8  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F1FFC  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r2, #0
	bl sub_080F2000
_080F1FEC:
	pop {r0}
	bx r0
_080F1FF0:
	.4byte gRam
_080F1FF4:
	.4byte 0x00000FC2
_080F1FF8:
	.4byte 0x00000F52
_080F1FFC:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F1FBC

