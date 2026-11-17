	.syntax unified
	THUMB_FUNC_START sub_08009630
sub_08009630: @ 0X08009630
	push {lr}
	movs r1, #62
	ldrb r1, [r0, r1]
	bl sub_08002E8C
	pop {pc}
	.syntax unified
	.thumb
