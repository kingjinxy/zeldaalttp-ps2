	THUMB_FUNC_START sub_08015D8C
sub_08015D8C: @ 0x08015D8C
	ldr r0, _08015D98  @ =gUnknown_03000450
	mov r2, #0
	mov r1, #1
	strb r1, [r0, #6]
	strb r2, [r0, #4]
	bx lr
_08015D98:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08015D8C

