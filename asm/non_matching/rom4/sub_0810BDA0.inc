	THUMB_FUNC_START sub_0810BDA0
sub_0810BDA0: @ 0x0810BDA0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0810BDCC  @ =gRam
	ldr r2, _0810BDD0  @ =0x00000FD2
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _0810BDC6
	ldr r4, _0810BDD4  @ =0x00000FA2
	add r0, r1, r4
	add r0, r3, r0
	strb r2, [r0]
	ldr r0, _0810BDD8  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0810BDC6:
	pop {r4}
	pop {r0}
	bx r0
_0810BDCC:
	.4byte gRam
_0810BDD0:
	.4byte 0x00000FD2
_0810BDD4:
	.4byte 0x00000FA2
_0810BDD8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0810BDA0

