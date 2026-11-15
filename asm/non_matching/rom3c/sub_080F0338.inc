	THUMB_FUNC_START sub_080F0338
sub_080F0338: @ 0x080F0338
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080F0354  @ =gRam
	ldr r2, _080F0358  @ =0x00000F52
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F035C
	add r0, r1, #0
	bl sub_080EFDF4
	b _080F0362
_080F0354:
	.4byte gRam
_080F0358:
	.4byte 0x00000F52
_080F035C:
	add r0, r1, #0
	bl sub_080EFFB0
_080F0362:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F0338

	.byte 0x00
	.byte 0x00
