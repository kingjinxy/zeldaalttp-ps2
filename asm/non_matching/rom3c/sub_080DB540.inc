	THUMB_FUNC_START sub_080DB540
sub_080DB540: @ 0x080DB540
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DB55C  @ =gRam
	ldr r3, _080DB560  @ =0x00000F52
	add r2, r1, r3
	add r0, r0, r2
	ldr r2, _080DB564  @ =gUnknown_08175BE3
	ldr r3, _080DB568  @ =0x0000164C
	add r1, r1, r3
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	bx lr
_080DB55C:
	.4byte gRam
_080DB560:
	.4byte 0x00000F52
_080DB564:
	.4byte gUnknown_08175BE3
_080DB568:
	.4byte 0x0000164C
	THUMB_FUNC_END sub_080DB540

