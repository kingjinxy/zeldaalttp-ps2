	THUMB_FUNC_START sub_0806C1A8
sub_0806C1A8: @ 0x0806C1A8
	push {r4,lr}
	ldr r1, _0806C1D8  @ =gUnknown_0814C9B4
	ldr r4, _0806C1DC  @ =gRam
	ldr r0, _0806C1E0  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldrb r0, [r4]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _0806C1D2
	bl sub_080C1B40
	bl sub_080A3EE0
_0806C1D2:
	pop {r4}
	pop {r0}
	bx r0
_0806C1D8:
	.4byte gUnknown_0814C9B4
_0806C1DC:
	.4byte gRam
_0806C1E0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C1A8

