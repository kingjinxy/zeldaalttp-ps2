	THUMB_FUNC_START sub_08115F58
sub_08115F58: @ 0x08115F58
	push {lr}
	ldr r1, _08115F68  @ =gUnknown_0817ED0E
	add r0, r0, r1
	ldr r1, _08115F6C  @ =gUnknown_0817ECD4
	bl sub_08115D30
	pop {r0}
	bx r0
_08115F68:
	.4byte gUnknown_0817ED0E
_08115F6C:
	.4byte gUnknown_0817ECD4
	THUMB_FUNC_END sub_08115F58

