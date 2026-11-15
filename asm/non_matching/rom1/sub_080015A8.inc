	thumb_func_start sub_080015A8
sub_080015A8: @ 0x080015A8
	push {lr}
	ldr r1, _08001728 @ =0x03000510
	ldrb r1, [r1]
	lsrs r1, r1, #4
	ldr r2, _0800172C @ =0x080011C0
	ldrb r3, [r1, r2]
	bl sub_08001D5C
	strb r3, [r1, #0xd]
	pop {pc}

