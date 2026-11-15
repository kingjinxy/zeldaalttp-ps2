	THUMB_FUNC_START sub_080123BC
sub_080123BC: @ 0x080123BC
	ldr r0, _080123DC  @ =gEntityLinks
	add r1, r0, #0
	add r1, r1, #64
	ldr r2, _080123E0  @ =gUnknown_03005AD8
	ldr r3, _080123E4  @ =gUnknown_0202A8C4
	cmp r0, r1
	bcs _080123D4
_080123CA:
	str r0, [r0, #4]
	str r0, [r0]
	add r0, r0, #8
	cmp r0, r1
	bcc _080123CA
_080123D4:
	mov r0, #0
	strb r0, [r2]
	strb r0, [r3]
	bx lr
_080123DC:
	.4byte gEntityLinks
_080123E0:
	.4byte gUnknown_03005AD8
_080123E4:
	.4byte gUnknown_0202A8C4
	THUMB_FUNC_END sub_080123BC

