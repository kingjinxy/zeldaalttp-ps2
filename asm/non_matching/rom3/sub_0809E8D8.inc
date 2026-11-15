	THUMB_FUNC_START sub_0809E8D8
sub_0809E8D8: @ 0x0809E8D8
	push {lr}
	ldr r1, _0809E8F4  @ =gUnknown_08167FC8
	ldr r0, _0809E8F8  @ =gRam
	ldr r2, _0809E8FC  @ =0x0000180E
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E8F4:
	.4byte gUnknown_08167FC8
_0809E8F8:
	.4byte gRam
_0809E8FC:
	.4byte 0x0000180E
	THUMB_FUNC_END sub_0809E8D8

