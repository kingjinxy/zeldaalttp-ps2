	THUMB_FUNC_START sub_080ED790
sub_080ED790: @ 0x080ED790
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	ldr r1, _080ED7C0  @ =gRam
	ldr r4, _080ED7C4  @ =0x00000D4B
	add r0, r1, r4
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ED7B2
	ldr r0, _080ED7C8  @ =0x00000D43
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080ED7B2:
	add r0, r3, #0
	bl sub_080ED3D8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED7C0:
	.4byte gRam
_080ED7C4:
	.4byte 0x00000D4B
_080ED7C8:
	.4byte 0x00000D43
	THUMB_FUNC_END sub_080ED790

