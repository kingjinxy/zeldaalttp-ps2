	THUMB_FUNC_START sub_080D7B88
sub_080D7B88: @ 0x080D7B88
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D7BBC  @ =gRam
	ldr r2, _080D7BC0  @ =0x00001152
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #32
	strb r2, [r1]
	ldr r2, _080D7BC4  @ =0x00000F12
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #251
	strb r2, [r1]
	ldr r1, _080D7BC8  @ =0x00000F52
	add r3, r3, r1
	add r0, r0, r3
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	pop {r0}
	bx r0
_080D7BBC:
	.4byte gRam
_080D7BC0:
	.4byte 0x00001152
_080D7BC4:
	.4byte 0x00000F12
_080D7BC8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D7B88

