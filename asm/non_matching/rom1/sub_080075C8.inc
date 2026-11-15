	thumb_func_start sub_080075C8
sub_080075C8: @ 0x080075C8
	push {lr}
	bl sub_080077C8
	mov r3, sl
	ldrb r3, [r3, #0xa]
	orrs r2, r3
	mov r3, sl
	strb r2, [r3, #0xa]
	pop {pc}
	.align 2, 0

