	THUMB_FUNC_START sub_080D6CF4
sub_080D6CF4: @ 0x080D6CF4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080D6D20  @ =gRam
	ldr r3, _080D6D24  @ =0x00000FC2
	add r0, r1, r3
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080D6D30
	ldr r5, _080D6D28  @ =0x00000F92
	add r1, r1, r5
	add r1, r2, r1
	ldr r2, _080D6D2C  @ =gUnknown_08175518
	lsr r0, r0, #28
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080D6D3C
	.byte 0x00
	.byte 0x00
_080D6D20:
	.4byte gRam
_080D6D24:
	.4byte 0x00000FC2
_080D6D28:
	.4byte 0x00000F92
_080D6D2C:
	.4byte gUnknown_08175518
_080D6D30:
	ldr r5, _080D6D44  @ =0x00000F52
	add r0, r1, r5
	add r0, r2, r0
	strb r3, [r0]
	mov r0, #32
	strb r0, [r4]
_080D6D3C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6D44:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6CF4

