	THUMB_FUNC_START sub_080710B8
sub_080710B8: @ 0x080710B8
	ldr r0, _080710C4  @ =gRam
	ldr r1, _080710C8  @ =0x000009AD
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
_080710C4:
	.4byte gRam
_080710C8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080710B8

