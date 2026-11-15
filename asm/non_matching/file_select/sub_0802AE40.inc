	THUMB_FUNC_START sub_0802AE40
sub_0802AE40: @ 0x0802AE40
	push {lr}
	ldr r2, _0802AE54  @ =gUnknown_084276EC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0802AE54:
	.4byte gUnknown_084276EC
	THUMB_FUNC_END sub_0802AE40

