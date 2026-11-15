	THUMB_FUNC_START sub_080B0184
sub_080B0184: @ 0x080B0184
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r5, r1, #24
	mov r0, #1
	strb r0, [r4]
	ldr r6, _080B01B0  @ =gRam
	ldr r0, _080B01B4  @ =0x00001A4A
	add r1, r6, r0
_080B0196:
	ldrb r3, [r4]
	add r0, r3, r1
	ldrb r0, [r0]
	add r2, r3, #0
	cmp r0, #0
	beq _080B01B8
	sub r0, r2, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B0196
	mov r0, #1
	b _080B01C4
_080B01B0:
	.4byte gRam
_080B01B4:
	.4byte 0x00001A4A
_080B01B8:
	ldr r1, _080B01CC  @ =0x00001A4A
	add r0, r6, r1
	add r0, r3, r0
	add r1, r5, #1
	strb r1, [r0]
	mov r0, #0
_080B01C4:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080B01CC:
	.4byte 0x00001A4A
	THUMB_FUNC_END sub_080B0184

