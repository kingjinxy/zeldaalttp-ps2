	THUMB_FUNC_START sub_080B3544
sub_080B3544: @ 0x080B3544
	push {lr}
	bl sub_08069D20
	ldr r1, _080B3558  @ =gUnknown_02010980
	mov r0, #0
	strb r0, [r1]
	bl sub_080B1DB4
	pop {r0}
	bx r0
_080B3558:
	.4byte gUnknown_02010980
	THUMB_FUNC_END sub_080B3544

