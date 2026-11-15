	THUMB_FUNC_START sub_080F25F4
sub_080F25F4: @ 0x080F25F4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F2614  @ =gRam
	ldr r1, _080F2618  @ =0x00001172
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r1, _080F261C  @ =0x00000F62
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080F2614:
	.4byte gRam
_080F2618:
	.4byte 0x00001172
_080F261C:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080F25F4

