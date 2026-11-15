	THUMB_FUNC_START sub_080679CC
sub_080679CC: @ 0x080679CC
	push {r4,r5,lr}
	add r4, r0, #0
	add r5, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #64
	bl sub_08135BCC
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08135C3C
	lsl r0, r0, #16
	lsr r0, r0, #16
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080679CC

	.byte 0x00
	.byte 0x00
