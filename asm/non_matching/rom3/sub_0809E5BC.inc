	THUMB_FUNC_START sub_0809E5BC
sub_0809E5BC: @ 0x0809E5BC
	ldr r1, _0809E5E8  @ =gRam
	ldr r0, _0809E5EC  @ =0x000016EA
	add r2, r1, r0
	mov r3, #0
	mov r0, #192
	strb r0, [r2]
	ldr r2, _0809E5F0  @ =0x000016EB
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0809E5F4  @ =0x00001718
	add r2, r1, r0
	mov r0, #25
	strb r0, [r2]
	ldr r2, _0809E5F8  @ =0x0000180D
	add r0, r1, r2
	mov r2, #1
	strb r2, [r0]
	ldr r0, _0809E5FC  @ =0x00001649
	add r1, r1, r0
	strb r2, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_0809E5E8:
	.4byte gRam
_0809E5EC:
	.4byte 0x000016EA
_0809E5F0:
	.4byte 0x000016EB
_0809E5F4:
	.4byte 0x00001718
_0809E5F8:
	.4byte 0x0000180D
_0809E5FC:
	.4byte 0x00001649
	THUMB_FUNC_END sub_0809E5BC

