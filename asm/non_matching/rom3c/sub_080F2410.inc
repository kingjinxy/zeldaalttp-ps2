	THUMB_FUNC_START sub_080F2410
sub_080F2410: @ 0x080F2410
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F2430  @ =gRam
	ldr r2, _080F2434  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _080F2438  @ =gUnknown_081791F4
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	pop {r0}
	bx r0
_080F2430:
	.4byte gRam
_080F2434:
	.4byte 0x00000F92
_080F2438:
	.4byte gUnknown_081791F4
	THUMB_FUNC_END sub_080F2410

