	THUMB_FUNC_START sub_080E2614
sub_080E2614: @ 0x080E2614
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E2630  @ =gRam
	ldr r3, _080E2634  @ =0x00000F22
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #0
	strb r3, [r1]
	ldr r1, _080E2638  @ =0x00000F12
	add r2, r2, r1
	add r0, r0, r2
	strb r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080E2630:
	.4byte gRam
_080E2634:
	.4byte 0x00000F22
_080E2638:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080E2614

