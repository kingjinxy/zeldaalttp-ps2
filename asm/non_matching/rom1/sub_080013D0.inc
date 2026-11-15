	thumb_func_start sub_080013D0
sub_080013D0: @ 0x080013D0
	push {lr}
	eors r2, r2
	adds r5, r2, #0
	push {r1}
	mov sl, r1
	bl sub_0800777C
	pop {r1}
	bne _080013F8
	movs r4, #0x2a
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	ldr r2, _08001704 @ =0x0800100C
	ldrb r3, [r2, r4]
	ldr r2, _08001708 @ =0x03000510
	ldrb r2, [r2]
	ands r3, r2
	beq _080013F8
	adds r4, #1
	adds r5, r4, #0
_080013F8:
	adds r3, r5, #0
	pop {pc}

