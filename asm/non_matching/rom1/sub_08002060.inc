	thumb_func_start sub_08002060
sub_08002060: @ 0x08002060
	push {lr}
	push {r2, r3}
	bl sub_08001D5C
	pop {r2, r3}
	movs r4, #0x8c
	ldrsh r5, [r1, r4]
	adds r5, r5, r2
	bl sub_08002088
	movs r4, #0x8e
	ldrsh r5, [r1, r4]
	adds r5, r5, r3
	bl sub_08002088
	pop {pc}
_08002080:
	.byte 0x5B, 0x40, 0x0B, 0x80, 0x00, 0xBD, 0x00, 0x00

