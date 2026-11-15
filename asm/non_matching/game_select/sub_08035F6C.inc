	THUMB_FUNC_START sub_08035F6C
sub_08035F6C: @ 0x08035F6C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035FAC
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #120
	mov r0, #120
	strh r0, [r1]
	mov r0, #105
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08035FAC
	ldrb r0, [r4, #23]
	strb r0, [r1, #23]
	str r4, [r1, #84]
	add r0, r4, #0
	bl sub_0803D3D0
_08035FAC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035F6C

	.byte 0x00
	.byte 0x00
