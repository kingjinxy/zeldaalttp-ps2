	THUMB_FUNC_START sub_080F2C54
sub_080F2C54: @ 0x080F2C54
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080F2C8C  @ =gRam
	ldr r2, _080F2C90  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F2CAC
	ldr r0, _080F2C94  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #12
	and r1, r1, r0
	cmp r1, #0
	beq _080F2C98
	bl GetRandomInt
	mov r2, #1
	and r2, r2, r0
	b _080F2CA2
	.byte 0x00
	.byte 0x00
_080F2C8C:
	.4byte gRam
_080F2C90:
	.4byte 0x00000FC2
_080F2C94:
	.4byte 0x00000F52
_080F2C98:
	add r0, r4, #0
	bl sub_080C3028
	lsl r0, r0, #24
	lsr r2, r0, #24
_080F2CA2:
	ldr r0, _080F2CB4  @ =gRam
	ldr r1, _080F2CB8  @ =0x00001082
	add r0, r0, r1
	add r0, r4, r0
	strb r2, [r0]
_080F2CAC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F2CB4:
	.4byte gRam
_080F2CB8:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080F2C54

