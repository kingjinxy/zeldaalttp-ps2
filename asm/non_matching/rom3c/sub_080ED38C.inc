	THUMB_FUNC_START sub_080ED38C
sub_080ED38C: @ 0x080ED38C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080ED3C8  @ =gRam
	ldr r0, _080ED3CC  @ =0x00000D18
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #64
	bne _080ED3BC
	ldr r1, _080ED3D0  @ =0x00000D43
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _080ED3D4  @ =0x00000D4B
	add r0, r4, r1
	add r0, r2, r0
	strb r3, [r0]
_080ED3BC:
	add r0, r5, #0
	bl sub_080ED3D8
	pop {r4,r5}
	pop {r0}
	bx r0
_080ED3C8:
	.4byte gRam
_080ED3CC:
	.4byte 0x00000D18
_080ED3D0:
	.4byte 0x00000D43
_080ED3D4:
	.4byte 0x00000D4B
	THUMB_FUNC_END sub_080ED38C

