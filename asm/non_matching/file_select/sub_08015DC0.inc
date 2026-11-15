	THUMB_FUNC_START sub_08015DC0
sub_08015DC0: @ 0x08015DC0
	lsl r0, r0, #16
	lsr r0, r0, #30
	cmp r0, #2
	beq _08015DD0
	ldr r0, _08015DCC  @ =gUnknown_0201F020
	b _08015DD2
_08015DCC:
	.4byte gUnknown_0201F020
_08015DD0:
	ldr r0, _08015DD4  @ =gUnknown_0200B320
_08015DD2:
	bx lr
_08015DD4:
	.4byte gUnknown_0200B320
	THUMB_FUNC_END sub_08015DC0

