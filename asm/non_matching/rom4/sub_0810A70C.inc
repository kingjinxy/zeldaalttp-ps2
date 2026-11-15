	THUMB_FUNC_START sub_0810A70C
sub_0810A70C: @ 0x0810A70C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810A734  @ =gRam
	ldr r3, _0810A738  @ =0x000010A2
	add r2, r1, r3
	add r2, r0, r2
	ldr r3, _0810A73C  @ =gUnknown_0817C320
	ldr r4, _0810A740  @ =0x00000FB2
	add r1, r1, r4
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r2]
	bl sub_0810A744
	pop {r4}
	pop {r0}
	bx r0
_0810A734:
	.4byte gRam
_0810A738:
	.4byte 0x000010A2
_0810A73C:
	.4byte gUnknown_0817C320
_0810A740:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_0810A70C

