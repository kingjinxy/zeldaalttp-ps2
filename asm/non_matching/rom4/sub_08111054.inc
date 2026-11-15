	THUMB_FUNC_START sub_08111054
sub_08111054: @ 0x08111054
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_08110DC8
	add r0, r4, #0
	bl sub_08110E60
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08111054

	.byte 0x00
	.byte 0x00
