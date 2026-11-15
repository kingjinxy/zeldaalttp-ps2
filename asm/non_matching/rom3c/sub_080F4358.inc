	THUMB_FUNC_START sub_080F4358
sub_080F4358: @ 0x080F4358
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F4378  @ =gUnknown_08179598
	ldr r1, _080F437C  @ =gRam
	ldr r3, _080F4380  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F4378:
	.4byte gUnknown_08179598
_080F437C:
	.4byte gRam
_080F4380:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F4358

