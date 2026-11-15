	thumb_func_start sub_080075AC
sub_080075AC: @ 0x080075AC
	push {lr}
	bl sub_080077C8
	adds r3, r2, #0
	lsls r2, r2, #4
	orrs r2, r3
	movs r3, #0xff
	eors r2, r3
	mov r3, sl
	ldrb r3, [r3, #4]
	ands r2, r3
	mov r3, sl
	strb r2, [r3, #4]
	pop {pc}

