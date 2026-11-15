	THUMB_FUNC_START sub_080B811C
sub_080B811C: @ 0x080B811C
	push {lr}
	bl sub_08069F08
	ldr r0, _080B813C  @ =gRam
	ldr r1, _080B8140  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B8136
	bl sub_080B6D78
_080B8136:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B813C:
	.4byte gRam
_080B8140:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B811C

