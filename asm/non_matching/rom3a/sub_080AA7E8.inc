	THUMB_FUNC_START sub_080AA7E8
sub_080AA7E8: @ 0x080AA7E8
	push {lr}
	ldr r1, _080AA7F8  @ =gKeyCount
	strb r0, [r1]
	bl sub_080AA7FC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA7F8:
	.4byte gKeyCount
	THUMB_FUNC_END sub_080AA7E8

