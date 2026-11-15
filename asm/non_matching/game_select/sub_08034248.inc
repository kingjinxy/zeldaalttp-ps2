	THUMB_FUNC_START sub_08034248
sub_08034248: @ 0x08034248
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08034256
	sub r0, r0, #1
	b _0803426E
_08034256:
	mov r0, #88
	mov r1, #8
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08034270
	add r0, r4, #0
	bl sub_0803D3D0
	mov r0, #48
_0803426E:
	strb r0, [r4, #23]
_08034270:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034248

	.byte 0x00
	.byte 0x00
