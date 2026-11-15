	THUMB_FUNC_START sub_08071178
sub_08071178: @ 0x08071178
	push {r4,lr}
	ldr r0, _080711A4  @ =gRam
	ldr r1, _080711A8  @ =0x000009E8
	add r4, r0, r1
	ldrh r0, [r4]
	cmp r0, #6
	bls _0807118A
	bl sub_08089E94
_0807118A:
	bl sub_0809DDF4
	ldr r0, _080711AC  @ =gUnknown_0814CC7C
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
_080711A4:
	.4byte gRam
_080711A8:
	.4byte 0x000009E8
_080711AC:
	.4byte gUnknown_0814CC7C
	THUMB_FUNC_END sub_08071178

