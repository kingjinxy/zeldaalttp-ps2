	THUMB_FUNC_START sub_08134A70
sub_08134A70: @ 0x08134A70
	push {lr}
	ldr r1, _08134A80  @ =gUnknown_02031ABC
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134A80:
	.4byte gUnknown_02031ABC
	THUMB_FUNC_END sub_08134A70

