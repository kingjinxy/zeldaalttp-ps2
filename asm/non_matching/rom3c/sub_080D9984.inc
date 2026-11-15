	THUMB_FUNC_START sub_080D9984
sub_080D9984: @ 0x080D9984
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080D99A8  @ =gRam
	ldr r3, _080D99AC  @ =0x000010E2
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D99B0
	sub r3, r3, #32
	add r0, r2, r3
	add r0, r1, r0
	ldrb r2, [r0]
	mov r1, #224
	orr r1, r1, r2
	strb r1, [r0]
	b _080D99B6
_080D99A8:
	.4byte gRam
_080D99AC:
	.4byte 0x000010E2
_080D99B0:
	add r0, r1, #0
	bl sub_080CA5D8
_080D99B6:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D9984

	.byte 0x00
	.byte 0x00
