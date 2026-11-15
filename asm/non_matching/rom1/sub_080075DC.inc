	thumb_func_start sub_080075DC
sub_080075DC: @ 0x080075DC
	push {lr}
	bl sub_080077C8
	movs r3, #0xff
	eors r2, r3
	mov r3, sl
	ldrb r3, [r3, #0xa]
	ands r2, r3
	mov r3, sl
	strb r2, [r3, #0xa]
	pop {pc}
	.align 2, 0

