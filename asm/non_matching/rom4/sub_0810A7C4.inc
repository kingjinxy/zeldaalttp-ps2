	THUMB_FUNC_START sub_0810A7C4
sub_0810A7C4: @ 0x0810A7C4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810A7EC  @ =gRam
	ldr r3, _0810A7F0  @ =0x00001082
	add r2, r1, r3
	add r2, r0, r2
	ldr r3, _0810A7F4  @ =gUnknown_0817C354
	ldr r4, _0810A7F8  @ =0x00000FC2
	add r1, r1, r4
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A7EC:
	.4byte gRam
_0810A7F0:
	.4byte 0x00001082
_0810A7F4:
	.4byte gUnknown_0817C354
_0810A7F8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810A7C4

