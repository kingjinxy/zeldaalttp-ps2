	THUMB_FUNC_START sub_0811BE70
sub_0811BE70: @ 0x0811BE70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811BEA0  @ =gRam
	ldr r2, _0811BEA4  @ =0x00000A92
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #17
	strb r2, [r1]
	ldr r1, _0811BEA8  @ =0x00000DC5
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #17
	strb r1, [r2]
	ldr r2, _0811BEAC  @ =0x00000A74
	add r3, r3, r2
	add r0, r0, r3
	strb r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811BEA0:
	.4byte gRam
_0811BEA4:
	.4byte 0x00000A92
_0811BEA8:
	.4byte 0x00000DC5
_0811BEAC:
	.4byte 0x00000A74
	THUMB_FUNC_END sub_0811BE70

