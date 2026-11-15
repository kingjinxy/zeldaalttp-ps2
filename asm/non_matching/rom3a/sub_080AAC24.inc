	THUMB_FUNC_START sub_080AAC24
sub_080AAC24: @ 0x080AAC24
	push {lr}
	bl sub_080A9E38
	bl sub_080A8178
	bl sub_080A8D70
	bl sub_080A93B8
	bl sub_080A97F8
	bl sub_080A9C04
	ldr r1, _080AAC50  @ =gRam
	ldr r0, _080AAC54  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AAC50:
	.4byte gRam
_080AAC54:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080AAC24

