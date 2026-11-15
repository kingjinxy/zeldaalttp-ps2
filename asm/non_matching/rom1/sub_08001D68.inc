	thumb_func_start sub_08001D68
sub_08001D68: @ 0x08001D68
	push {lr}
	bl sub_08001D5C
	ldr r3, _0800214C @ =0x0000023C
	ldrb r2, [r1, #5]
	orrs r2, r2
	bne _08001DCA
	movs r3, #0x6c
	ldrb r2, [r1, #0x1b]
	movs r4, #0x48
	tst r2, r4
	bne _08001DEE
	orrs r2, r2
	beq _08001D9A
	push {r1, r3}
	bl sub_080013D0
	pop {r1, r3}
	beq _08001DCA
	ldrb r2, [r1, #0x1b]
	movs r4, #0xf7
	ands r2, r4
	strb r2, [r1, #0x1b]
	movs r3, #0x70
	bne _08001DCA
_08001D9A:
	ldr r3, _08002150 @ =0x00000258
	ldrb r2, [r1, #0xf]
	movs r4, #1
	tst r2, r4
	bne _08001DCA
	ldr r3, _08002154 @ =0x0000019C
	ldrb r2, [r1, #0x1e]
	orrs r2, r2
	bne _08001DCA
	movs r3, #0x60
	ldrb r2, [r1, #3]
	orrs r2, r2
	bne _08001DCA
	movs r3, #0x21
	ldrb r2, [r1, r3]
	ldr r3, _08002158 @ =0x00000188
	orrs r2, r2
	bne _08001DCA
	movs r3, #0x26
	ldrb r2, [r1, r3]
	ldr r3, _0800215C @ =0x00000194
	orrs r2, r2
	bne _08001DCA
	movs r3, #4
_08001DCA:
	strh r3, [r1, #8]
	ldrb r2, [r1, #0xf]
	movs r4, #1
	tst r2, r4
	bne _08001DEE
	ldrb r2, [r1, #3]
	orrs r2, r2
	bne _08001DEE
	movs r4, #0xff
	ands r3, r4
	ldrb r2, [r1]
	cmp r2, r3
	bne _08001DEE
	pop {r1}
	mov lr, r1
	ldrb r1, [r0, #0x1b]
	ldr r3, _08002160 @ =sub_080037EC
	bx r3
_08001DEE:
	strb r3, [r1]
	pop {pc}
	.align 2, 0

