	THUMB_FUNC_START sub_080B64F8
sub_080B64F8: @ 0x080B64F8
	push {lr}
	bl sub_0807597C
	ldr r1, _080B6510  @ =gRam
	ldr r0, _080B6514  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6510:
	.4byte gRam
_080B6514:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B64F8

