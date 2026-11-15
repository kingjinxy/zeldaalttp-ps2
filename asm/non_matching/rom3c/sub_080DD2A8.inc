	THUMB_FUNC_START sub_080DD2A8
sub_080DD2A8: @ 0x080DD2A8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DD2C8  @ =gUnknown_08176160
	ldr r1, _080DD2CC  @ =gRam
	ldr r3, _080DD2D0  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DD2C8:
	.4byte gUnknown_08176160
_080DD2CC:
	.4byte gRam
_080DD2D0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DD2A8

