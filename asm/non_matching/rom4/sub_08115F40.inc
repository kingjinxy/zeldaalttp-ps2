	THUMB_FUNC_START sub_08115F40
sub_08115F40: @ 0x08115F40
	push {lr}
	ldr r1, _08115F50  @ =gUnknown_0817ED06
	add r0, r0, r1
	ldr r1, _08115F54  @ =gUnknown_0817EC56
	bl sub_08115D30
	pop {r0}
	bx r0
_08115F50:
	.4byte gUnknown_0817ED06
_08115F54:
	.4byte gUnknown_0817EC56
	THUMB_FUNC_END sub_08115F40

