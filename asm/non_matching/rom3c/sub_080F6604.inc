	THUMB_FUNC_START sub_080F6604
sub_080F6604: @ 0x080F6604
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F6620  @ =gRam
	ldr r2, _080F6624  @ =0x00000F22
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #32
	strb r2, [r1]
	bl sub_080F6284
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6620:
	.4byte gRam
_080F6624:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F6604

