	.syntax unified
	THUMB_FUNC_START sub_08009624
sub_08009624: @ 0X08009624
	push {lr}
	movs r1, #62
	ldrb r1, [r0, r1]
	bl sub_08002EB4+0x4
	pop {pc}
	.syntax unified
	.thumb
