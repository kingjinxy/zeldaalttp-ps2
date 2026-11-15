	THUMB_FUNC_START sub_080713A0
sub_080713A0: @ 0x080713A0
	push {r4,lr}
	ldr r0, _080713C8  @ =gRam
	ldr r1, _080713CC  @ =0x000009E8
	add r4, r0, r1
	ldrh r0, [r4]
	cmp r0, #2
	bls _080713B2
	bl sub_08089E94
_080713B2:
	ldr r0, _080713D0  @ =gUnknown_0814CD50
	ldrh r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080713C8:
	.4byte gRam
_080713CC:
	.4byte 0x000009E8
_080713D0:
	.4byte gUnknown_0814CD50
	THUMB_FUNC_END sub_080713A0

