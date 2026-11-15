	thumb_func_start sub_080009AC
sub_080009AC: @ 0x080009AC
	push {r4, r5}
	movs r3, #0
	movs r5, #1
	lsrs r2, r1, #0x10
	beq _080009C4
	ldr r4, _08000AC4 @ =0xFFFFFFFF
_080009B8:
	adds r4, r4, r5
	lsls r1, r5
	blo _080009B8
	adds r1, r1, r5
	rors r1, r5
	b _080009D0
_080009C4:
	movs r4, #0x20
	adds r2, r1, #0
_080009C8:
	subs r4, r4, r5
	lsrs r2, r5
	bne _080009C8
	lsls r1, r4
_080009D0:
	lsls r5, r4
	adds r2, r0, #0
_080009D4:
	subs r0, r0, r1
	blo _080009DC
	adds r3, r3, r5
	adds r2, r0, #0
_080009DC:
	adds r0, r2, #0
	lsrs r1, r1, #1
	lsrs r5, r5, #1
	bne _080009D4
	adds r0, r3, #0
	pop {r4, r5}
	mov pc, lr
	.align 2, 0

