	THUMB_FUNC_START sub_080C1B08
sub_080C1B08: @ 0x080C1B08
	push {r4,r5,lr}
	add r4, r0, #0
	add r5, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080C1B38  @ =gRam
	ldr r1, _080C1B3C  @ =0x00000E3D
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080BFC34
	add r0, r4, #0
	add r1, r5, #0
	bl sub_080BFCAC
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C1B38:
	.4byte gRam
_080C1B3C:
	.4byte 0x00000E3D
	THUMB_FUNC_END sub_080C1B08

