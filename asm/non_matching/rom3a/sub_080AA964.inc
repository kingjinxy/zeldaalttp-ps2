	THUMB_FUNC_START sub_080AA964
sub_080AA964: @ 0x080AA964
	ldr r0, _080AA970  @ =gRam
	ldr r1, _080AA974  @ =0x00000964
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	bx lr
_080AA970:
	.4byte gRam
_080AA974:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AA964

