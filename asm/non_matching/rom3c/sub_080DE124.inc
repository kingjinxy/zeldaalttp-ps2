	THUMB_FUNC_START sub_080DE124
sub_080DE124: @ 0x080DE124
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DE144  @ =gUnknown_08176398
	ldr r1, _080DE148  @ =gRam
	ldr r3, _080DE14C  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DE144:
	.4byte gUnknown_08176398
_080DE148:
	.4byte gRam
_080DE14C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE124

