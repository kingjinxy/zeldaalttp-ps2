	.syntax unified
	THUMB_FUNC_START sub_08008B30
sub_08008B30: @ 0X08008B30
	ldr r0, [pc, #816]
	ldr r1, [r0, #0]
	orrs r1, r1
	bne.n _08008B3A
	mov pc, lr
_08008B3A:
	push {r4, r5, r6, r7, lr}
	movs r7, #0
	ldrh r4, [r0, #32]
	adds r3, r4, #0
	ldrh r5, [r0, #24]
	subs r4, r4, r5
	ldrh r2, [r1, #50]
	adds r3, #120
	.syntax unified
	.thumb
