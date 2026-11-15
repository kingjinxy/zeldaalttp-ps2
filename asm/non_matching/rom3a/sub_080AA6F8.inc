	THUMB_FUNC_START sub_080AA6F8
sub_080AA6F8: @ 0x080AA6F8
	ldr r1, _080AA714  @ =gRam
	ldr r2, _080AA718  @ =gUnknown_0816B62C
	ldr r3, _080AA71C  @ =0x00000A4E
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r2, _080AA720  @ =0x0000178C
	add r1, r1, r2
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080AA714:
	.4byte gRam
_080AA718:
	.4byte gUnknown_0816B62C
_080AA71C:
	.4byte 0x00000A4E
_080AA720:
	.4byte 0x0000178C
	THUMB_FUNC_END sub_080AA6F8

