	THUMB_FUNC_START sub_080B64C4
sub_080B64C4: @ 0x080B64C4
	push {lr}
	bl sub_08069FF4
	ldr r1, _080B64E8  @ =gRam
	ldr r2, _080B64EC  @ =0x0000099D
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B64E4
	ldr r0, _080B64F0  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080B64E4:
	pop {r0}
	bx r0
_080B64E8:
	.4byte gRam
_080B64EC:
	.4byte 0x0000099D
_080B64F0:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B64C4

