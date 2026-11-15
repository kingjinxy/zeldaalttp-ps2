	THUMB_FUNC_START sub_08110FD8
sub_08110FD8: @ 0x08110FD8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08110FF8  @ =gUnknown_0817D4B0
	ldr r1, _08110FFC  @ =gRam
	ldr r3, _08111000  @ =0x00000F92
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08110FF8:
	.4byte gUnknown_0817D4B0
_08110FFC:
	.4byte gRam
_08111000:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08110FD8

