	thumb_func_start sub_0800127C
sub_0800127C: @ 0x0800127C
	push {lr}
	bl sub_08001D5C
	pop {r3}
	mov lr, r3
	ldrb r2, [r1, #0xc]
	orrs r2, r2
	bne sub_08001290
	mov pc, lr
	.align 2, 0

