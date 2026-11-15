	THUMB_FUNC_START sub_080338C0
sub_080338C0: @ 0x080338C0
	push {r4,lr}
	add r4, r0, #0
	mov r0, #88
	mov r1, #7
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _080338E4
	mov r3, #128
	lsl r3, r3, #12
	add r0, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	mov r0, #3
	strb r0, [r4, #20]
_080338E4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080338C0

	.byte 0x00
	.byte 0x00
