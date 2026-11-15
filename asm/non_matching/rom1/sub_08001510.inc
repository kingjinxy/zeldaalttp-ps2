	thumb_func_start sub_08001510
sub_08001510: @ 0x08001510
	push {lr}
	bl sub_08001D5C
	eors r2, r2
	strb r2, [r1, #0x10]
	bl sub_08001528
	strb r3, [r1, #0x12]
	ldr r4, _08001718 @ =0x0800110C
	adds r4, r4, r3
	ldr r4, [r4]
	bx r4

