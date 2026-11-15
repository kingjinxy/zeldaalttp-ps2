	THUMB_FUNC_START sub_080F17B0
sub_080F17B0: @ 0x080F17B0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F17CC  @ =gRam
	ldr r2, _080F17D0  @ =0x00000FC2
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	bl sub_080F17D4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F17CC:
	.4byte gRam
_080F17D0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F17B0

