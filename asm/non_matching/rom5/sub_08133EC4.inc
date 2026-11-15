	.syntax unified
	THUMB_FUNC_START sub_08133EC4
sub_08133EC4: @ 0X08133EC4
	ldrb r2, [r1, #2]
	cmp r2, #3
	bcs.n _08133EDC
	lsls r2, r2, #2
	adds r3, r1, r2
	ldr r2, [r1, #64]
	adds r2, #4
	str r2, [r3, #68]
	ldrb r2, [r1, #2]
	adds r2, #1
	strb r2, [r1, #2]
	b.n sub_08133EA4
_08133EDC:
	b.n sub_08133E34
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
