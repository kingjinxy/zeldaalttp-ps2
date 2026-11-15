	thumb_func_start sub_08002044
sub_08002044: @ 0x08002044
	ldrsh r3, [r1, r2]
	movs r4, #3
	orrs r3, r3
	bmi _08002058
	subs r3, r3, r4
	bpl _08002054
	beq _08002054
_08002052:
	eors r3, r3
_08002054:
	strh r3, [r1, r2]
	mov pc, lr
_08002058:
	adds r3, r3, r4
	bmi _08002054
	beq _08002054
	b _08002052

