	THUMB_FUNC_START sub_08032E08
sub_08032E08: @ 0x08032E08
	push {lr}
	ldr r1, _08032E20  @ =gUnknown_08427A4C
	ldr r0, _08032E24  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032E20:
	.4byte gUnknown_08427A4C
_08032E24:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08032E08

