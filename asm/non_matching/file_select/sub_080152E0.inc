	THUMB_FUNC_START sub_080152E0
sub_080152E0: @ 0x080152E0
	ldr r0, _080152EC  @ =gUnknown_02000004
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080152F0  @ =gUnknown_02016324
	strb r1, [r0]
	bx lr
_080152EC:
	.4byte gUnknown_02000004
_080152F0:
	.4byte gUnknown_02016324
	THUMB_FUNC_END sub_080152E0

