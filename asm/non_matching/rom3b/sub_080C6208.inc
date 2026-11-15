	THUMB_FUNC_START sub_080C6208
sub_080C6208: @ 0x080C6208
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2B14
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C6226
	add r0, r4, #0
	bl sub_080C5614
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C6228
_080C6226:
	mov r0, #0
_080C6228:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C6208

	.byte 0x00
	.byte 0x00
