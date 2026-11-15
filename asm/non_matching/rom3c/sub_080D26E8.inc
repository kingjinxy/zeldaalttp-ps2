	THUMB_FUNC_START sub_080D26E8
sub_080D26E8: @ 0x080D26E8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D26FC  @ =gRam
	ldr r2, _080D2700  @ =0x00000EE2
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #7
	strb r1, [r0]
	bx lr
_080D26FC:
	.4byte gRam
_080D2700:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_080D26E8

