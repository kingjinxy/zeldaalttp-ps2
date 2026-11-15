	thumb_func_start sub_0800932C
sub_0800932C: @ 0x0800932C
	ldr r2, _080094F8 @ =0x08009280
_0800932E:
	lsrs r1, r1, #0xe
	lsls r1, r1, #3
	adds r2, r2, r1
	ldr r1, [r2]
	lsls r0, r0, #1
	ldrh r0, [r1, r0]
	ldr r1, _080094FC @ =0x00007FFF
	ands r0, r1
	ldr r1, _08009500 @ =0x00004000
	tst r0, r1
	bne _0800934A
	lsls r0, r0, #1
	ldr r1, [r2, #4]
	ldrh r0, [r1, r0]
_0800934A:
	mov pc, lr

