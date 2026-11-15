	THUMB_FUNC_START sub_080FF684
sub_080FF684: @ 0x080FF684
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080FF6A0  @ =gRam
	ldr r2, _080FF6A4  @ =0x00001142
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #16
	strb r2, [r1]
	ldr r1, _080FF6A8  @ =0x000010A2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #8
	strb r1, [r0]
	bx lr
_080FF6A0:
	.4byte gRam
_080FF6A4:
	.4byte 0x00001142
_080FF6A8:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080FF684

