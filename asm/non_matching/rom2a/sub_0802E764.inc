	THUMB_FUNC_START sub_0802E764
sub_0802E764: @ 0x0802E764
	push {lr}
	bl sub_0800099C
	ldr r1, _0802E784  @ =gUnknown_08427830
	ldr r0, _0802E788  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_0802E904
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802E784:
	.4byte gUnknown_08427830
_0802E788:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0802E764

