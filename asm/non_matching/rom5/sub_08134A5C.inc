	THUMB_FUNC_START sub_08134A5C
sub_08134A5C: @ 0x08134A5C
	push {lr}
	ldr r1, _08134A6C  @ =gUnknown_02031AB8
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134A6C:
	.4byte gUnknown_02031AB8
	THUMB_FUNC_END sub_08134A5C

