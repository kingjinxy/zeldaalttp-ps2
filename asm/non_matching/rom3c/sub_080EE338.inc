	THUMB_FUNC_START sub_080EE338
sub_080EE338: @ 0x080EE338
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080EE3A4  @ =gRam
	ldr r1, _080EE3A8  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #1
	bne _080EE35C
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080EE3AC  @ =0x00000A3E
	add r1, r6, r0
	mov r0, #255
	strb r0, [r1]
_080EE35C:
	ldr r1, _080EE3B0  @ =0x00001622
	add r2, r6, r1
	ldrb r1, [r5]
	lsr r1, r1, #1
	mov r0, #1
	and r1, r1, r0
	ldrb r0, [r2]
	add r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080EE3B4  @ =0x0000097D
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, #32
	cmp r0, #63
	bgt _080EE392
	sub r1, r1, #1
	add r0, r6, r1
	ldrb r0, [r0]
	add r0, r0, #32
	cmp r0, #63
	bgt _080EE392
	mov r0, #16
	bl sub_080CF388
_080EE392:
	ldr r1, _080EE3B8  @ =gUnknown_08178A20
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE3A4:
	.4byte gRam
_080EE3A8:
	.4byte 0x00000FC2
_080EE3AC:
	.4byte 0x00000A3E
_080EE3B0:
	.4byte 0x00001622
_080EE3B4:
	.4byte 0x0000097D
_080EE3B8:
	.4byte gUnknown_08178A20
	THUMB_FUNC_END sub_080EE338

