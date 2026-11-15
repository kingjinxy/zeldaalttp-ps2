	THUMB_FUNC_START sub_080ED6FC
sub_080ED6FC: @ 0x080ED6FC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080ED740  @ =gRam
	ldr r1, _080ED744  @ =0x00000F62
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ED73A
	ldr r1, _080ED748  @ =0x00000D23
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #120
	strb r1, [r0]
	ldr r1, _080ED74C  @ =0x00000D5B
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080ED750  @ =0x00000D18
	add r1, r3, r0
	mov r0, #64
	strb r0, [r1]
	ldr r0, _080ED754  @ =0x00000D16
	add r1, r3, r0
	mov r0, #224
	lsl r0, r0, #1
	strh r0, [r1]
	add r0, r2, #0
	bl sub_080ED790
_080ED73A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED740:
	.4byte gRam
_080ED744:
	.4byte 0x00000F62
_080ED748:
	.4byte 0x00000D23
_080ED74C:
	.4byte 0x00000D5B
_080ED750:
	.4byte 0x00000D18
_080ED754:
	.4byte 0x00000D16
	THUMB_FUNC_END sub_080ED6FC

