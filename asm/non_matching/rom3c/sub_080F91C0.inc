	THUMB_FUNC_START sub_080F91C0
sub_080F91C0: @ 0x080F91C0
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080F91EC  @ =gRam
	ldr r1, _080F91F0  @ =0x00001663
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #12
	beq _080F91E0
	sub r1, r1, #1
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	cmp r0, #32
	beq _080F91F8
_080F91E0:
	ldr r1, _080F91F4  @ =0x00000FA2
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	b _080F9204
_080F91EC:
	.4byte gRam
_080F91F0:
	.4byte 0x00001663
_080F91F4:
	.4byte 0x00000FA2
_080F91F8:
	ldr r0, _080F9208  @ =0x00001172
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F9204:
	pop {r0}
	bx r0
_080F9208:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080F91C0

