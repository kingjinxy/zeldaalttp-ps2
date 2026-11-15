	THUMB_FUNC_START sub_080D1ACC
sub_080D1ACC: @ 0x080D1ACC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D1B24  @ =gRam
	ldr r1, _080D1B28  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080D1B2C  @ =0x00001627
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D1B1C
	ldr r0, _080D1B30  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D1B34  @ =0x00000FB2
	add r2, r5, r1
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldr r0, _080D1B38  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080D1B3C  @ =gUnknown_08174B60
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080D1B40  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #248
	strb r1, [r0]
_080D1B1C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1B24:
	.4byte gRam
_080D1B28:
	.4byte 0x00000F92
_080D1B2C:
	.4byte 0x00001627
_080D1B30:
	.4byte 0x00000F52
_080D1B34:
	.4byte 0x00000FB2
_080D1B38:
	.4byte 0x00000F22
_080D1B3C:
	.4byte gUnknown_08174B60
_080D1B40:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080D1ACC

