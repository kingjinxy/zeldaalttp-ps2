	thumb_func_start sub_08007608
sub_08007608: @ 0x08007608
	push {lr}
	bl sub_080077C8
	movs r3, #0xff
	eors r2, r3
	mov r3, sl
	ldrb r3, [r3, #0xb]
	ands r2, r3
	mov r3, sl
	strb r2, [r3, #0xb]
	pop {pc}
	.align 2, 0

