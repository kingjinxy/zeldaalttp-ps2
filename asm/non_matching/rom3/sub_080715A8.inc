	THUMB_FUNC_START sub_080715A8
sub_080715A8: @ 0x080715A8
	push {lr}
	ldr r1, _080715C4  @ =gUnknown_0814CDB0
	ldr r0, _080715C8  @ =gRam
	ldr r2, _080715CC  @ =0x000009E8
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
_080715C4:
	.4byte gUnknown_0814CDB0
_080715C8:
	.4byte gRam
_080715CC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080715A8

