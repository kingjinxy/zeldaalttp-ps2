	THUMB_FUNC_START sub_080E2858
sub_080E2858: @ 0x080E2858
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E2874  @ =gRam
	ldr r1, _080E2878  @ =0x00001052
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	bl sub_080E1E70
	pop {r0}
	bx r0
_080E2874:
	.4byte gRam
_080E2878:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080E2858

