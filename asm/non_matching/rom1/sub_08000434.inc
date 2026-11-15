	THUMB_FUNC_START sub_08000434
sub_08000434: @ 0x08000434
	push {lr}
	ldr r0, _08000774  @ =gUnknown_03000E40
	ldr r1, _08000778  @ =_08000440 + 1
	mov lr, r1
	bx r0

	.align 2, 0

_08000440:
	bl sub_0803A320
	pop {pc}
	THUMB_FUNC_END sub_08000434

	.align 2, 0

