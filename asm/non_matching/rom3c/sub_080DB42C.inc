	THUMB_FUNC_START sub_080DB42C
sub_080DB42C: @ 0x080DB42C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_080CBB34
	ldr r2, _080DB48C  @ =gRam
	ldr r1, _080DB490  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r5, #0
	mov r3, #9
	strb r3, [r0]
	ldr r1, _080DB494  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r1, _080DB498  @ =0x0000164C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB4A8
	ldr r1, _080DB49C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080DB4A0  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080DB4A4  @ =0x00000F53
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #63
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	add r0, r4, #0
	bl sub_080ED8C8
	b _080DB4CC
	.byte 0x00
	.byte 0x00
_080DB48C:
	.4byte gRam
_080DB490:
	.4byte 0x00000FA2
_080DB494:
	.4byte 0x00001172
_080DB498:
	.4byte 0x0000164C
_080DB49C:
	.4byte 0x00000FC2
_080DB4A0:
	.4byte 0x00000F52
_080DB4A4:
	.4byte 0x00000F53
_080DB4A8:
	ldr r1, _080DB4D4  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	ldr r1, _080DB4D8  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080DB4DC  @ =0x00001152
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080ED8C8
_080DB4CC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DB4D4:
	.4byte 0x00000F52
_080DB4D8:
	.4byte 0x00000FC2
_080DB4DC:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080DB42C

