	THUMB_FUNC_START sub_0809E550
sub_0809E550: @ 0x0809E550
	ldr r1, _0809E56C  @ =gRam
	ldr r0, _0809E570  @ =0x000016EA
	add r2, r1, r0
	mov r3, #0
	mov r0, #1
	strb r0, [r2]
	ldr r2, _0809E574  @ =0x000016EB
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0809E578  @ =0x00001718
	add r1, r1, r0
	mov r0, #27
	strb r0, [r1]
	bx lr
_0809E56C:
	.4byte gRam
_0809E570:
	.4byte 0x000016EA
_0809E574:
	.4byte 0x000016EB
_0809E578:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809E550

