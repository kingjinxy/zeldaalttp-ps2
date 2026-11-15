	THUMB_FUNC_START sub_0806C3F8
sub_0806C3F8: @ 0x0806C3F8
	push {r4,lr}
	bl sub_08126D7C
	ldr r4, _0806C424  @ =gRam
	ldr r0, _0806C428  @ =0x00000A02
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0806C41E
	bl sub_0813370C
	ldr r0, _0806C42C  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0806C41E:
	pop {r4}
	pop {r0}
	bx r0
_0806C424:
	.4byte gRam
_0806C428:
	.4byte 0x00000A02
_0806C42C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C3F8

