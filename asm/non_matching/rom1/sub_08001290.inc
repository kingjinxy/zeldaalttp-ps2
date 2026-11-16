	thumb_func_start sub_08001290
sub_08001290: @ 0x08001290
	eors r3, r3
	strb r3, [r1, #0xc]
	strb r2, [r0, #0x14]
	strb r3, [r0, #0x15]
	strb r3, [r0, #0x16]
	bl DoPlayerItemEntity
	pop {pc}
	.thumb_func
	.global sub_080012A0
sub_080012A0: @ entry point: mov r1, r0, then falls into sub_080012A4
_080012A0:
	.byte 0x01, 0x1C, 0x00, 0x00

