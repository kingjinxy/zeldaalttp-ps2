	thumb_func_start sub_08002EB4
sub_08002EB4: @ 0x08002EB4
	.hword 0xFF01
	movs r0, r0
	push {r4, r5, r6, r7, lr}
	adds r2, r1, #0
	ldr r1, _080031C8 @ =0x00000280
	movs r3, #0x42
	adds r3, r3, r0
	ldrb r4, [r3]
	orrs r4, r4
	beq _08002EE2
	ldr r5, _080031CC @ =0x08002EB4
	lsrs r6, r4, #7
	ldrsb r5, [r5, r6]
	subs r4, r4, r5
	strb r4, [r3]
	push {r1, r2}
	adds r6, r2, #0
	bl sub_08002EE4
	pop {r1, r2}
	adds r0, #0x2c
	ldrh r3, [r0]
	b _08003050
_08002EE2:
	pop {r4, r5, r6, r7, pc}

