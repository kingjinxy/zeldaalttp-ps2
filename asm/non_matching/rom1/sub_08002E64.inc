	.syntax unified
	THUMB_FUNC_START sub_08002E64
sub_08002E64: @ 0X08002E64
	push {r4, r5, r6, r7, lr}
	bl 0x8002ee8
	bl 0x800303c
	pop {r4, r5, r6, r7, pc}
	.syntax unified
	.thumb

