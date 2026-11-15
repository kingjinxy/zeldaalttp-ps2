	THUMB_FUNC_START sub_080D6CB4
sub_080D6CB4: @ 0x080D6CB4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080D6CE8  @ =gRam
	ldr r1, _080D6CEC  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080D6CF0  @ =0x00000FC2
	add r0, r3, r1
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080D6CE2
	sub r1, r1, #112
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	strb r0, [r4]
_080D6CE2:
	pop {r4}
	pop {r0}
	bx r0
_080D6CE8:
	.4byte gRam
_080D6CEC:
	.4byte 0x00000F92
_080D6CF0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D6CB4

