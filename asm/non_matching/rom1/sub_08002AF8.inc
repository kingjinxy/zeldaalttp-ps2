	.syntax unified
	THUMB_FUNC_START sub_08002AF8
sub_08002AF8: @ 0X08002AF8
	bl sub_080025F4
	push {r1}
	movs r1, #11
	eors r2, r2
	movs r3, #3
	bl sub_08001B54
	pop {r1}
	movs r0, r0
	.syntax unified
	.thumb
