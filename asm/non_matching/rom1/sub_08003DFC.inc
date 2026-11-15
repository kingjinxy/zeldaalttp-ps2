	thumb_func_start sub_08003DFC
sub_08003DFC: @ 0x08003DFC
	ldr r1, _08003EBC @ =0x0201EF20
	ldrb r2, [r1]
	cmp r2, #8
	bhs _08003E0E
	adds r3, r2, #1
	strb r3, [r1]
	ldr r1, _08003EC0 @ =0x0201EDD0
	lsls r2, r2, #1
	strh r0, [r1, r2]
_08003E0E:
	mov pc, lr

