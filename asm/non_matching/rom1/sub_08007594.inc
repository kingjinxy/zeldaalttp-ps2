	thumb_func_start sub_08007594
sub_08007594: @ 0x08007594
	push {lr}
	bl sub_080077C8
	adds r3, r2, #0
	lsls r2, r2, #4
	orrs r2, r3
	mov r3, sl
	ldrb r3, [r3, #4]
	orrs r2, r3
	mov r3, sl
	strb r2, [r3, #4]
	pop {pc}

