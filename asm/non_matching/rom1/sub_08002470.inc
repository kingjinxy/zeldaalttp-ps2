	.syntax unified
	THUMB_FUNC_START sub_08002470
sub_08002470: @ 0X08002470
	movs r2, #2
	negs r2, r2
_08002474:
	movs r3, #63
	strb r2, [r1, r3]
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
