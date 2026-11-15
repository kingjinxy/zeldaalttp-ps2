	THUMB_FUNC_START sub_080B8008
sub_080B8008: @ 0x080B8008
	push {lr}
	bl sub_08069FF4
	ldr r0, _080B802C  @ =gRam
	ldr r1, _080B8030  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B8026
	ldr r1, _080B8034  @ =gUnknown_02006882
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B8026:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B802C:
	.4byte gRam
_080B8030:
	.4byte 0x0000099D
_080B8034:
	.4byte gUnknown_02006882
	THUMB_FUNC_END sub_080B8008

