	THUMB_FUNC_START sub_080D98CC
sub_080D98CC: @ 0x080D98CC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D98EC  @ =gRam
	ldr r2, _080D98F0  @ =0x00001052
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	sub r1, r1, #28
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080D9348
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D98EC:
	.4byte gRam
_080D98F0:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D98CC

