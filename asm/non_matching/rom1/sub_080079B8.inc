	thumb_func_start sub_080079B8
sub_080079B8: @ 0x080079B8
	mov r1, sl
	ldrb r2, [r1, #2]
	orrs r2, r2
	bne _080079C6
	ldrh r2, [r1, #0x36]
	ldr r3, _08007A34 @ =0x00001201
	ands r2, r3
_080079C6:
	mov pc, lr

