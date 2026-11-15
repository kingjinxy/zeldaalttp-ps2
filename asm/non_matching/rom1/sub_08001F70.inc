	thumb_func_start sub_08001F70
sub_08001F70: @ 0x08001F70
	push {lr}
	bl sub_08001D5C
	ldrb r2, [r1, #7]
	orrs r2, r2
	bne _08001F6C
	ldrb r2, [r1, #0xd]
	b _08001F86

