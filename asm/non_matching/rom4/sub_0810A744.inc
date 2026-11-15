	THUMB_FUNC_START sub_0810A744
sub_0810A744: @ 0x0810A744
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810A768  @ =gRam
	ldr r3, _0810A76C  @ =0x00000F92
	add r2, r1, r3
	add r2, r0, r2
	ldr r3, _0810A770  @ =gUnknown_0817C322
	ldr r4, _0810A774  @ =0x00000FB2
	add r1, r1, r4
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
_0810A768:
	.4byte gRam
_0810A76C:
	.4byte 0x00000F92
_0810A770:
	.4byte gUnknown_0817C322
_0810A774:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_0810A744

