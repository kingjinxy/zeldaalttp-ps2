	THUMB_FUNC_START sub_080B6408
sub_080B6408: @ 0x080B6408
	push {lr}
	ldr r1, _080B6424  @ =gUnknown_0816F06C
	ldr r0, _080B6428  @ =gRam
	ldr r2, _080B642C  @ =0x00000A4C
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
_080B6424:
	.4byte gUnknown_0816F06C
_080B6428:
	.4byte gRam
_080B642C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B6408

