	THUMB_FUNC_START sub_0802DC60
sub_0802DC60: @ 0x0802DC60
	push {lr}
	ldr r1, _0802DC78  @ =gUnknown_084277E8
	ldr r0, _0802DC7C  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802DC78:
	.4byte gUnknown_084277E8
_0802DC7C:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0802DC60

	.ALIGN 2, 0
