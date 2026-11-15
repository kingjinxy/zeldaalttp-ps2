	THUMB_FUNC_START sub_080CA3A0
sub_080CA3A0: @ 0x080CA3A0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080CA3E8  @ =gRam
	ldr r3, _080CA3EC  @ =0x00000F62
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r4, _080CA3F0  @ =0x00000968
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080CA3F4  @ =0x00000F72
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080CA3F8  @ =0x00000F82
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #3
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080CA3FC  @ =0x00001062
	add r1, r2, r3
	add r0, r0, r1
	ldrb r0, [r0]
	add r4, r4, #1
	add r2, r2, r4
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA3E8:
	.4byte gRam
_080CA3EC:
	.4byte 0x00000F62
_080CA3F0:
	.4byte 0x00000968
_080CA3F4:
	.4byte 0x00000F72
_080CA3F8:
	.4byte 0x00000F82
_080CA3FC:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080CA3A0

