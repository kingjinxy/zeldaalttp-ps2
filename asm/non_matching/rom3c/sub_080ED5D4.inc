	THUMB_FUNC_START sub_080ED5D4
sub_080ED5D4: @ 0x080ED5D4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	ldr r3, _080ED60C  @ =gRam
	ldr r1, _080ED610  @ =0x00000D4B
	add r0, r3, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080ED5EE
	sub r0, r0, #1
	strb r0, [r1]
_080ED5EE:
	ldr r1, _080ED614  @ =gUnknown_08178670
	ldr r4, _080ED618  @ =0x00000D43
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r2, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED60C:
	.4byte gRam
_080ED610:
	.4byte 0x00000D4B
_080ED614:
	.4byte gUnknown_08178670
_080ED618:
	.4byte 0x00000D43
	THUMB_FUNC_END sub_080ED5D4

