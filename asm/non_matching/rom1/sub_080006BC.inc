	THUMB_FUNC_START sub_080006BC
sub_080006BC:
	ldr r3, [r2, #20]
	cmp r3, #0
	beq _0800073C
	ldrh r4, [r2, #34]
	lsr r4, r4, #8
	bcs _080006D2
	b _0800073C

	.align 2, 0
