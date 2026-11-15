	thumb_func_start sub_08002088
sub_08002088: @ 0x08002088
	orrs r5, r5
	bmi _08002094
	ldr r6, _08002190 @ =0x00000180
	cmp r5, r6
	blo _0800209C
	b _0800209A
_08002094:
	ldr r6, _08002194 @ =0xFFFFFE80
	cmp r5, r6
	bhs _0800209C
_0800209A:
	adds r5, r6, #0
_0800209C:
	strh r5, [r1, r4]
	mov pc, lr

