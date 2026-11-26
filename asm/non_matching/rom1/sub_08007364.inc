	.syntax unified
	THUMB_FUNC_START sub_08007364
sub_08007364: @ 0X08007364
	push {lr}
	mov sl, r1
	eors r2, r2
	strb r2, [r1, #3]
	movs r2, #15
	ldrb r3, [r1, #4]
	ands r2, r3
	strb r2, [r1, #4]
	ldrb r3, [r1, #7]
	ldrb r2, [r1, #2]
	orrs r2, r3
	lsrs r2, r2, #7
	bcs.n _080073F0
	lsrs r2, r2, #1
	bcs.n _080073F0
	ldrh r2, [r1, #54]
	ldr r3, [pc, #176]
	tst r2, r3
	beq.n _0800739C
	ldr r2, [pc, #176]
	ldrh r2, [r2, #0]
	ldr r3, [pc, #176]
	tst r2, r3
	beq.n _080073F0
	movs r2, #64
	bl sub_080031AC
	b.n _080073F0
_0800739C:
	ldrb r3, [r1, #26]
	movs r2, #114
	ldrh r2, [r0, r2]
	orrs r2, r3
	bne.n _080073F0
	movs r2, #61
	ldrsb r3, [r0, r2]
	orrs r3, r3
	beq.n _080073B8
	bmi.n _080073B8
	movs r2, #66
	ldrb r3, [r0, r2]
	orrs r3, r3
	bne.n _080073F0
_080073B8:
	ldrh r2, [r1, #54]
	ldr r3, [pc, #136]
	ands r2, r3
	bne.n _080073F0
	ldrb r2, [r1, #30]
	movs r3, #38
	ldrb r3, [r1, r3]
	orrs r2, r3
	bne.n _080073F0
	push {r0, r1}
	movs r0, #5
	ldr r1, [pc, #120]
	movs r2, #19
	ldr r3, [pc, #120]
	bl sub_080072B8
	bne.n _080073EE
	movs r2, #28
	movs r3, #1
	bl sub_080072F4
	movs r0, #1
	ldr r1, [pc, #104]
	movs r2, #99
	movs r3, #2
	bl sub_080072D8
_080073EE:
	pop {r0, r1}
_080073F0:
	push {r0, r1}
	ldrb r1, [r0, #10]
	lsls r1, r1, #2
	ldr r0, [pc, #92]
	ldr r0, [r0, r1]
	movs r1, #4
_080073FC:
	ldrb r2, [r0, #9]
	orrs r2, r2
	beq.n _0800740C
	push {r0, r1}
	subs r1, #1
	bl sub_08007F10
	pop {r0, r1}
_0800740C:
	adds r0, #28
	subs r1, #1
	bne.n _080073FC
	pop {r0, r1}
	pop {pc}
	.byte 0x00
	.byte 0x00
	.4byte 0x080071d0
	.4byte gPlayerBlockPtrs
	.4byte gPlayerBlockPtrs
	.4byte gPlayerBlockPtrs
	.4byte gPlayerBlockPtrs
	.4byte gPlayerBlockPtrs
	.4byte 0x08007338
	.4byte 0x0800735c
	.4byte 0x00004000
	.4byte 0x03000bd0
	.4byte 0x00000103
	.4byte 0x00000c04
	.4byte 0x03000510
	.4byte 0x00000100
	.4byte 0x03000bd0
	.4byte gPlayerBlockPtrs
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x08
	.byte 0x00
	.byte 0x86
	.byte 0x00
	.byte 0x18
	.byte 0x00
	.byte 0x83
	.byte 0x00
	.byte 0x1c
	.byte 0x01
	.byte 0x83
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x03
	.byte 0x00
	.byte 0x34
	.byte 0x02
	.byte 0x04
	.byte 0x00
	.byte 0x0c
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x48
	.byte 0x02
	.byte 0x82
	.byte 0x00
	.byte 0x04
	.byte 0x00
	.byte 0x06
	.byte 0x00
	.byte 0x54
	.byte 0x00
	.byte 0x02
	.byte 0x00
	.byte 0xa6
	.byte 0x01
	.byte 0x06
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x05
	.byte 0x0f
	.byte 0x0f
	.byte 0x05
	.byte 0x05
	.byte 0x0f
	.byte 0x0f
	.byte 0x05
	.byte 0x08
	.byte 0x0f
	.byte 0x0f
	.byte 0x08
	.byte 0x08
	.byte 0x0f
	.byte 0x0f
	.byte 0x08
	.byte 0x06
	.byte 0x00
	.byte 0xfb
	.byte 0x00
	.byte 0x00
	.byte 0x60
	.byte 0x00
	.byte 0x07
	.byte 0x60
	.byte 0x00
	.byte 0x08
	.byte 0x00
	.byte 0x00
	.byte 0x06
	.byte 0x00
	.byte 0xf9
	.byte 0x01
	.byte 0x02
	.byte 0x04
	.byte 0x08
	.syntax unified
	.thumb

