	THUMB_FUNC_START sub_080B8038
sub_080B8038: @ 0x080B8038
	push {lr}
	bl sub_08069F08
	ldr r0, _080B805C  @ =gRam
	ldr r1, _080B8060  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B8056
	ldr r1, _080B8064  @ =gUnknown_02006882
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B8056:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B805C:
	.4byte gRam
_080B8060:
	.4byte 0x0000099D
_080B8064:
	.4byte gUnknown_02006882
	THUMB_FUNC_END sub_080B8038

