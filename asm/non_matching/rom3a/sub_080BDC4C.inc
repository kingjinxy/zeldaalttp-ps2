	THUMB_FUNC_START sub_080BDC4C
sub_080BDC4C: @ 0x080BDC4C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080BDC68  @ =gRam
	ldr r2, _080BDC6C  @ =gUnknown_08170B32
	ldrb r2, [r2, #1]
	ldr r3, _080BDC70  @ =0x00000F18
	add r1, r1, r3
	strb r2, [r1]
	bl sub_080B9454
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDC68:
	.4byte gRam
_080BDC6C:
	.4byte gUnknown_08170B32
_080BDC70:
	.4byte 0x00000F18
	THUMB_FUNC_END sub_080BDC4C

