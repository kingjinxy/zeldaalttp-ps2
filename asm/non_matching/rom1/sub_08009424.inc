	thumb_func_start sub_08009424
sub_08009424: @ 0x08009424
	ldr r2, _08009530 @ =0x08009280
	lsrs r3, r3, #0xe
	lsls r3, r3, #3
	adds r2, r2, r3
	ldr r3, [r2]
	lsls r1, r1, #1
	ldrh r1, [r3, r1]
	ldr r3, _080094FC @ =0x00007FFF
	ands r1, r3
	ldr r3, _08009500 @ =0x00004000
	tst r1, r3
	bne _08009442
	lsls r1, r1, #1
	ldr r3, [r2, #4]
	ldrh r1, [r3, r1]
_08009442:
	mov pc, lr

