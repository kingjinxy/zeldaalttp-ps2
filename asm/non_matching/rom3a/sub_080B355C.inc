	THUMB_FUNC_START sub_080B355C
sub_080B355C: @ 0x080B355C
	ldr r1, _080B3574  @ =gRam
	ldr r0, _080B3578  @ =0x00000A02
	add r2, r1, r0
	mov r0, #16
	strb r0, [r2]
	ldr r0, _080B357C  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080B3574:
	.4byte gRam
_080B3578:
	.4byte 0x00000A02
_080B357C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B355C

