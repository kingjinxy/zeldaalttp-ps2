	thumb_func_start sub_08003704
sub_08003704: @ 0x08003704
	movs r2, #0x21
	ldrb r1, [r0, r2]
	cmp r1, #0xff
	beq _08003742
	ldr r1, [r0, #0x1c]
	lsrs r1, r1, #2
	bhs _0800373E
	movs r0, r0

