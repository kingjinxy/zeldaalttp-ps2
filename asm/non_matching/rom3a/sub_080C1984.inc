	THUMB_FUNC_START sub_080C1984
sub_080C1984: @ 0x080C1984
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080C19A0  @ =gRam
	ldr r2, _080C19A4  @ =0x000015F7
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C19A8
	add r0, r1, #0
	bl sub_080CF388
	b _080C19AE
	.byte 0x00
	.byte 0x00
_080C19A0:
	.4byte gRam
_080C19A4:
	.4byte 0x000015F7
_080C19A8:
	add r0, r1, #0
	bl sub_080CF3D0
_080C19AE:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C1984

	.byte 0x00
	.byte 0x00
