	thumb_func_start sub_08003660
sub_08003660: @ 0x08003660
	push {lr}
	push {r0, r1}
	bl sub_08003F4C
	adds r1, r0, #0
	bl sub_080039D4
	adds r2, r1, #0
	pop {r0, r1}
	movs r0, r0
_08003674:
	movs r3, #0x2a
	ldrb r3, [r0, r3]
	lsrs r3, r3, #1
	cmp r3, r2
	beq _08003682
	eors r3, r3
	b _08003684
_08003682:
	adds r3, #1
_08003684:
	pop {pc}
	.align 2, 0

