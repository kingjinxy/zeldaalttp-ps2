	THUMB_FUNC_START sub_080C9A68
sub_080C9A68: @ 0x080C9A68
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r1, #0
	ldr r1, _080C9A74  @ =gRam
	b _080C9A7A
_080C9A74:
	.4byte gRam
_080C9A78:
	sub r4, r4, #1
_080C9A7A:
	cmp r4, #0
	blt _080C9A92
	ldr r3, _080C9AA0  @ =0x000011D2
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C9A78
	add r0, r2, #0
	add r1, r4, #0
	bl sub_080C97A8
_080C9A92:
	ldr r0, _080C9AA4  @ =gRam
	ldr r1, _080C9AA8  @ =0x0000097D
	add r0, r0, r1
	strb r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080C9AA0:
	.4byte 0x000011D2
_080C9AA4:
	.4byte gRam
_080C9AA8:
	.4byte 0x0000097D
	THUMB_FUNC_END sub_080C9A68

