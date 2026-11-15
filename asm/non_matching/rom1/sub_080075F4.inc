	thumb_func_start sub_080075F4
sub_080075F4: @ 0x080075F4
	push {lr}
	bl sub_080077C8
	mov r3, sl
	ldrb r3, [r3, #0xb]
	orrs r2, r3
	mov r3, sl
	strb r2, [r3, #0xb]
	pop {pc}
	.align 2, 0

