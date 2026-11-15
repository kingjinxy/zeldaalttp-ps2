	THUMB_FUNC_START sub_08035308
sub_08035308: @ 0x08035308
	push {lr}
	ldr r2, _0803531C  @ =gUnknown_08427B58
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0803531C:
	.4byte gUnknown_08427B58
	THUMB_FUNC_END sub_08035308

