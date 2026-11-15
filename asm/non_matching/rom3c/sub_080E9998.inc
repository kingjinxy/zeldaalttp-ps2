	THUMB_FUNC_START sub_080E9998
sub_080E9998: @ 0x080E9998
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080E99B0  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E99B4
	add r0, r1, #0
	bl sub_080C3758
	b _080E99C0
	.byte 0x00
	.byte 0x00
_080E99B0:
	.4byte gFlippers
_080E99B4:
	ldr r0, _080E99C4  @ =gRam
	ldr r2, _080E99C8  @ =0x00000FA2
	add r0, r0, r2
	add r0, r1, r0
	mov r1, #0
	strb r1, [r0]
_080E99C0:
	pop {r0}
	bx r0
_080E99C4:
	.4byte gRam
_080E99C8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080E9998

