	THUMB_FUNC_START sub_080D6B00
sub_080D6B00: @ 0x080D6B00
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080D6B28  @ =gRam
	ldr r3, _080D6B2C  @ =0x00000FC2
	add r0, r1, r3
	add r3, r2, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D6B38
	ldr r4, _080D6B30  @ =0x00000F92
	add r1, r1, r4
	add r1, r2, r1
	ldr r2, _080D6B34  @ =gUnknown_08175514
	lsr r0, r0, #28
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080D6B48
_080D6B28:
	.4byte gRam
_080D6B2C:
	.4byte 0x00000FC2
_080D6B30:
	.4byte 0x00000F92
_080D6B34:
	.4byte gUnknown_08175514
_080D6B38:
	ldr r4, _080D6B50  @ =0x00000F52
	add r0, r1, r4
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #255
	strb r0, [r3]
_080D6B48:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6B50:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6B00

