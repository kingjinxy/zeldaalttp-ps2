	THUMB_FUNC_START sub_0810A820
sub_0810A820: @ 0x0810A820
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810A83C  @ =gRam
	ldr r3, _0810A840  @ =0x00000EA5
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #7
	strb r3, [r1]
	ldr r1, _0810A844  @ =0x00001172
	add r2, r2, r1
	add r0, r0, r2
	strb r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0810A83C:
	.4byte gRam
_0810A840:
	.4byte 0x00000EA5
_0810A844:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0810A820

