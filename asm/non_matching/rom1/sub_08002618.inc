	.syntax unified
	THUMB_FUNC_START sub_08002618
sub_08002618: @ 0X08002618
	eors r2, r2
	strb r2, [r1, #18]
	strb r2, [r1, #17]
	pop {pc}
	.syntax unified
	.thumb
