	thumb_func_start sub_08007638
sub_08007638: @ 0x08007638
	push {lr}
	mov r1, sl
	ldr r1, [r1, #0x2c]
	orrs r1, r1
	bne _08007664
	pop {r2}
	push {lr}
	bl sub_080074D4
	beq _08007686
_0800764C:
	push {r0}
	bl sub_080123E8
	eors r2, r2
	adds r1, r0, #0
	pop {r0}
	beq _08007686
	push {r0, r1}
	movs r0, #2
	bl sub_08012728
	pop {r0, r1}
_08007664:
	ldrb r2, [r0, #1]
	strb r2, [r1, #9]
	movs r2, #8
	strb r2, [r1, #8]
	movs r2, #0x80
	strb r2, [r1, #0x19]
	str r0, [r1, #0x54]
	mov r2, sl
	ldr r2, [r2, #0x28]
	ldrb r2, [r2, #0xa]
	strb r2, [r1, #0xa]
	push {r0, r1}
	adds r0, r1, #0
	bl sub_08000620
	pop {r0, r1}
	movs r2, #1
_08007686:
	pop {pc}
_08007688:
	push {r0}
	bl sub_08012440
	eors r2, r2
	adds r1, r0, #0
	pop {r0}
	beq _080076C2
	push {r0, r1}
	movs r0, #2
	bl sub_08012728
	pop {r0, r1}
	ldrb r2, [r0, #1]
	strb r2, [r1, #9]
	movs r2, #8
	strb r2, [r1, #8]
	movs r2, #0x80
	strb r2, [r1, #0x19]
	str r0, [r1, #0x54]
	mov r2, sl
	ldr r2, [r2, #0x28]
	ldrb r2, [r2, #0xa]
	strb r2, [r1, #0xa]
	push {r0, r1}
	adds r0, r1, #0
	bl sub_08000620
	pop {r0, r1}
	movs r2, #1
_080076C2:
	pop {pc}

