	thumb_func_start sub_08007620
sub_08007620: @ 0x08007620
	push {lr}
	mov r1, sl
	ldr r1, [r1, #0x2c]
	orrs r1, r1
	beq _08007632
	ldrb r2, [r1, #9]
	cmp r2, #1
	bne _08007664
	pop {pc}
_08007632:
	b _08007688

