	THUMB_FUNC_START sub_0802D988
sub_0802D988: @ 0x0802D988
	push {lr}
	ldr r1, _0802D9A0  @ =gUnknown_084277D4
	ldr r0, _0802D9A4  @ =gUnknown_0201EF18
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D9A0:
	.4byte gUnknown_084277D4
_0802D9A4:
	.4byte gUnknown_0201EF18
	THUMB_FUNC_END sub_0802D988

