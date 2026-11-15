	thumb_func_start sub_080074D4
sub_080074D4: @ 0x080074D4
	push {lr}
	mov r1, sb
	adds r1, #1
	movs r2, #4
	ands r1, r2
	bne _0800750A
	push {r0}
	ldrb r0, [r0, #1]
	movs r1, #2
	bl sub_080127A8
_080074EA:
	adds r2, r0, #0
	subs r0, #1
	pop {r0}
	bmi _0800750A
	mov r1, sl
	ldr r1, [r1, #0x28]
	ldrb r1, [r1, #0xa]
	ldrb r3, [r2, #0xa]
	cmp r1, r3
	beq _0800750A
	push {r0}
	adds r0, r2, #0
	movs r1, #2
	bl sub_080127D4
	b _080074EA
_0800750A:
	pop {pc}

