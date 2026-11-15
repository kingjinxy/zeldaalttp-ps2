	thumb_func_start sub_08003010
sub_08003010: @ 0x08003010
	push {r4, r5, r6, r7, lr}
	movs r3, #0x80
	tst r2, r3
	bne _080030B0
	adds r0, #0x2c
	ldrh r3, [r0]
	movs r4, #7
	tst r2, r4
	bne _08003038
	push {r0, r1, r2, r3}
	adds r0, r2, #0
	adds r1, r3, #0
	bl sub_080030B4
	adds r4, r0, #0
	pop {r0, r1, r2, r3}
	cmp r2, r4
	beq _08003038
	adds r2, r4, #0
	ldr r1, _080031E0 @ =0x00000100
_08003038:
	b _08003050
	.align 2, 0

