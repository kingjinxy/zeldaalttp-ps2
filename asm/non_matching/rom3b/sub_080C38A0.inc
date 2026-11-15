	THUMB_FUNC_START sub_080C38A0
sub_080C38A0: @ 0x080C38A0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CEB84
	ldr r2, _080C38D8  @ =gRam
	ldr r0, _080C38DC  @ =0x00000FA2
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080C38E0  @ =gUnknown_0817451C
	ldr r0, _080C38E4  @ =0x00000FF2
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_080C38D8:
	.4byte gRam
_080C38DC:
	.4byte 0x00000FA2
_080C38E0:
	.4byte gUnknown_0817451C
_080C38E4:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C38A0

