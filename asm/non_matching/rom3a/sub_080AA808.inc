	THUMB_FUNC_START sub_080AA808
sub_080AA808: @ 0x080AA808
	push {lr}
	ldr r1, _080AA82C  @ =gRam
	ldr r0, _080AA830  @ =0x00000A52
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _080AA834  @ =gUnknown_0816E004
	ldr r0, _080AA838  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
_080AA82C:
	.4byte gRam
_080AA830:
	.4byte 0x00000A52
_080AA834:
	.4byte gUnknown_0816E004
_080AA838:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080AA808

