	thumb_func_start sub_080094BC
sub_080094BC: @ 0x080094BC
	ldr r1, _08009500 @ =0x00004000
	tst r1, r0
	bne _080094C8
	ldr r1, _0800954C @ =0x0814791C
	lsls r0, r0, #1
	ldrh r0, [r1, r0]
_080094C8:
	mov pc, lr
	.align 2, 0

