	THUMB_FUNC_START sub_08012494
sub_08012494: @ 0x08012494
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r5, r0, #16
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _080124B6
	mov r0, #4
	strb r0, [r4, #8]
	strb r5, [r4, #9]
	mov r0, #5
	add r1, r4, #0
	bl sub_08012728
	add r0, r4, #0
	b _080124B8
_080124B6:
	mov r0, #0
_080124B8:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08012494

	.byte 0x00
	.byte 0x00
