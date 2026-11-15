	THUMB_FUNC_START sub_080A078C
sub_080A078C: @ 0x080A078C
	ldr r0, _080A07A4  @ =gRam
	ldr r1, _080A07A8  @ =0x000017D8
	add r2, r0, r1
	ldr r1, _080A07AC  @ =0x00000974
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #4
	ldrh r1, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080A07A4:
	.4byte gRam
_080A07A8:
	.4byte 0x000017D8
_080A07AC:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A078C

