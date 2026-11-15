	THUMB_FUNC_START sub_080C94D0
sub_080C94D0: @ 0x080C94D0
	push {r4,r5,lr}
	add r5, r1, #0
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C967C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C94EC
	add r0, r4, #0
	add r1, r5, #0
	bl sub_080C8DAC
_080C94EC:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C94D0

	.byte 0x00
	.byte 0x00
