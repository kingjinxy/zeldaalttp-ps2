	THUMB_FUNC_START sub_0810FD94
sub_0810FD94: @ 0x0810FD94
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _0810FDD8  @ =gRam
	ldr r1, _0810FDDC  @ =0x00000EE2
	add r2, r5, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #4
	strb r1, [r2]
	ldr r1, _0810FDE0  @ =0x00000ED2
	add r4, r5, r1
	add r4, r0, r4
	ldrb r2, [r4]
	add r1, r1, #32
	add r3, r5, r1
	add r3, r0, r3
	ldrb r1, [r3]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #5
	strb r2, [r4]
	lsr r2, r2, #8
	strb r2, [r3]
	ldr r1, _0810FDE4  @ =0x00001002
	add r5, r5, r1
	add r0, r0, r5
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FDD8:
	.4byte gRam
_0810FDDC:
	.4byte 0x00000EE2
_0810FDE0:
	.4byte 0x00000ED2
_0810FDE4:
	.4byte 0x00001002
	THUMB_FUNC_END sub_0810FD94

