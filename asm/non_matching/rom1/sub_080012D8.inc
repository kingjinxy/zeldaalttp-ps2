	thumb_func_start sub_080012D8
sub_080012D8: @ 0x080012D8
	push {lr}
	b _080012DC
_080012DC:
	ldrh r3, [r1]
	orrs r3, r3
	beq _080012F0
	adds r1, #2
	ldrh r2, [r1]
	adds r1, #2
	cmp r0, r3
	bne _080012DC
	adds r3, r2, #0
	movs r2, #1
_080012F0:
	pop {pc}
	.align 2, 0

