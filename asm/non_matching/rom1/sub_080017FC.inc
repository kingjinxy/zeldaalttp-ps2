	thumb_func_start sub_080017FC
sub_080017FC: @ 0x080017FC
	push {r4, r5, r6, r7, lr}
	ldrb r1, [r0, #0xb]
	lsrs r1, r1, #8
	bhs _08001808
	bl sub_080019FC
_08001808:
	ldrh r1, [r0, #0xc]
	movs r2, #0x2b
	adds r2, r2, r0
	ldrb r2, [r2]
	bl sub_08003010
	pop {r4, r5, r6, r7, pc}
	.align 2, 0

