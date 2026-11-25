	THUMB_FUNC_START sub_080145B4
sub_080145B4: @ 0x080145B4
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	bl sub_08009380
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #66
	eor r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	lsr r1, r1, #31
	add r0, r1, #0
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080145B4

	.byte 0x00
	.byte 0x00
