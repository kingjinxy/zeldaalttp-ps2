	thumb_func_start sub_08003130
sub_08003130: @ 0x08003130
	push {r4}
	movs r1, #0x3d
	ldrsb r2, [r0, r1]
	orrs r2, r2
	beq _0800315E
	bmi _0800315C
	subs r2, #1
	beq _0800315E
	ldr r3, _0800321C @ =0x03000E20
	ldrb r3, [r3]
	movs r4, #4
	tst r3, r4
	bne _0800315E
	strb r2, [r0, r1]
	ldrb r1, [r0, #0x1e]
	movs r2, #0xf0
	ands r1, r2
	movs r2, #0xf
	orrs r1, r2
	strb r1, [r0, #0x1e]
	pop {r4}
	mov pc, lr
_0800315C:
	adds r2, #1
_0800315E:
	strb r2, [r0, r1]
	ldrb r1, [r0, #0x1e]
	movs r2, #0xf0
	ands r1, r2
	lsrs r2, r1, #4
	orrs r1, r2
	strb r1, [r0, #0x1e]
	pop {r4}
	mov pc, lr

