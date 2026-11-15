	THUMB_FUNC_START sub_0809E57C
sub_0809E57C: @ 0x0809E57C
	ldr r1, _0809E5A8  @ =gRam
	ldr r0, _0809E5AC  @ =0x000016EA
	add r2, r1, r0
	mov r3, #0
	mov r0, #224
	strb r0, [r2]
	ldr r2, _0809E5B0  @ =0x000016EB
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0809E5B4  @ =0x00001718
	add r2, r1, r0
	mov r0, #26
	strb r0, [r2]
	ldr r2, _0809E5B8  @ =0x0000180D
	add r0, r1, r2
	mov r2, #1
	strb r2, [r0]
	mov r0, #162
	lsl r0, r0, #4
	add r1, r1, r0
	strh r2, [r1]
	bx lr
_0809E5A8:
	.4byte gRam
_0809E5AC:
	.4byte 0x000016EA
_0809E5B0:
	.4byte 0x000016EB
_0809E5B4:
	.4byte 0x00001718
_0809E5B8:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_0809E57C

