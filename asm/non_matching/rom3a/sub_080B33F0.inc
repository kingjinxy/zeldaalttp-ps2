	THUMB_FUNC_START sub_080B33F0
sub_080B33F0: @ 0x080B33F0
	push {lr}
	ldr r1, _080B340C  @ =gUnknown_0816EEF4
	ldr r0, _080B3410  @ =gRam
	ldr r2, _080B3414  @ =0x00000A4C
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
_080B340C:
	.4byte gUnknown_0816EEF4
_080B3410:
	.4byte gRam
_080B3414:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B33F0

