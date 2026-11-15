	THUMB_FUNC_START sub_080B33C8
sub_080B33C8: @ 0x080B33C8
	push {lr}
	ldr r1, _080B33E4  @ =gUnknown_0816ED14
	ldr r0, _080B33E8  @ =gRam
	ldr r2, _080B33EC  @ =0x00000A4C
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B33E4:
	.4byte gUnknown_0816ED14
_080B33E8:
	.4byte gRam
_080B33EC:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B33C8

