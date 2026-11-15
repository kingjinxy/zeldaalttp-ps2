	THUMB_FUNC_START sub_080ED758
sub_080ED758: @ 0x080ED758
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_080ED7CC
	cmp r0, #0
	beq _080ED77E
	ldr r2, _080ED784  @ =gRam
	ldr r0, _080ED788  @ =0x00000D43
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080ED78C  @ =0x00000D4B
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #255
	strb r0, [r2]
_080ED77E:
	pop {r4}
	pop {r0}
	bx r0
_080ED784:
	.4byte gRam
_080ED788:
	.4byte 0x00000D43
_080ED78C:
	.4byte 0x00000D4B
	THUMB_FUNC_END sub_080ED758

