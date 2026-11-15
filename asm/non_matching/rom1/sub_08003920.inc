	thumb_func_start sub_08003920
sub_08003920: @ 0x08003920
	push {r5, r6}
	movs r6, #0x50
	ldrh r5, [r0, r6]
	ldrh r6, [r1, r6]
	ands r5, r6
	ldr r6, _080039DC @ =0x0000C000
	tst r5, r6
	beq _08003958
_08003930:
	orrs r2, r2
	beq _08003942
	ldrh r5, [r0, #0x32]
	ldrh r6, [r1, #0x32]
	subs r5, r5, r6
	adds r5, r5, r2
	lsls r2, r2, #1
	cmp r2, r5
	blo _08003958
_08003942:
	orrs r3, r3
	beq _08003954
	ldrh r5, [r0, #0x36]
	ldrh r6, [r1, #0x36]
	subs r5, r5, r6
	adds r5, r5, r3
	lsls r3, r3, #1
	cmp r3, r5
	blo _08003958
_08003954:
	movs r5, #1
	b _0800395A
_08003958:
	eors r5, r5
_0800395A:
	pop {r5, r6}
	mov pc, lr
	.align 2, 0

