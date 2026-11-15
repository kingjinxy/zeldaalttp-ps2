	THUMB_FUNC_START sub_0810DA6C
sub_0810DA6C: @ 0x0810DA6C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810DA9C  @ =gRam
	ldr r2, _0810DAA0  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r4, _0810DAA4  @ =0x00000F02
	add r2, r3, r4
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	add r1, r1, #14
	ldr r0, _0810DAA8  @ =0x000016C4
	add r3, r3, r0
	strh r1, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810DA9C:
	.4byte gRam
_0810DAA0:
	.4byte 0x00000EE2
_0810DAA4:
	.4byte 0x00000F02
_0810DAA8:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_0810DA6C

