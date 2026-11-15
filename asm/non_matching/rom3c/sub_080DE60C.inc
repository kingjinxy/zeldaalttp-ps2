	THUMB_FUNC_START sub_080DE60C
sub_080DE60C: @ 0x080DE60C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DE628  @ =gRam
	ldr r3, _080DE62C  @ =0x00000F92
	add r2, r1, r3
	add r0, r0, r2
	ldr r2, _080DE630  @ =0x00000996
	add r1, r1, r2
	ldrb r1, [r1]
	lsr r1, r1, #5
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	bx lr
_080DE628:
	.4byte gRam
_080DE62C:
	.4byte 0x00000F92
_080DE630:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080DE60C

