	THUMB_FUNC_START sub_0803006C
sub_0803006C: @ 0x0803006C
	push {lr}
	ldr r1, _08030084  @ =gUnknown_084278F8
	ldr r0, _08030088  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08030084:
	.4byte gUnknown_084278F8
_08030088:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0803006C

