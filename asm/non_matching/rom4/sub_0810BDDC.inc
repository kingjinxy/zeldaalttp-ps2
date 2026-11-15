	THUMB_FUNC_START sub_0810BDDC
sub_0810BDDC: @ 0x0810BDDC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810BE18  @ =gUnknown_03003E74
	mov r1, #88
	strh r1, [r2]
	ldr r3, _0810BE1C  @ =gRam
	ldr r2, _0810BE20  @ =0x00000FB2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r1, _0810BE24  @ =0x00000F92
	add r3, r3, r1
	add r3, r0, r3
	lsl r2, r2, #2
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r3, _0810BE28  @ =gUnknown_0817CD08
	lsl r1, r2, #2
	add r1, r1, r3
	ldr r1, [r1]
	ldr r3, _0810BE2C  @ =gUnknown_0817CD58
	add r2, r2, r3
	ldrb r2, [r2]
	bl sub_080C9480
	pop {r0}
	bx r0
_0810BE18:
	.4byte gUnknown_03003E74
_0810BE1C:
	.4byte gRam
_0810BE20:
	.4byte 0x00000FB2
_0810BE24:
	.4byte 0x00000F92
_0810BE28:
	.4byte gUnknown_0817CD08
_0810BE2C:
	.4byte gUnknown_0817CD58
	THUMB_FUNC_END sub_0810BDDC

