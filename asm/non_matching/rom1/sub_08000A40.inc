	thumb_func_start sub_08000A40
sub_08000A40: @ 0x08000A40
	lsrs r1, r0, #1
	ldr r2, _08000AE0 @ =0x55555555
	ands r0, r2
	ands r1, r2
	adds r0, r0, r1
	lsrs r1, r0, #2
	ldr r2, _08000AE4 @ =0x33333333
	ands r0, r2
	ands r1, r2
	adds r0, r0, r1
	lsrs r1, r0, #4
	ldr r2, _08000AE8 @ =0x0F0F0F0F
	ands r0, r2
	ands r1, r2
	adds r0, r0, r1
	lsrs r1, r0, #8
	ldr r2, _08000AEC @ =0x00FF00FF
	ands r0, r2
	ands r1, r2
	adds r0, r0, r1
	lsls r1, r0, #0x10
	adds r0, r0, r1
	lsrs r0, r0, #0x10
	mov pc, lr

