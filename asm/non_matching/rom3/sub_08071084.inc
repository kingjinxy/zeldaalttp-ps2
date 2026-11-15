	THUMB_FUNC_START sub_08071084
sub_08071084: @ 0x08071084
	push {r4,lr}
	ldr r0, _080710AC  @ =gRam
	ldr r1, _080710B0  @ =0x000009E8
	add r4, r0, r1
	ldrh r0, [r4]
	cmp r0, #5
	bls _08071096
	bl sub_08089E94
_08071096:
	ldr r0, _080710B4  @ =gUnknown_0814CC1C
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
_080710AC:
	.4byte gRam
_080710B0:
	.4byte 0x000009E8
_080710B4:
	.4byte gUnknown_0814CC1C
	THUMB_FUNC_END sub_08071084

