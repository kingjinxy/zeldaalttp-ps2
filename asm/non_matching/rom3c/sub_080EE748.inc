	THUMB_FUNC_START sub_080EE748
sub_080EE748: @ 0x080EE748
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r4, #0
	ldr r6, _080EE784  @ =gRam
	ldr r1, _080EE788  @ =0x00000FC2
	add r0, r6, r1
	add r7, r4, r0
	ldrb r5, [r7]
	cmp r5, #0
	bne _080EE790
	sub r1, r1, #112
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #72
	strb r1, [r7]
	ldr r1, _080EE78C  @ =0x00000F12
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	b _080EE7C0
_080EE784:
	.4byte gRam
_080EE788:
	.4byte 0x00000FC2
_080EE78C:
	.4byte 0x00000F12
_080EE790:
	ldr r1, _080EE7C8  @ =0x00001142
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080EE7B6
	add r1, r1, #16
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r1, _080EE7CC  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
_080EE7B6:
	ldr r1, _080EE7D0  @ =0x00000F92
	add r0, r6, r1
	add r0, r3, r0
	mov r1, #2
	strb r1, [r0]
_080EE7C0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE7C8:
	.4byte 0x00001142
_080EE7CC:
	.4byte 0x00000FD2
_080EE7D0:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EE748

