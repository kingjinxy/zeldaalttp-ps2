	THUMB_FUNC_START sub_080F37D8
sub_080F37D8: @ 0x080F37D8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F3804  @ =gUnknown_081792A8
	ldr r0, _080F3808  @ =gRam
	ldr r2, _080F380C  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_080F3804:
	.4byte gUnknown_081792A8
_080F3808:
	.4byte gRam
_080F380C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F37D8

