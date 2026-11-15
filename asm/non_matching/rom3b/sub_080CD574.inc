	THUMB_FUNC_START sub_080CD574
sub_080CD574: @ 0x080CD574
	ldr r1, _080CD580  @ =gRam
	ldr r2, _080CD584  @ =0x00001628
	add r1, r1, r2
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080CD580:
	.4byte gRam
_080CD584:
	.4byte 0x00001628
	THUMB_FUNC_END sub_080CD574

