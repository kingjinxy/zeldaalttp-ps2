	.syntax unified
	THUMB_FUNC_START sub_08008868
sub_08008868: @ 0X08008868
	push {r4, lr}
	ldr r2, [pc, #648]
	ldrb r2, [r2, #0]
	orrs r2, r2
	bne.n _080088B2
	ldr r2, [pc, #644]
	ldrb r1, [r0, #20]
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	ldr r2, [pc, #640]
	mov lr, r2
	bx r1
	.syntax unified
	.thumb
