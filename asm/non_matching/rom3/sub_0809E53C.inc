	THUMB_FUNC_START sub_0809E53C
sub_0809E53C: @ 0x0809E53C
	ldr r0, _0809E548  @ =gRam
	ldr r1, _0809E54C  @ =0x00001803
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	bx lr
_0809E548:
	.4byte gRam
_0809E54C:
	.4byte 0x00001803
	THUMB_FUNC_END sub_0809E53C

