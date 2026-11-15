	THUMB_FUNC_START sub_08135A74
sub_08135A74: @ 0x08135A74
	push {lr}
	ldr r2, _08135A84  @ =gUnknown_02031A30
	ldr r2, [r2]
	bl _call_via_r2
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135A84:
	.4byte gUnknown_02031A30
	THUMB_FUNC_END sub_08135A74

