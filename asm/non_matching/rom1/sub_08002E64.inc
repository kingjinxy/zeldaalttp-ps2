	.syntax unified
	THUMB_FUNC_START sub_08002E64
sub_08002E64: @ 0X08002E64
	push {r4, r5, r6, r7, lr}
	bl sub_08002EE8
	bl sub_0800303C
	pop {r4, r5, r6, r7, pc}
	.syntax unified
	.thumb

