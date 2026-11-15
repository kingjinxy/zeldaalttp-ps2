	thumb_func_start sub_08007530
sub_08007530: @ 0x08007530
	push {r7, lr}
	push {r0}
	adds r7, r1, #0
	adds r0, r1, #0
	movs r1, #2
	bl sub_080127A8
_0800753E:
	adds r2, r0, #0
	orrs r0, r0
	pop {r0}
	beq _0800755A
	ldrb r1, [r0, #0xa]
	ldrb r3, [r2, #0xa]
	cmp r1, r3
	beq _0800758C
	push {r0}
	adds r0, r2, #0
	movs r1, #2
	bl sub_080127D4
	b _0800753E
_0800755A:
	push {r0}
	bl sub_080123E8
	adds r1, r0, #0
	pop {r0}
	beq _0800758C
	push {r0, r1}
	movs r0, #2
	bl sub_08012728
	pop {r0, r1}
	strb r7, [r1, #9]
	movs r3, #8
	strb r3, [r1, #8]
	movs r2, #0x80
	strb r2, [r1, #0x19]
	str r0, [r1, #0x54]
	ldrb r2, [r0, #0xa]
	strb r2, [r1, #0xa]
	push {r1}
	adds r0, r1, #0
	bl sub_08000620
	pop {r0}
	pop {r7, pc}
_0800758C:
	eors r0, r0
	pop {r7, pc}
_08007590:
	.byte 0x00, 0xBD, 0x00, 0x00

