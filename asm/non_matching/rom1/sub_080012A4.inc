	thumb_func_start sub_080012A4
sub_080012A4: @ 0x080012A4
	ldrb r2, [r1, #5]
	eors r2, r2
	strb r2, [r1, #5]
	strb r2, [r1, #1]
	ldr r3, [r1, #0x28]
	str r2, [r3, #0x6c]
	mov pc, lr
	.align 2, 0

