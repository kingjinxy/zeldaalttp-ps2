	.syntax unified
	THUMB_FUNC_START sub_08009590
sub_08009590: @ 0X08009590
	adds r0, r4, #0
	movs r1, #65
	ldrb r2, [r0, r1]
	movs r3, #127
	ands r2, r3
	strb r2, [r0, r1]
_0800959C:
	bl 0x8003688
	pop {r3, r4}
	bx r3
	.syntax unified
	.thumb
