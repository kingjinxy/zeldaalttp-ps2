	THUMB_FUNC_START sub_080FCFA8
sub_080FCFA8: @ 0x080FCFA8
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080FCFD0  @ =gRam
	ldr r1, _080FCFD4  @ =0x00001092
	add r0, r3, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080FCFCA
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FCFD8  @ =0x000010B2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #32
	strb r1, [r0]
_080FCFCA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FCFD0:
	.4byte gRam
_080FCFD4:
	.4byte 0x00001092
_080FCFD8:
	.4byte 0x000010B2
	THUMB_FUNC_END sub_080FCFA8

