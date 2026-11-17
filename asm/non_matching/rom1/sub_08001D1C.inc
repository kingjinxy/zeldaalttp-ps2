	.syntax unified
	THUMB_FUNC_START sub_08001D1C
sub_08001D1C: @ 0X08001D1C
	push {r1, lr}
	bl sub_08002350
	bne.n _08001D58
	cmp r3, #144
	beq.n _08001D58
	ldrb r2, [r1, #2]
	movs r3, #192
	tst r2, r3
	bne.n _08001D56
	movs r2, #80
	ldrh r2, [r0, r2]
	lsrs r2, r2, #16
	bcc.n _08001D56
	push {r0}
	ldrb r1, [r0, #10]
	movs r0, #78
	eors r2, r2
	bl sub_0804C8A8
	adds r2, r0, #0
	pop {r0}
	orrs r2, r2
	beq.n _08001D58
	ldrh r3, [r0, #50]
	strh r3, [r2, #50]
	ldrh r3, [r0, #54]
	adds r3, #3
	strh r3, [r2, #54]
_08001D56:
	eors r2, r2
_08001D58:
	pop {r1, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb

