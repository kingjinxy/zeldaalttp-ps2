	THUMB_FUNC_START sub_0810FA0C
sub_0810FA0C: @ 0x0810FA0C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810FA2C  @ =gUnknown_0817D304
	ldr r1, _0810FA30  @ =gRam
	ldr r3, _0810FA34  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0810FA2C:
	.4byte gUnknown_0817D304
_0810FA30:
	.4byte gRam
_0810FA34:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810FA0C

