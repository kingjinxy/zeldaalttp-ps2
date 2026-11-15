	.syntax unified
	THUMB_FUNC_START sub_08009554
sub_08009554: @ 0X08009554
	mov r3, lr
	push {r3, r4}
	adds r4, r0, #0
	ldrb r2, [r0, #20]
	cmp r2, #0
	beq.n _0800957C
	ldr r1, [pc, #744]
	ldrh r1, [r1, #0]
	cmp r1, #0
	bne.n _0800959C
	bl 0x8003130
_0800956C:
	adds r0, r4, #0
	ldrb r1, [r0, #9]
	lsls r1, r1, #2
	ldr r2, [pc, #732]
	ldr r1, [r2, r1]
	ldr r2, [pc, #732]
	mov lr, r2
	bx r1
_0800957C:
	bl 0x8043b94
	cmp r0, #0
	beq.n _0800956C
	adds r0, r4, #0
	bl 0x8012540
	pop {r3, r4}
	bx r3
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
