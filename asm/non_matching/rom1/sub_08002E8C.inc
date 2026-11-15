	thumb_func_start sub_08002E8C
sub_08002E8C: @ 0x08002E8C
	movs r3, #0x42
	ldrb r2, [r0, r3]
	cmp r2, #0
	beq _08002EB0
	push {r4, r5, r6, r7, lr}
	ldr r4, _080031C4 @ =0x08002EB4
	lsrs r5, r2, #7
	ldrsb r4, [r4, r5]
	subs r2, r2, r4
	strb r2, [r0, r3]
	push {r1}
	bl sub_08003D08
	pop {r2}
	ldr r1, _080031C8 @ =0x00000280
	adds r0, #0x2c
	ldrh r3, [r0]
	b _08003050
_08002EB0:
	mov pc, lr
	.align 2, 0

