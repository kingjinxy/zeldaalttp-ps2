	THUMB_FUNC_START sub_080161F8
sub_080161F8: @ 0x080161F8
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _08016208  @ =gUnknown_03000450
	strh r0, [r2, #22]
	mov r0, #3
	and r1, r1, r0
	strb r1, [r2, #5]
	bx lr
_08016208:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080161F8

