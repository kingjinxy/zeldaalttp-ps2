	THUMB_FUNC_START sub_080ED33C
sub_080ED33C: @ 0x080ED33C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080ED37C  @ =gRam
	ldr r0, _080ED380  @ =0x00000D18
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _080ED36E
	ldr r0, _080ED384  @ =0x00000D43
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080ED388  @ =0x00000D4B
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #64
	strb r1, [r0]
_080ED36E:
	add r0, r4, #0
	bl sub_080ED3D8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED37C:
	.4byte gRam
_080ED380:
	.4byte 0x00000D18
_080ED384:
	.4byte 0x00000D43
_080ED388:
	.4byte 0x00000D4B
	THUMB_FUNC_END sub_080ED33C

