	THUMB_FUNC_START sub_080C18C8
sub_080C18C8: @ 0x080C18C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r4, r1, #0
	ldr r2, _080C18E8  @ =gRam
	ldr r5, _080C18EC  @ =0x000015F7
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C18F0
	add r0, r1, #0
	bl sub_080CF370
	b _080C190E
_080C18E8:
	.4byte gRam
_080C18EC:
	.4byte 0x000015F7
_080C18F0:
	ldr r5, _080C1904  @ =0x00000E47
	add r0, r2, r5
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C1908
	add r0, r1, #0
	bl sub_080CF3B8
	b _080C190E
_080C1904:
	.4byte 0x00000E47
_080C1908:
	add r0, r4, #0
	bl sub_080CF3E8
_080C190E:
	lsl r0, r0, #16
	lsr r0, r0, #16
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C18C8

