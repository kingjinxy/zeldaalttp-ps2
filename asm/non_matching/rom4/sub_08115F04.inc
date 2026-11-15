	THUMB_FUNC_START sub_08115F04
sub_08115F04: @ 0x08115F04
	push {lr}
	cmp r0, #0
	beq _08115F0E
	bl sub_08115ED0
_08115F0E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08115F04

	.byte 0x00
	.byte 0x00
