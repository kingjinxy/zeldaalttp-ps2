	thumb_func_start sub_08002300
sub_08002300: @ 0x08002300
	push {r1, r2, r3, lr}
	push {r3}
	bl sub_08009484
	pop {r3}
	ldr r4, _08002404 @ =0x080021AC
	lsrs r3, r3, #2
	adds r4, r4, r3
	movs r3, #4
	ldrb r2, [r4]
	cmp r1, r2
	beq _08002322
	rsbs r3, r3, #0
	ldrb r2, [r4, #1]
	cmp r1, r2
	beq _08002322
	pop {r1, r2, r3, pc}
_08002322:
	movs r1, #0x2b
	ldrb r2, [r0, r1]
	adds r2, r2, r3
	movs r3, #0x1f
	ands r2, r3
	strb r2, [r0, r1]
	eors r1, r1
	pop {r1, r2, r3, pc}
	.align 2, 0

