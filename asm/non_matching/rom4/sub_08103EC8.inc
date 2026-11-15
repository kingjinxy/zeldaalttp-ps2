	THUMB_FUNC_START sub_08103EC8
sub_08103EC8: @ 0x08103EC8
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #74
	mov r2, #11
	bl sub_080C9AAC
	cmp r0, #0
	blt _08103EEC
	lsl r4, r0, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	bl sub_080C2914
_08103EEC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08103EC8

	.byte 0x00
	.byte 0x00
