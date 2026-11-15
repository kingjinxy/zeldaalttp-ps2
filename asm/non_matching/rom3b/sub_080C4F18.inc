	THUMB_FUNC_START sub_080C4F18
sub_080C4F18: @ 0x080C4F18
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
	add r0, r4, #0
	bl sub_080C6E3C
	add r0, r4, #0
	bl sub_080C4F3C
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C4F18

	.byte 0x00
	.byte 0x00
