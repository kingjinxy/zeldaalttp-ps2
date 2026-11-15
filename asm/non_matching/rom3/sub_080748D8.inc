	THUMB_FUNC_START sub_080748D8
sub_080748D8: @ 0x080748D8
	ldr r1, _080748F4  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r0, _080748F8  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080748F4:
	.4byte gRam
_080748F8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080748D8

