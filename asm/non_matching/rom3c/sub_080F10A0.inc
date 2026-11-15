	THUMB_FUNC_START sub_080F10A0
sub_080F10A0: @ 0x080F10A0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F10BC  @ =gRam
	ldr r3, _080F10C0  @ =0x00000F92
	add r2, r1, r3
	add r0, r0, r2
	ldr r2, _080F10C4  @ =0x00000996
	add r1, r1, r2
	ldrb r1, [r1]
	lsr r1, r1, #4
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	bx lr
_080F10BC:
	.4byte gRam
_080F10C0:
	.4byte 0x00000F92
_080F10C4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F10A0

