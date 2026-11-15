	THUMB_FUNC_START sub_08071590
sub_08071590: @ 0x08071590
	ldr r1, _080715A0  @ =gRam
	ldr r0, _080715A4  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080715A0:
	.4byte gRam
_080715A4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071590

