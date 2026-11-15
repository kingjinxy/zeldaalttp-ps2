	THUMB_FUNC_START sub_080B00BC
sub_080B00BC: @ 0x080B00BC
	push {lr}
	ldr r2, _080B00E0  @ =gRam
	ldr r0, _080B00E4  @ =0x00001718
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _080B00F4
	ldr r3, _080B00E8  @ =0x0000176C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B00F2
	ldr r0, _080B00EC  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B00F0
	mov r0, #28
	b _080B00F2
_080B00E0:
	.4byte gRam
_080B00E4:
	.4byte 0x00001718
_080B00E8:
	.4byte 0x0000176C
_080B00EC:
	.4byte gMoonPearl
_080B00F0:
	mov r0, #23
_080B00F2:
	strb r0, [r1]
_080B00F4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B00BC

