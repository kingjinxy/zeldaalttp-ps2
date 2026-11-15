	THUMB_FUNC_START sub_080D8C00
sub_080D8C00: @ 0x080D8C00
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D8C1C  @ =gRam
	ldr r1, _080D8C20  @ =0x00000F72
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	bl sub_080C3758
	pop {r0}
	bx r0
_080D8C1C:
	.4byte gRam
_080D8C20:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080D8C00

