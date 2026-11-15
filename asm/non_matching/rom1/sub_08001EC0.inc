	thumb_func_start sub_08001EC0
sub_08001EC0: @ 0x08001EC0
	push {lr}
	ldr r2, _08002178 @ =0x03006C80
	movs r3, #0x45
	ldrb r2, [r0, r3]
	orrs r2, r2
	bne _08001F34
	movs r3, #0x42
	strb r2, [r0, r3]
	bl sub_08001D5C
	movs r3, #7
	ldrb r2, [r1, r3]
	orrs r2, r2
	bne _08001F34
	movs r3, #0x26
	ldrb r2, [r1, r3]
	orrs r2, r2
	beq _08001EEE
	eors r2, r2
	strb r2, [r1, r3]
	bl sub_08002200
	b _08001F28
_08001EEE:
	ldr r2, [r0, #0x38]
	orrs r2, r2
	bne _08001F0E
	ldrb r2, [r1, #0x14]
	orrs r2, r2
	bne _08001F28
	ldrh r2, [r1, #0x36]
	ldr r3, _0800217C @ =0x00001000
	ands r2, r3
	bne _08001F28
	bl sub_08002334
	beq _08001F28
	bl sub_0800125C
	pop {pc}
_08001F0E:
	bl sub_08001D5C
	ldrb r2, [r1, #2]
	movs r3, #0xc0
	tst r2, r3
	bne _08001F34
	movs r2, #0x41
	strb r2, [r1, #2]
	movs r2, #0xff
	movs r3, #0x2b
	strb r2, [r0, r3]
	strb r2, [r1, #0xd]
	pop {pc}
_08001F28:
	movs r3, #0x3c
	ldrb r2, [r0, r3]
	movs r1, #0x7f
	ands r2, r1
	strb r2, [r0, r3]
	eors r2, r2
_08001F34:
	pop {pc}
	.align 2, 0

