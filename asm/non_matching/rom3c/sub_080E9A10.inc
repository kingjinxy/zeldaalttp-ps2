	THUMB_FUNC_START sub_080E9A10
sub_080E9A10: @ 0x080E9A10
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E9A60  @ =gRam
	ldr r1, _080E9A64  @ =0x00000F62
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _080E9A68  @ =0x00000EE2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080E9A6C  @ =0x00000F72
	add r2, r3, r1
	add r2, r0, r2
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080E9A70  @ =0x00000F82
	add r2, r3, r1
	add r2, r0, r2
	sub r4, r4, #48
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _080E9A74  @ =0x00001082
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #32
	add r3, r3, r4
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9A60:
	.4byte gRam
_080E9A64:
	.4byte 0x00000F62
_080E9A68:
	.4byte 0x00000EE2
_080E9A6C:
	.4byte 0x00000F72
_080E9A70:
	.4byte 0x00000F82
_080E9A74:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080E9A10

