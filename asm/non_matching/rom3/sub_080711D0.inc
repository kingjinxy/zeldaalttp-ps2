	THUMB_FUNC_START sub_080711D0
sub_080711D0: @ 0x080711D0
	push {lr}
	ldr r1, _080711F4  @ =gUnknown_0814CCEC
	ldr r0, _080711F8  @ =gRam
	ldr r2, _080711FC  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08096F30
	bl sub_080A3EE0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080711F4:
	.4byte gUnknown_0814CCEC
_080711F8:
	.4byte gRam
_080711FC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080711D0

