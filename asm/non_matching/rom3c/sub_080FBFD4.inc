	THUMB_FUNC_START sub_080FBFD4
sub_080FBFD4: @ 0x080FBFD4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080FC00C  @ =gRam
	ldr r1, _080FC010  @ =0x00000F22
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsl r1, r1, #1
	strb r1, [r2]
	ldr r1, _080FC014  @ =0x00000F12
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsl r1, r1, #1
	strb r1, [r2]
	ldr r1, _080FC018  @ =0x00000FC2
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsr r1, r1, #1
	strb r1, [r2]
	ldr r1, _080FC01C  @ =0x00000F72
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080FC00C:
	.4byte gRam
_080FC010:
	.4byte 0x00000F22
_080FC014:
	.4byte 0x00000F12
_080FC018:
	.4byte 0x00000FC2
_080FC01C:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080FBFD4

