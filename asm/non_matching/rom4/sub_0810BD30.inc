	THUMB_FUNC_START sub_0810BD30
sub_0810BD30: @ 0x0810BD30
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810BD50  @ =gUnknown_0817CBAC
	ldr r1, _0810BD54  @ =gRam
	ldr r3, _0810BD58  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0810BD50:
	.4byte gUnknown_0817CBAC
_0810BD54:
	.4byte gRam
_0810BD58:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810BD30

