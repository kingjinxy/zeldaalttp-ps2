	THUMB_FUNC_START sub_080D7B04
sub_080D7B04: @ 0x080D7B04
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D7B24  @ =gUnknown_08175664
	ldr r1, _080D7B28  @ =gRam
	ldr r3, _080D7B2C  @ =0x00000F92
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080D7B24:
	.4byte gUnknown_08175664
_080D7B28:
	.4byte gRam
_080D7B2C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D7B04

