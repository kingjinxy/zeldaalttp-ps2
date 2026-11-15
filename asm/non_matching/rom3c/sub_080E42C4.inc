	THUMB_FUNC_START sub_080E42C4
sub_080E42C4: @ 0x080E42C4
	push {lr}
	add r2, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r1, _080E42E4  @ =gRam
	ldr r3, _080E42E8  @ =0x00000F62
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	bl sub_080E2A88
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E42E4:
	.4byte gRam
_080E42E8:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080E42C4

