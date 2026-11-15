	thumb_func_start sub_0800125C
sub_0800125C: @ 0x0800125C
	push {lr}
	ldrb r3, [r1, #0xa]
	movs r4, #0x10
	orrs r3, r4
	strb r3, [r1, #0xa]
	pop {pc}

