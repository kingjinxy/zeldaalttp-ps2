	THUMB_FUNC_START sub_080D1E14
sub_080D1E14: @ 0x080D1E14
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080D1E4C  @ =gRam
	ldr r1, _080D1E50  @ =0x00000F92
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080D1E54  @ =0x00001152
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	sub r2, r0, #1
	strb r2, [r1]
	add r0, r0, #14
	lsl r0, r0, #24
	cmp r0, #0
	bge _080D1E46
	ldr r0, _080D1E58  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080D1E46:
	pop {r4}
	pop {r0}
	bx r0
_080D1E4C:
	.4byte gRam
_080D1E50:
	.4byte 0x00000F92
_080D1E54:
	.4byte 0x00001152
_080D1E58:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D1E14

