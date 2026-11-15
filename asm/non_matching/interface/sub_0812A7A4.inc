	THUMB_FUNC_START sub_0812A7A4
sub_0812A7A4: @ 0x0812A7A4
	push {lr}
	bl sub_0812CC24
	bl sub_0812C3DC
	bl sub_0812B520
	ldr r0, _0812A7C4  @ =gUnknown_03000153
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812A7BE
	bl sub_0812B328
_0812A7BE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A7C4:
	.4byte gUnknown_03000153
	THUMB_FUNC_END sub_0812A7A4

