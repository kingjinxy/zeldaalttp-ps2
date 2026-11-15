	THUMB_FUNC_START sub_080B35B4
sub_080B35B4: @ 0x080B35B4
	push {lr}
	bl sub_08069FF4
	ldr r0, _080B35D8  @ =gRam
	ldr r1, _080B35DC  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B35D2
	bl sub_080B3368
	bl sub_0806BDA4
_080B35D2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B35D8:
	.4byte gRam
_080B35DC:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B35B4

