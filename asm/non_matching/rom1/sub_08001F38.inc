	thumb_func_start sub_08001F38
sub_08001F38: @ 0x08001F38
	push {lr}
	bl sub_08001D5C
	ldrb r2, [r1, #0xd]
	cmp r2, #0xff
	beq _08001F5E
	lsls r2, r2, #4
	ldr r3, _08002180 @ =0x0813E4CC
	ldrsh r4, [r3, r2]
	adds r3, #0x80
	ldrsh r5, [r3, r2]
	rsbs r5, r5, #0
	movs r2, #0x8c
	strh r4, [r1, r2]
	movs r2, #0x8e
	strh r5, [r1, r2]
	pop {pc}
	.align 2, 0
_08001F5C:
	.byte 0x00, 0xB5
_08001F5E:
	bl sub_08001D5C
	eors r3, r3
	movs r2, #0x8c
	strh r3, [r1, r2]
	movs r2, #0x8e
	strh r3, [r1, r2]
_08001F6C:
	pop {pc}
	.align 2, 0

