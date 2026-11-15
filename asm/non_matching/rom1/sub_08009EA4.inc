	.syntax unified
	THUMB_FUNC_START sub_08009EA4
sub_08009EA4: @ 0X08009EA4
	ldr r2, [pc, #112]
	ldrb r3, [r1, #10]
	lsls r3, r3, #1
	ldrh r2, [r2, r3]
	lsrs r2, r2, #11
	bcs.n _08009EE4
	movs r2, #69
	ldrb r3, [r1, r2]
	cmp r3, #0
	beq.n _08009EE4
	movs r2, #80
	ldrh r3, [r1, r2]
	ldrh r2, [r0, r2]
	ands r2, r3
	lsrs r2, r2, #14
	beq.n _08009EE4
	ldrh r2, [r0, #50]
	ldrh r3, [r1, #50]
	subs r2, r2, r3
	adds r2, #8
	cmp r2, #17
	bcs.n _08009EDC
	ldrh r2, [r0, #54]
	ldrh r3, [r1, #54]
	subs r2, r2, r3
	adds r2, #8
	cmp r2, #17
	bcc.n _08009EE4
_08009EDC:
	push {lr}
	bl 0x803cecc
	pop {pc}
_08009EE4:
	movs r2, #43
	ldrb r0, [r0, r2]
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.byte 0xa0
	.byte 0x92
	.byte 0x00
	.byte 0x08
	.byte 0x50
	.byte 0x04
	.byte 0x00
	.byte 0x03
	.4byte 0x03000e20
	.4byte 0x08003b54
	.4byte 0x08002b50
	.4byte 0x08002cc4
	.4byte 0x08009e68
	.4byte 0x00001800
	.byte 0x20
	.byte 0x0e
	.byte 0x00
	.byte 0x03
	.byte 0x54
	.byte 0x3b
	.byte 0x00
	.byte 0x08
	.byte 0x40
	.byte 0x09
	.byte 0x00
	.byte 0x03
	.4byte 0x03000940
	.syntax unified
	.thumb
