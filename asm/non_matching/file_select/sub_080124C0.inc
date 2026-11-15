	THUMB_FUNC_START sub_080124C0
sub_080124C0: @ 0x080124C0
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r5, r0, #16
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _080124E2
	mov r0, #4
	strb r0, [r4, #8]
	strb r5, [r4, #9]
	mov r0, #3
	add r1, r4, #0
	bl sub_08012728
	add r0, r4, #0
	b _080124E4
_080124E2:
	mov r0, #0
_080124E4:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080124C0

	.byte 0x00
	.byte 0x00
