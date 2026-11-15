	THUMB_FUNC_START sub_080F5148
sub_080F5148: @ 0x080F5148
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F515C  @ =gRam
	ldr r2, _080F5160  @ =0x00000F92
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #4
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080F515C:
	.4byte gRam
_080F5160:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F5148

