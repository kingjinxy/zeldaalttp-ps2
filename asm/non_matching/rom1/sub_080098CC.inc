	.syntax unified
	THUMB_FUNC_START sub_080098CC
sub_080098CC: @ 0X080098CC
	push {r0, lr}
	bl sub_0804C9C8
	pop {r0}
	bl DeleteThisEntity
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
