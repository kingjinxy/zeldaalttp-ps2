	THUMB_FUNC_START sub_080EEB64
sub_080EEB64: @ 0x080EEB64
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080EEB94  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r5, r1, r0
	mov r2, #0
	ldrsb r2, [r5, r2]
	ldr r3, _080EEB98  @ =0x00000F12
	add r0, r1, r3
	add r4, r6, r0
	ldrb r3, [r4]
	add r7, r1, #0
	cmp r2, r3
	beq _080EEBA0
	ldrb r0, [r5]
	sub r0, r0, r3
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EEB9C
	add r0, r3, #1
	b _080EEB9E
_080EEB94:
	.4byte gRam
_080EEB98:
	.4byte 0x00000F12
_080EEB9C:
	sub r0, r3, #1
_080EEB9E:
	strb r0, [r4]
_080EEBA0:
	ldr r0, _080EEBC4  @ =0x00000961
	add r4, r7, r0
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldr r2, _080EEBC8  @ =0x00000F22
	add r0, r7, r2
	add r3, r6, r0
	ldrb r2, [r3]
	cmp r1, r2
	beq _080EEBD0
	ldrb r0, [r4]
	sub r0, r0, r2
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EEBCC
	add r0, r2, #1
	b _080EEBCE
_080EEBC4:
	.4byte 0x00000961
_080EEBC8:
	.4byte 0x00000F22
_080EEBCC:
	sub r0, r2, #1
_080EEBCE:
	strb r0, [r3]
_080EEBD0:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EEB64

	.byte 0x00
	.byte 0x00
